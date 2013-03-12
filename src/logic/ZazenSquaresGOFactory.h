/*
 * ZazenSquaresGOFactory.h
 *
 *  Created on: 12.03.2013
 *      Author: jonathan
 */

#ifndef ZAZENSQUARESGOFACTORY_H_
#define ZAZENSQUARESGOFACTORY_H_

#include <core/IGameObjectFactory.h>

class ZazenSquaresGOFactory : public IGameObjectFactory
{
	public:
		ZazenSquaresGOFactory();
		virtual ~ZazenSquaresGOFactory();

		IGameObject* createObject( const std::string& );
};

#endif /* ZAZENSQUARESGOFACTORY_H_ */
