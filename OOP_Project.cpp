#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee{
protected:
string name,email,adress,role;
float salary=0;
int id;
int hours;
public:
string get_name()
{
    return name;
}
string get_email()
{
    return email;
}

string get_role()
{
    return role;
}

string get_adress()
{
    return adress;
}
float get_salary()
{
    return salary;
}
int get_id(int x)
{
    return id;
}  
void set_id(int x)
{
    id=x;
}

int return_id()
{
    return id;
}


   virtual void  set_employee(){};
   virtual void fire_employee(){};
    virtual void show_details(){};

};

class Add_Employee:public Employee
{
    public:
    void show_details()
     {
            
                cout<<"name of employee is  "<<name<<endl;
                cout<<"email of employee is "<<email<<endl;
                cout<<"adress of employee is "<<adress<<endl;
                if (role=="1")
                {
                    cout<<"role of employee is Develepor"<<endl;
                }
                else if (role=="2")
                {
                    cout<<"role of employee is Manager"<<endl;
                }
                else if (role=="3")
                {
                    cout<<"role of employee is Accountant"<<endl;
                }
                else
                {
                    cout<<"Enter valid role"<<endl;
                    
                }

                cout<<"salary of employee is "<<salary<<endl;

   
   }