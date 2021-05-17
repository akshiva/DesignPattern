#ifndef Included_ISubject_H

#define Included_ISubject_H

#include<iostream>
#include<string>
#include "IObserver.h"


class ISubject
{
public:
	virtual ~ISubject(){};
	virtual void DoActivity(std::string activity) = 0;
	virtual void Notify(std::string) = 0;
	virtual void Attach(IObserver *obj) = 0;
	virtual void Detach(IObserver *obj) = 0;
};
#endif