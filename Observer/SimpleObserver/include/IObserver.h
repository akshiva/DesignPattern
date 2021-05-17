#ifndef Included_IObserver_H

#define Included_IObserver_H

#include<iostream>
#include<string>

class IObserver
{
public:
	virtual ~IObserver(){};
	virtual void Update(const std::string &update);
};
#endif