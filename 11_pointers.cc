#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptra;
    ptra = &a;
    cout<<"The value of a is "<<a<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptra<<endl;
    
}