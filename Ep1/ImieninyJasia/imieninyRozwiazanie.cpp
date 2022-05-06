#include <iostream>

using namespace std;

int kaszojady, cukierki, x, y;

int main()
{
    cout<<"Ilu kaszojadow jest w Twojej klasie: ";
    cin>>kaszojady;

    cout<<"Ile cukierkow kupiles: ";
    cin>>cukierki;

    x=cukierki/(kaszojady-1);
    cout<<"Cukierkow dla kazdego kaszojada: "<<x;

    y=cukierki-x*(kaszojady-1);
    cout<<endl<<"Jasiek bedzie mial jeszcze: "<<y; 

    return 0;
}
