#include "Core.h"

#include "logic/ZazenSquaresGOFactory.h"

#include <windows.h>

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR sCmdLine, int iShow )
{
	int ret = 0;
	IGameObjectFactory* objectFactory = new ZazenSquaresGOFactory();

	if ( Core::initalize( "../config/", objectFactory ) )
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
