#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout<<"Podaj login:";
    cin>>login;
    cout<<"Podaj haslo:";
    cin>>haslo;

    if((login=="Stefan")&&(haslo=="Bydgoszcz"))
    {
    cout<<"Poprawne dane";
    }
    else 
    {
        cout<<"Bledne dane";
    }
    return 0;
}