#include <iostream>

using namespace std;

int a,b,x;

int main()
{
    cout<<"Podaj liczbe a:"<<endl;
    cin>>a;
    cout<<"Podaj liczbe b:"<<endl;
    cin>>b;

    cout<<a<<endl;
    cout<<b<<endl;
    
  while(b!=0){
      x=a%b;
      a=b;
      b=x;
  }


    cout<<"Największy wspólny dzielnik to:"<<a<<endl;


    return 0;
}