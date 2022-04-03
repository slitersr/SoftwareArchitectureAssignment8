#pragma once

#include "AutomationBindingExports.h"
#include <string>


namespace AutomationAPI
{

	class FeatureCollection;
	class RoutingCollection;
	class PartImpl;

	class AUTOMATIONBINDING_API Part
	{
		public :

			/**
			* <summary>Saves the Sphere Part Radius.</summary>
			*/
			void SaveSphereRadius(int radius);


			/**
			* <summary>Saves the Part File.</summary>  More commetns and details blah blah blah
			*/
			void Save();

			/**
			* <summary>Makes a Widget Feature</summary> Even More commetns and details blah blah blah
			*/
			void MakeWidgetFeature(bool option1, int values);


			/**
			* Returns the Feature collection for the part.
			*/
			FeatureCollection* Features();


			/**
			* Returns the Routing collection for the part.
			*/
			RoutingCollection* Routing();
			/*
			* Internal Usage only.
			*/
			static Part* CreatePart(int guid);

			virtual ~Part();
			Part() = delete;

		private:
			
			Part(int guid);
			PartImpl *m_partImpl;

	};

}
