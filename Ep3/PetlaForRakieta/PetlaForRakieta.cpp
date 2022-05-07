#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=15; i>=0; i--)
    {   
        sleep(1000);
        system("cls");
        cout<<i<<endl;
    }
    cout << "Jebut";

    return 0
}

/*

Wersja dla kompilatora linuxowego:

#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
    

    for (int i=15; i>=0; i--)
    {   
        sleep(1);
        system("clear");
        cout<<i<<endl;
    }
    cout << "Jebut";

    return 0;
}

*/