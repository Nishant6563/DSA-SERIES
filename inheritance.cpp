#include<bits/stdc++.h>
using namespace std;


//SINGLE LEVEL INHERITANCE
/*class human{
    //properties
    protected:
    string name;
};
class student : public human
{
    int roll_no;
    public:

    student(string n,int a)
    {
        name=n;
        roll_no=a;

    }

    void display()
    {
        cout<<name<<" "<<roll_no<<endl;
    }
};
int main()
{
    student obj("Nishant",575);
    obj.display();
    return 0;
}*/



//multilevel inheritance

/*class Human{
    protected:
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
        name=s;
        age=a;
        roll_no=r;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};
int main()
{
    student obj("Nishant",20,575);

    obj.display();
    return 0;
}*/

//MULTIPLE INHERITANCE

/*class student{
    protected:

    int roll_no;

    public:

    void setrollno(int r)
    {
        roll_no=r;
    }

    void getrollno()
    {
        cout<<roll_no;
    }
};

class employeeid{
    protected:

    int employeeid;

    public:

    void setemplyeeid(int e)
    {
        employeeid=e;
    }

    void displayempid()
    {
        cout<<employeeid;
    }
};

class workingstudent : public student,public employeeid{

    string name;
    public:

    void setcompany(string s)
    {
        name=s;
    }

    void display()
    {
        displayempid();
        getrollno();
        cout<<name;
    }
};

int main()
{
    workingstudent ws;
    ws.setrollno(575);
    ws.setemplyeeid(123);
    ws.setcompany("google");

    ws.display();
    return 0;
}*/

//hierachical

class person{
    protected:
    string name;
};

class student : public person
{
    int fees;
    public:
    student(string s,int f)
    {
        name=s;
        fees=f;
    }

    void display()
    {
        cout<<name<<" "<<fees<<endl;
    }
};

class teacher : public person
{
    int salary;
    public:
    teacher(string n,int s)
    {
        name=n;
        salary=s;
    }

    void display()
    {
        cout<<name<<" "<<salary<<endl;
    }
};
int main()
{
    student obj("nishant",7500);
    obj.display();
    teacher obj1("hitesh",30000);
    obj1.display();
    return 0;
}
