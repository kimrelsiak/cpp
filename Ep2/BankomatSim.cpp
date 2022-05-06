#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout<<"Witam w naszej placowce bankowej!"<<endl;
    cout<<"Podaj numer PIN:";
    cin>> PIN;
    if(PIN=="2137")
    {
        cout<<"Wlasciwy PIN";
    }
    else 
    {
        cout<<"Niewlasciwy PIN";
    }

}