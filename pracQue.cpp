#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    string name;
};

class person: public Human{
    protected:
    int age;
};
class student : public person{
    int roll_no;
    public:

    student(string s,int a,int r)
    {
        age=a;
        roll_no=r;
    }

    void display()
    {
        cout<<age<<" "<<roll_no<<endl;
    }
};
int main()
{
    student obj("Nishant",20,575);

    obj.display();
    return 0;
}
