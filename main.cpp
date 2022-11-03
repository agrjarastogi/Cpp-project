#include <iostream>
#include<string.h>

using namespace std;
string collegeName="Manipal Institute of Technology";
class Getdetails
{
    public:
        string name;
        int size;
        int age;
        Getdetails()
        {
            name="Shubham";
            age=20;
        }
        virtual void enterdetails()=0;
        virtual void displaydetails()=0;
};

class Teacher: public Getdetails{
    public:
        char *domainOfStudy;
        int length;
        int yearsOfExperience;
        Teacher(string dos,int y)
        {
            length=dos.length();
            domainOfStudy=new char[length];
            strcpy(domainOfStudy,dos.c_str());
            size=dos.length();
            this->yearsOfExperience=y;
        }
        void enterdetails()
        {
            cout<<"Enter name";
            cin>>name;
            size=name.length();
            cout<<"Enter age";
            cin>>age;
        }
        void displaydetails()
        {
            cout<<"This is a teacher object"<<endl;
            for(int i=0;i<size;i++)
                cout<<name[i];
            cout<<age<<endl;
            cout<<"\n";
            for(int i=0;i<length;i++)
                cout<<domainOfStudy[i];
            cout<<"\n"<<yearsOfExperience;
        }
};

int main()
{
    Teacher a("ECE",3);
    a.enterdetails();
    a.displaydetails();
    return 0;
}
