#include<bits/stdc++.h>
using namespace std;

class stu{
    public:

    string name;
    int age;
    int rollno;

    stu(string name,int age,int rollno)
    {
        this->name=name;
        this->age=age;
        this->rollno=rollno;

        cout<<name<<" "<<age<<" "<<rollno<<endl;
    }

    stu(stu &a)
    {
        name=a.name;
        age=a.age;
        rollno=a.rollno;

        cout<<name<<" "<<age<<" "<<rollno<<endl;
    }
};
int main()
{
    stu obj1("NIshant",20,575);
    stu obj2(obj1);
    return 0;
}