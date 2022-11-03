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

class Research_scholar :  public Teacher{
  private: 
    char *guide;
  
  public: 
    
  virtual void displaydetails(){
        Teacher::enterdetails();
        Teacher::displaydetails();
        cout << guide << endl;
  }
  void set_guide(string g){
        int length=g.length();
        guide=new char[length];
        strcpy(guide,g.c_str());
  }
};

class Research_alumni : public Research_scholar{
    private:
    int passing_year;
    char *curr_inst;
    
    public:
    void displaydetails(){
        Research_scholar::displaydetails();
        cout << passing_year << endl;
        cout << curr_inst << endl;
    }
    void set_deets(int year, string ci){
        int length=ci.length();
        curr_inst=new char[length];
        strcpy(curr_inst,ci.c_str());
        passing_year = year;
    }
};


int main()
{
    Teacher a("ECE",3);
    a.enterdetails();
    a.displaydetails();
    return 0;
}
