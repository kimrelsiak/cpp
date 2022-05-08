#include    <iostream>

using namespace std;

int a, b;

int main()
{   
    cout<<"Podaj liczbe a:"<<endl;
    cin>>a;
    cout<<"Podaj liczbe b:";
    cin>>b;

    while(a!=b)
{
cout<<"*****"<<endl;        
cout<<a<<endl;
cout<<b<<endl;
cout<<"#######"<<endl;
}
    cout<<"Najwiekszy wspolny dzielnik:"<<a<<endl;
    return 0;
}

