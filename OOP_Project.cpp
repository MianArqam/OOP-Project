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
                //cout<<"id of employee is "<<id<<endl;
            
     }
     
   void set_employee()
    {
      cout<<"Enter the name of employee"<<endl;
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





       // cout<<"Enter ID of Employee"<<endl;
        //cin>>id;
     
   }
    //  void show_details()
    //  {
    //      cout<<"name of employee hired is "<<name<<endl;
    //             cout<<"email of employee hired is "<<email<<endl;
    //             cout<<"adress of employee hired is "<<adress<<endl;
    //             cout<<"role of employee hired is "<<role<<endl;
    //             cout<<"salary of employee hired is "<<salary<<endl;
    //             cout<<"id of employee hired is "<<id<<endl;
    //  }
     };
   class Modify_Employee:public Employee
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
                // cout<<"role of employee is "<<role<<endl;
                cout<<"salary of employee is "<<salary<<endl;
                //cout<<"id of employee is "<<id<<endl;
            }
   };
   class Fire_Employee:public Employee
   {
       public:
       void show_details()
            {
                cout<<"name of employee fired is :"<<name<<endl;
                cout<<"email of employee fired is :"<<email<<endl;
                cout<<"adress of employee fired :"<<adress<<endl;
                cout<<"role of employee is fired is :"<<role<<endl;
                cout<<"salary of employee fired is : "<<salary<<endl;
               // cout<<"id of employee fired is : "<<id<<endl;
            }
       void fire_employee()
         {  
              cout<<"Deatils of Employee you fired is :"<<endl;
                show_details();
                cout<<"employee fired"<<endl;
                name=" ";
                email=" ";
                adress=" ";
                role=" ";
                salary=0;
                //id=0;
         }
   };
    

   int main()
    {   int choice;
        Employee *obj1[100];
        Employee obj;
        Modify_Employee obj2;
        Add_Employee obj3;
        Fire_Employee obj4;
        int n;
        int d=1;
        int id=0;   
      obj1[id]=&obj3;
        obj1[id]->set_id(id);
   while(d==1)
   { 
    cout << "----------------------------------------------------" << endl;
    cout << "|                                                   |" << endl;
    cout << "|                HR Management System               |" << endl;
    cout << "|                                                   |" <<endl;
    cout << "----------------------------------------------------" << endl;

    cout << "Please select an option:" << endl;
    cout << "1. Hire a new employee" << endl;
    cout << "2. Terminate an existing employee" << endl;
    cout << "3. View details of currently working employees" << endl << endl;


    cout << "Enter your choice (1-3): ";

    cin>>choice;
     switch(choice)
     {
         case 1:
    
           // int temp1;
                obj1[id]=&obj3;
         //cout<<"enter the number of employees you want to hire"<<endl;
         //cin>>id;
           // for (int i = 0; i <temp1 ; i++)
            //{
                obj1[id]->set_id(id);
                obj1[id]->set_employee();
                obj1[id]->show_details();
                cout<<"id of employee is : "<<id<<endl;
                id++;

           // } 
            
         break;
    
         case 2:
       cout<<"work in progress"<<endl;
           
           
       // id to fire

         //int id;
        //  //cout<<"enter the id of the employee you want to fire"<<endl;
        //     cin>>id;
        //     for (int i = 0; i <id+1 ; i++)
        //     {  obj1[i]=&obj4;
        //         if (obj1[i]->get_id()==id)
        //         {  
        //             obj1[i]->fire_employee();
        //         }   
        //         else
        //         {
        //             cout<<"employee not found"<<endl;
        //         }         
        //     }
            
            break;
    
        case 3:
    
        // int temp;
        // cout<<"enter the id of the employee you want to find"<<endl;
        // cin>>temp;
        // for (int i = 0; i <temp+1 ; i++)
        // {   
        //     int temp;
        //     cout<<"id of employee you want to find details"<<endl;
        //     cin>>temp;
        //         obj1[temp]=&obj2;
        //     if (obj1[temp]==obj1[id])
        //     {  
        //         obj1[id]->show_details();
              
        //     }   
        // else
        //     {
        //             cout<<"employee not found"<<endl;
                    
        //         }  
        //         break;   
        //  int temp_id;
        //         bool found = false;
        //         cout << "Enter the ID of the employee you want to find: ";
        //         cin >> temp_id;
        //         //test


int id_to_find;
bool found = false;

cout << "Enter the ID of the employee you want to find: ";
cin >> id_to_find;

for (int i = 0; i < 50; i++) {
    // get_id(id);
    if (obj1[id_to_find]->get_id(id_to_find) == id_to_find) {
        obj1[id_to_find]->show_details();
        found = true;
        break;
    }
}

if (!found) {
    cout << "Employee not found." << endl;
}





                ///
                // for (int i = 0; i < temp_id+1; i++) {
                //     if (obj1[temp_id]==obj1[i]) {
                //         if( obj.get_salary()==0)
                //         {
                //             cout<<"Employee not found."<<endl;

                //         }
                //         else
                //         {
                //             obj1[i]->show_details();
                //         }
                //         obj1[i]->show_details();
                //         found = true;
                //         break;
                //     }
                // }
                // if (!found) {
                //     cout << "Employee not found." << endl;
                // }
                // break;             
       // }        
     }  
        cout<<"To exit program press 2 or any other key to continue: ";
        cin>>d;

      if (d == 2) {
        break;
    }
    else {
        continue;
    }
}  
        // cout<<"To exit program press 2 or any other key to continue: ";
        // cin>>d;
        // if(d==2)
        // {
        //     break;
        // }
        // else
        // {
        //     continue;
        // }
         

          

    
     
     }
   


    

     



