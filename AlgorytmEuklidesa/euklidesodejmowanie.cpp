#include <iostream> /*19:12*/

using namespace std;

int a,b;

int main()
{
    cout<<"Podaj liczbe a:"<<endl;
    cin>>a;
    cout<<"Podaj liczbe b:"<<endl;
    cin>>b;

    cout<<a<<endl;
    cout<<b<<endl;

    while(a!=b)
    {
        if(a>b){
        a=a-b;
        }
        else{
        b=b-a;
        }
    }
    cout<<"Największy wspólny dzielnik to:"<<a<<endl;


    return 0;
}

