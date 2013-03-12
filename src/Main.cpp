/*
 * Main.cpp
 *
 *  Created on: 27.06.2010
 *      Author: joni
 */

#include "Core.h"

#include "logic/ZazenSquaresGOFactory.h";

int main( int argc, char** args )
{
	int ret = 0;
	IGameObjectFactory* objectFactory = new ZazenSquaresGOFactory();

	if ( Core::initalize( "../media/", objectFactory ) )
	{
		Core::getRef().start();
	}
	else
	{
		ret = 1;
	}

	Core::shutdown();

	return ret;
}
