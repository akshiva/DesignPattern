#include<iostream>
#include"LoggerSingleton.h"
#include<string>
#include <fstream>


LoggerSingleton* LoggerSingleton::LoggerObj=NULL;
std::ofstream LoggerSingleton::_fout;
void LoggerSingleton::Log(std::string &data)
{
    _fout<<data;
   std::cout<<data<<std::endl;
}


void LoggerSingleton::Log(std::wstring &data)
{
    _fout<<data.c_str();
    std::cout<<data.c_str()<<std::endl;
}

LoggerSingleton::LoggerSingleton()
{
    std::cout<<"Constructing Logger"<<std::endl;
}

LoggerSingleton::~LoggerSingleton()
{
    _fout.close();
    std::cout<<"Destructing Logger"<<std::endl;
}

LoggerSingleton& LoggerSingleton::operator=(const LoggerSingleton&){ 
    return *this; 
}



LoggerSingleton* LoggerSingleton::getLoger()
{
    if(LoggerObj == NULL)
        {
            std::cout<<"Creating Instance"<<std::endl;
            _fout.open("Log",std::ios::out | std::ios::app);
            LoggerObj = new LoggerSingleton();
        }
        std::cout<<"Instance Created Returning Logger"<<std::endl;
    return LoggerObj;
}
