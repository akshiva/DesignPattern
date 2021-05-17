#include<iostream>
#include<string>
#include"SubjectImpl.h"

void SubjectImpl::DoActivity(std::string activity)
{
	m_message = activity;
	std::cout<<m_message<<std::endl;
	Notify(m_message);	
}


void SubjectImpl::Notify(std::string upate_msg)
{
	std::list<IObserver*>::iterator iter=observer_list.begin();
	for(; iter!=observer_list.end();iter++)
	{
		(*iter)->Update(upate_msg);
	}
	/*for_each(observer_list.begin(), observer_list.end(), [](IObserver* obj)
    {
        obj->Update(upate_msg);
    });*/


}

void SubjectImpl::Attach(IObserver *obj)
{
	observer_list.push_back(obj);
}
void SubjectImpl::Detach(IObserver *obj)
{
	observer_list.remove(obj);
}

void SubjectImpl::HowManyObserver()
{
	std::cout<<"There are " <<observer_list.size()<<" Observers"<<std::endl;
}

