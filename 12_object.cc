#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void printdetails()
    {
        cout << "The name of 1st Employee is " << this->name << " and his salary is " << this->salary << "RUPPEES" << endl;
    }
    void getsecretpassword()
    {
        cout << "The secret password of employee is " << this->secretpassword;
    }

private:
    int secretpassword = 212345;
};

int main()
{

    Employee jay;
    jay.name = "jaychavada";
    jay.salary = 10000;

    // cout<<"The name of 1st Employee is "<<jay.name<<" and his salary is "<<jay.salary <<"RUPPEES"<<endl;
    jay.printdetails();
    jay.getsecretpassword();

    return 0;
}