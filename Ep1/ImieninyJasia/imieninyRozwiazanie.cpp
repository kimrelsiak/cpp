#include <iostream>

using namespace std;

int kaszojady, cukierki, x, y;

int main()
{
    cout<<"Ilu kaszojadow jest w Twojej klasie: "endl;
    cin>>kaszojady;

    cout<<"Ile cukierkow kupiles: "endl;
    cin>>cukierki;

    x=cukierki/(kaszojady-1);
    cout<<"Cukierkow dla kazdego kaszojada: "<<x endl;

    y=cukierki-x*(kaszojady-1);
    cout<<endl<<"Jasiek bedzie mial jeszcze: "<<y endl; 

    return 0;
}
