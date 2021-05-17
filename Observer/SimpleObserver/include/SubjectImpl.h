#ifndef Included_SubjectImpl_H

#define Included_SubjectImpl_H

#include<iostream>
#include"ISubject.h"
#include"IObserver.h"
#include<list>



class SubjectImpl:public ISubject
{
public:
	void DoActivity(std::string activity);
	void Notify(std::string);
	void Attach(IObserver *obj);
	void Detach(IObserver *obj);
	void HowManyObserver();
	std::list<IObserver*> observer_list;
	std::string m_message;
};

#endif