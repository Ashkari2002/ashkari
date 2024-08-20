#include <iostream>

using namespace std;
int main()
{
    int a;
    a = 67;
    cout << "size of int " << sizeof(a) << endl;
    char b;
    cout<< "size of char "<< sizeof(b)<<endl;
    float c;
    cout<<"size of float "<< sizeof(c)<<endl;
    bool d;
    cout <<"size of bool "<< sizeof(d)<<endl;
    short int si;
    long int li;
    cout <<"size of short int "<< sizeof(si) <<endl;
    cout <<"size of long int  "<< sizeof(li)<<endl;
    return 0;
}