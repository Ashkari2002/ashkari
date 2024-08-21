#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a>>b>>c;
   
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest no";
        }
        else
        {
            cout << "c is greatest no";
        }
    }
    else{
        if (b>c){
            cout<<"b is the greatest no";
        
        }
        else{
            cout<<"c is the greatest no";
        }
    }
    return 0;
}