#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex()
    {
        real=0;
        img=0;
    }
    
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    Complex operator + (Complex &c)
    {
        Complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;

        return ans;
    }

    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
int main()
{
    Complex c1(3,4);
    c1.display();
    
    Complex c2(4,5);
    c2.display();

    Complex c3=c1+c2;
    c3.display();
    return 0;

}