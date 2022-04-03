#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class BlockBuilder;
	class Block;

	class SphereBuilder;
	class Sphere;

	class AUTOMATIONBINDING_API FeatureCollection
	{
		public:
			FeatureCollection(int guid);

			virtual ~FeatureCollection();

			BlockBuilder* CreateBlockBuilder(Block* block);

			SphereBuilder* CreateSphereBuilder(Sphere* sphere);



		private:
			int m_guid;
	};
}
