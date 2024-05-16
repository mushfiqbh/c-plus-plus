#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int id;
    Person(int x)
    {
        id = x;
    }

    int age;
    string name;
    void greet()
    {
        cout << name << " is " << age << " years old.";
    }
    void hello();
};

void Person::hello()
{
    cout << "Hello " << name;
}

int main()
{
    Person me(3);
    me.name = "Mushfiq";
    me.age = 23;
    me.greet();
    me.hello();
    cout << me.id;
    return 0;
}