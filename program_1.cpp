
#include <iostream>
using namespace std;


class Log{
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;

    private:
        int m_LogLevel = LogLevelInfo;
    public:
       void setLevel(int logLevel){ m_LogLevel = logLevel;}

       void Error(const char *msg){
            if(m_LogLevel>=LogLevelError)
                cout <<"[ Error ] : " << msg << endl;
       }
       void Warn(const char *msg){
            if(m_LogLevel>=LogLevelWarning)
                cout <<"[ Warning ] : " << msg << endl;
       }

       void Info(const char *msg){
            if(m_LogLevel>=LogLevelInfo)
                cout <<"[ Info ] : " << msg << endl;
       }

};
struct abc {
    private:
    int a;
    int b;
    public:
    void abcu(){ cout << a;}
};
int main(){

    Log log;
    abc f1 ;
   // f1.a = 5;
    f1.abcu();
    log.setLevel(log.LogLevelInfo);
    log.Warn("Hello World");
    log.Info("Hello World");
    log.Error("Hello World");
    return 0;
}