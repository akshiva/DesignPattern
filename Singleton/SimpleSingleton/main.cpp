#include<iostream>
#include"LoggerSingleton.h"
#include<string>

int main()
{
    LoggerSingleton *Log= LoggerSingleton::getLoger();
    std::string str="Something";
    Log->Log(str);
    return 0;
}