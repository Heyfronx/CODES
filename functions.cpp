#include<iostream>
using namespace std;
// class school
// {
//     public:
//     int rollno;
//     string name;
//     float marks;

// void getdata(int a, string b, float c)
// {
//     cout<<a<<" "<<b<<" "<<c<<endl;

// }

// };
// int main()
// {
//     school p1,p2,p3;
//     p1.getdata(4,"asmita",94.5);
// }
    // int x=5;
    // std::cout<<x<<std::endl;
    // std::cout<<"hello there";
// struct School
// {
//     int marks;
//     string name;
// };
// int main()
// {
//     School p;
//     p.marks=91;
//     p.name="asmita";
//     cout<<p.name<<" "<<p.marks;
// }
// class Person
// {
// int age;
// public: 	//Everything before public:  is private
// void setAge(int a)
// {
//     age = a;
// }
// int display() 
// {
//     cout <<"Age: " << age << endl;
// }
// };
// int main()
// {
//     Person p1;
//     p1.setAge(20); 
//     p1.display();
//     return 0; 
// }
class Employee
{
    public:
    int id;
    void setid()
    {
        cout<<"enter employee id: "<<endl;
        cin>>id;
    }
    void getid()
    {
        cout<<id ;
    }

};
int main()
{
    Employee a[5];
    for (int i=0;i<=4;i++)
    {
        a[i].setid();
        a[i].getid();
    }
}
