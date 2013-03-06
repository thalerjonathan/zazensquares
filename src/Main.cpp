/*
 * Main.cpp
 *
 *  Created on: 27.06.2010
 *      Author: joni
 */

#include "Core.h"

int main( int argc, char** args )
{
	int ret = 0;

	if ( Core::initalize( "../media/" ) )
	{
		Core::getInstance().start();
	}
	else
	{
		ret = 1;
	}

	Core::shutdown();

	return ret;
}
