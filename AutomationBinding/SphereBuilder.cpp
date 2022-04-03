#include "SphereBuilder.h"
#include "CADObject.h"
#include "BlockBuilder.h"



AutomationAPI::CADObject* AutomationAPI::SphereBuilder::Commit()
{
	return nullptr;
}


void AutomationAPI::SphereBuilder::SetType(SphereBuilderTypes type)
{
}


AutomationAPI::SphereBuilder::SphereBuilderTypes AutomationAPI::SphereBuilder::GetType()
{
	return AutomationAPI::SphereBuilder::TypesCircle;
}

void AutomationAPI::SphereBuilder::SetRadius(int r)
{
}

int AutomationAPI::SphereBuilder::GetRadius()
{
	return 0;
}

void AutomationAPI::SphereBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::SphereBuilder::GetOrigin(int& x, int& y, int& z)
{
}
