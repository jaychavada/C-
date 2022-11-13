#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a, b;
    cout << "Enter the 1st number" << endl;
    cin >> a;

    cout << "Enter the 2nd number" << endl;
    cin >> b;

    cout << "the function returned " << add(a, b);
    return 0;
}