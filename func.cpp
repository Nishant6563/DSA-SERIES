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

    int area(int l,int r)
    {
        return (l*r);
    }

    int area(int r)
    {
        return (r*r);
    }

};
int main()
{
    student obj;
    cout<<"Rectangle area : "<<obj.area(3,4)<<endl;
    cout<<"Square area : "<<obj.area(4);
    return 0;
}