#include <iostream>
#include <cstdlib>
#include <time.h> /*ctime*/

using namespace std;

int liczba, niewiadoma, proba=0;

int main()
{
    cout<<"Witaj, zgadnij liczbe od 1..100"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(niewiadoma!=liczba)
    {   
        proba++;
        cout<<"Podaj liczbe (to twoja "<<proba<<"proba):";
        cin>>niewiadoma;

        if(niewiadoma==liczba)
        cout<<"Wlasciwa liczba, zgadles w "<<proba<<" probie"<<endl;

        else if(niewiadoma<liczba)
        cout<<"Za mala"<<endl;

        else if(niewiadoma>liczba)
        cout<<"Za duza"<<endl;

    }   

    return 0;

}