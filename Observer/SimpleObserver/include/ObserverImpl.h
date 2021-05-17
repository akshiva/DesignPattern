#ifndef Included_ObserverImpl_H

#define Included_ObserverImpl_H

#include<iostream>
#include"IObserver.h"
#include"SubjectImpl.h"

class ObserverImpl: public IObserver
{
public:
	ObserverImpl(SubjectImpl &obj);
	~ObserverImpl(){};
	void Update(const std::string &update);
	void RemoveAsObserver();
	void LogObserverInfo();

	SubjectImpl mySubject;
	static int observer_count;
	int current_observer;
};

#endif