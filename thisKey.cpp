#include<bits/stdc++.h>
using namespace std;
class stu{
    public:

    string name;
    int age;
    int roll_no;

    stu(string name,int age,int roll_no)
    {
        (*this).name=name;
        this->age=age;
        this->roll_no=roll_no;

        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};

int main()
{
    stu obj("Nishant",20,575);
    return 0;
}