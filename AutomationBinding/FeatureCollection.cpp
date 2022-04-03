#include "FeatureCollection.h"
#include "Block.h"
#include "BlockBuilder.h"
#include "Sphere.h"
#include "SphereBuilder.h"
#include <iostream>

AutomationAPI::FeatureCollection::FeatureCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::FeatureCollection::~FeatureCollection()
{

}

AutomationAPI::BlockBuilder* AutomationAPI::FeatureCollection::CreateBlockBuilder(AutomationAPI::Block* block)
{
	if (block == nullptr)
	{
		std::cout << "Block is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Block is edit/query mode" << std::endl;
	}


	return nullptr;

}




AutomationAPI::SphereBuilder* AutomationAPI::FeatureCollection::CreateSphereBuilder(AutomationAPI::Sphere* sphere)
{
	if (sphere == nullptr)
	{
		std::cout << "Sphere is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Sphere is edit/query mode" << std::endl;
	}


	return nullptr;

}