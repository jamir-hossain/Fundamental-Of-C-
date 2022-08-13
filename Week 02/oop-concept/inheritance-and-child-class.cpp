#include <bits/stdc++.h>
using namespace std;

class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    Parent(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    };
};

class Child: public Parent
{
public:
    int d;
    Child(int w, int x, int y, int z): Parent(x, y, z)
    {
        d=w;
    };
};

int main()
{
    Parent pt(20, 40, 60);
    Child ch(30, 40, 50, 60);

    cout<<ch.c<<endl;

    return 0;
}
