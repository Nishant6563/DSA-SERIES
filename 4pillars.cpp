#include<bits/stdc++.h>
using namespace std;
//Encapsulation/abstraction
class student
{
    private:
    //Properties
    string name;
    int age;
    int rollno;

    public:

    void setter(string n,int a,int r)
    {
        name=n;
        age=a;
        rollno=r;
    }

    int getter()
    {
        return age;
    }

};
int main()
{
    student obj;
    obj.setter("Nishant",20,575);
    cout<<obj.getter();
    return 0;
}