#include<iostream>
#include<string>
#include <fstream>

class LoggerSingleton
{
    private:
        LoggerSingleton();
        ~LoggerSingleton();
        static LoggerSingleton* LoggerObj;
        static std::ofstream _fout;
        LoggerSingleton& operator=(const LoggerSingleton&);
    public:
        static LoggerSingleton* getLoger();
        void Log(std::string &data);
        void Log(std::wstring &data);
};