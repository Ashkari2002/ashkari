#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x > 5000)
    {
        if (x > 10000)
        {
            cout << "on a road trip\n";
        }
        else
        {
            cout << "for  a shoping\n ";
        }
        cout << "neha";
    }
    else if (x > 2000)
    {
        cout << "rashmi";
    }
    else
    {
        cout << "anuskha";
    }
    return 0;
}