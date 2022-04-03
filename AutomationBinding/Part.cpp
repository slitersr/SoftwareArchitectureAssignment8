#include "Part.h"
#include "..\Core\GuidObject.h"
#include "..\AppPartOps\PartOps.h"
#include "FeatureCollection.h"
#include "RoutingCollection.h"

using namespace AutomationAPI;

namespace AutomationAPI
{
	class PartImpl
	{
	public:

		FeatureCollection* Features();
		RoutingCollection* Routing();

		virtual ~PartImpl();
		PartImpl() = delete;

		PartImpl(int guid);
		int m_guid;
		FeatureCollection* m_featureCollection;
		RoutingCollection* m_routingCollection;

	};
}

void AutomationAPI::Part::SaveSphereRadius(int radius)
{
	PartFile* part = dynamic_cast<PartFile*>(GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_partImpl->m_guid));
	if (part == nullptr)
	{
		throw std::exception("not able to retrieve Part Object");
	}
	else
	{
		Journaling_Part_SaveRadiusSize(part, radius);
	}

}


void AutomationAPI::Part::Save()
{
	PartFile* part = dynamic_cast<PartFile*>(GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_partImpl->m_guid));
	if (part == nullptr)
	{
		throw std::exception("not able to retrieve Part Object");
	}
	else
	{
		Journaling_Part_Save(part);
	}

}

void AutomationAPI::Part::MakeWidgetFeature(bool option1, int values)
{
	PartFile* part = dynamic_cast<PartFile*>(GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_partImpl->m_guid));
	if (part == nullptr)
	{
		throw std::exception("not able to retrieve Part Object");
	}
	else
	{
		Journaling_Part_MakeWidgetFeature(part, option1, values);
	}
}

Part* AutomationAPI::Part::CreatePart(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new Part(guid);
}

AutomationAPI::Part::Part(int guid)
{
	m_partImpl = new AutomationAPI::PartImpl(guid);
}

AutomationAPI::Part::~Part()
{
	delete m_partImpl;
}

AutomationAPI::PartImpl::PartImpl(int guid)
{
	m_guid = guid;
	m_featureCollection = new FeatureCollection(m_guid);
	m_routingCollection = new RoutingCollection(m_guid);
}

AutomationAPI::PartImpl::~PartImpl()
{

	delete m_featureCollection ;
	delete m_routingCollection ;
}

AutomationAPI::RoutingCollection* AutomationAPI::PartImpl::Routing()
{
	return m_routingCollection;
}

AutomationAPI::RoutingCollection* AutomationAPI::Part::Routing()
{
	return m_partImpl->Routing();
}

AutomationAPI::FeatureCollection* AutomationAPI::PartImpl::Features()
{
	return m_featureCollection;
}

AutomationAPI::FeatureCollection* AutomationAPI::Part::Features()
{
	return m_partImpl->Features();
}

