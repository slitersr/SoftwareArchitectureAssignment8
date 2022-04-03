#pragma once
#include "AutomationBindingExports.h"
#include "IBuilder.h"

namespace AutomationAPI
{
	class CADObject;


	class AUTOMATIONBINDING_API SphereBuilder : public IBuilder
	{
	public:
		enum SphereBuilderTypes
		{
			TypesCircle, /**Represents the sphere created by providing singular radius, perfectly circular sphere. */
			TypesOval, /**Represents the sphere created by providing two dimensions to create oval shaped sphere.*/
		};

		void SetType(SphereBuilderTypes type);
		SphereBuilderTypes GetType();

		void SetRadius(int r);
		int GetRadius();
		void SetOrigin(int x, int y, int z);
		void GetOrigin(int& x, int& y, int& z);


		CADObject* Commit() override;
	private:


	};
}
