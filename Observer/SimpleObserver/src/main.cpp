#include<iostream>
#include"SubjectImpl.h"
#include"ObserverImpl.h"

int main()
{
	SubjectImpl *sub_obj = new SubjectImpl();
	ObserverImpl *obse_1 = new ObserverImpl(*sub_obj);
	return 0;
}