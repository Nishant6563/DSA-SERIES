#include<bits/stdc++.h>
using namespace std;

class stu{
    public:

    string name;
    int age;
    int roll_no;

    stu(string a,int b,int c)
    { 
        name=a;
        age=b;
        roll_no=c;
        cout<<name<<" "<<age<<" "<<roll_no<<endl;

    }
};
int main()
{
    stu obj("Nishant",20,575);
    return 0;
}