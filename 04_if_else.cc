// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << "enter your age" << endl;
//     cin >> age;

//     if (age >= 18)
//         cout << "you can vote";
//     else
//         cout << "you can not vote";

//     return 0;
// }

// ********using of else_if ladder*********

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    if(age>150 || age<5)
    cout<<"Invalid age";

    else if (age >= 18)
        cout << "you can vote";
    else
        cout << "you can not vote";

    return 0;
}