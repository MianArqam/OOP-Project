//add employee
//fire employee
//promote employee
//find employee
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee{
protected:
string name,email,adress,role;
float salary;
int id;
int hours;
public:
//test space
Employee()
{
    name="arqam ";
    email="arw ";
    adress="ss ";
    role="asd ";
    salary=0;
    id=0;
    hours=0;
}





///test space



string get_adress()
{
    return adress;
}
float get_salary()
{
    return salary;
}
int get_id()
{
    return id;
}  
  //All virtual functions
   void virtual set_employee(){};
    void virtual fire_employee(){};
    void virtual show_details(){};
    // void virtual find_employee(){cout<<"test";};
};

class Add_Employee:public Employee
{
    public:
     
   void set_employee()
    {
      cout<<"enter the name of employee"<<endl;
      cin>>name;
      cout<<"Enter Email of Employee"<<endl;
      cin>>email;
      cout<<"Enter adress of Employee"<<endl;
      cin>>adress;
      cout<<"Enter Role of Employee "<<endl;
       cout<<"1. Develepor"<<endl;
         cout<<"2. Manager"<<endl;
         cout<<"3. Accountant"<<endl;
        cin>>role;
        if (role=="1")

    {   
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*1000;
    }
    else if (role=="2")
    {
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*2000;
    }
    else if (role=="3")
    {
        cout<<"ENter hours of Employee"<<endl;
        cin>>hours;
        salary=hours*3000;
    }
    else
    {
        cout<<"Enter valid role"<<endl;
    }





        cout<<"Enter ID of Employee"<<endl;
        cin>>id;
    
   }};
   class Modify_Employee:public Employee
   {
       public:
     
         void fire_employee()
         {
              cout<<"Deatils of Employee you fired is :"<<endl;
              cout<<"name of employee is "<<name<<endl;
                cout<<"email of employee is "<<email<<endl;
                cout<<"adress of employee is "<<adress<<endl;
                cout<<"role of employee is "<<role<<endl;
                cout<<"salary of employee is "<<salary<<endl;
                cout<<"id of employee is "<<id<<endl;
                cout<<"employee fired"<<endl;
                name=" ";
                email=" ";
                adress=" ";
                role=" ";
                salary=0;
                id=0;
         }
            void show_details()
            {
                cout<<"name of employee is "<<name<<endl;
                cout<<"email of employee is "<<email<<endl;
                cout<<"adress of employee is "<<adress<<endl;
                cout<<"role of employee is "<<role<<endl;
                cout<<"salary of employee is "<<salary<<endl;
                cout<<"id of employee is "<<id<<endl;
            }
   };
    

   int main()
   {   int choice;
       Employee *obj1[100];
       Modify_Employee obj2;
       Add_Employee obj3;
       int n;

    cout << "----------------------------------------------------" << endl;
    cout << "|                HR Management System               |" << endl;
    cout << "----------------------------------------------------" << endl << endl;

    cout << "Please select an option:" << endl;
    cout << "1. Hire a new employee" << endl;
    cout << "2. Terminate an existing employee" << endl;
    cout << "3. View details of currently working employees" << endl << endl;


    cout << "Enter your choice (1-3): ";


    cin>>choice;
     switch(choice)
     {
         case 1:
         int n;
         cout<<"enter the number of employees you want to hire"<<endl;
         cin>>n;
            for (int i = 0; i <n ; i++)
            {
                obj1[i]=&obj3;
                obj1[i]->set_employee();
            } 
         break;
         case 2:
         int id;
         cout<<"enter the id of the employee you want to fire"<<endl;
            cin>>id;
            for (int i = 0; i <id+1 ; i++)
            {  obj1[i]=&obj2;
                if (obj1[i]->get_id()==id)
                {  
                    obj1[i]->fire_employee();
                }   
                else
                {
                    cout<<"employee not found"<<endl;
                }         
            }
            break;
        case 3:
        int temp;
        cout<<"enter the id of the employee you want to find"<<endl;
        cin>>temp;
        for (int i = 0; i <temp+1 ; i++)
        {    obj1[i]=&obj2;
            if (obj1[i]->get_id()==temp)
            {  
                obj1[i]->show_details();
              
            }   
        else    {
                    cout<<"employee not found"<<endl;
                }                  
        }
        
         
        
     }
      }


    

     



