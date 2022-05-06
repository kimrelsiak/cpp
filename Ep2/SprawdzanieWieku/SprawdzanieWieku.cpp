#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout<<"Ile masz lat: ";
    cin>>wiek;

    if(wiek<18)
    {
        cout<<"Nie jestes pelno letni i nie mozesz kandydowac na prezydenta";
    }
    else if ((wiek>=18) && (wiek<35))
    {
        cout<<"Jestes pelno letni ale nie mozesz kandydowac na prezydenta";
    }
    else 
    {
        cout<<"Jestes pelnoletni i mozesz kandydowac na prezydenta";
    }
    return 0;
}