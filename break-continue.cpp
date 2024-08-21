#include <iostream>
using namespace std;
int main()
{
    int a = 3000;
    for (int date = 1; date <= 30; date+=1)
    {
        if (date % 2 == 0)
            
        {
            continue;
        }
        if (a == 0)
        {

            break;
        }
        cout << "you can go for date"<<endl;
        a = a - 300;
    }
    return 0;
}