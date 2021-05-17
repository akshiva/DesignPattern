#include<iostream>
#include<string>
#include"ObserverImpl.h"

int ObserverImpl::observer_count=0;

ObserverImpl::ObserverImpl(SubjectImpl &obj): mySubject(obj)
{
	obj.Attach(this);
	std::cout<<"Added observer now count is "<<++ObserverImpl::observer_count<<std::endl;
	this->current_observer = ObserverImpl::observer_count;
}


//ObserverImpl::~ObserverImpl()
//{
//	std::cout<<"Destructing Observer " << this->current_observer<<std::endl;
//}
void ObserverImpl::Update(const std::string &update)
{
	std::cout<<update<<std::endl;
}

void ObserverImpl::RemoveAsObserver()
{
	this->mySubject.Detach(this);
}

void ObserverImpl::LogObserverInfo()
{
	std::cout<<"Observer "<<this->current_observer<<std::endl;
}
