#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int x;
public:
    void setter(int value)
    {
        x = value;
    }

    int getter()
    {
        return x;
    }
};

int main()
{
    Student stu;
    stu.setter(45);

    cout<<stu.getter()<<endl;

    return 0;
}
