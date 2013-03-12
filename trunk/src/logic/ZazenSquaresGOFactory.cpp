/*
 * ZazenSquaresGOFactory.cpp
 *
 *  Created on: 12.03.2013
 *      Author: jonathan
 */

#include "ZazenSquaresGOFactory.h"

#include "objectclasses/GOUserControl.h"

#include <iostream>

using namespace std;

ZazenSquaresGOFactory::ZazenSquaresGOFactory()
{
}

ZazenSquaresGOFactory::~ZazenSquaresGOFactory()
{
}

IGameObject*
ZazenSquaresGOFactory::createObject( const std::string& objectClass )
{
	IGameObject* gameObjectInstance = 0;

	if ( objectClass == "UserControl" )
	{
		return new GOUserControl();
	} 
	else if ( objectClass == "BouncySphere" )
	{
		// TODO return instance
	}
	else
	{
		cout << "WARNING ... in ZazenSquaresGOFactory::createObject: unknown object-class '" << objectClass << "'" << endl;
	}

	return gameObjectInstance;
}
