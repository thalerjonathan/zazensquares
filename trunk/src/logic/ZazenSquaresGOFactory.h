#ifndef _ZAZENSQUARES_GOFACTORY_H_
#define _ZAZENSQUARES_GOFACTORY_H_

#include <core/IGameObjectFactory.h>

class ZazenSquaresGOFactory : public IGameObjectFactory
{
	public:
		ZazenSquaresGOFactory();
		virtual ~ZazenSquaresGOFactory();

		IGameObject* createObject( const std::string& );
};

#endif /* _ZAZENSQUARES_GOFACTORY_H_ */
