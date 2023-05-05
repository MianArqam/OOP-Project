#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    int age;
    int salary;
    string adress;
    int phone;
    string email;
    int position;
public:
void setname(string n)
{
    name=n;
}
void setid(int i)
{
    id=i;
}
void setage(int a)
{
    age=a;
}
void setsalary(int s)
{
    salary=s;
}
void setadress(string ad)
{
    adress=ad;
}
void setphone(int p)
{
    phone=p;
}
void setemail(string e)
{
    email=e;
}

void setposition(int po)
{   
    position=po;

} 

string getname()
{
    return name;
}
int getid()
{
    return id;
}
int getage()
{
    return age;
}
int getsalary()
{
    return salary;
}
string getadress()
{
    return adress;
}
int getphone()
{
    return phone;
}
string getemail()
{
    return email;
}

int getposition()
{
    return position;
}
};
int main()
{ char ch='y';
    while(ch=='y')
    {    
    Employee e1[100];
    int n;
    cout<<"HR mangement system"<<endl;
    cout<<"1. Add employee"<<endl;
    cout<<"2. Delete employee"<<endl;
    cout<<"3. Edit employee"<<endl;
    cout<<"4. Search employee"<<endl;
    cout<<"5. Show all employee"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice: ";

    
    cin>>n;
    switch(n)
    {

        case 1:
        {
            int i;
            cout<<"Enter the number of employee you want to add: ";
            cin>>i;
            for(int j=0;j<i;j++)
            {
                cout<<"Enter the name of employee: ";
                string name;
                cin>>name;
                e1[j].setname(name);
                cout<<"Enter the id of employee: ";
                int id;
                cin>>id;
                e1[j].setid(id);
                cout<<"Enter the age of employee: ";
                int age;
                cin>>age;
                e1[j].setage(age);
                cout<<"Enter the salary of employee: ";
                int salary;
                cin>>salary;
                e1[j].setsalary(salary);
                cout<<"Enter the adress of employee: ";
                string adress;
                cin>>adress;
                e1[j].setadress(adress);
                cout<<"Enter the phone of employee: ";
                int phone;
                cin>>phone;
                e1[j].setphone(phone);
                cout<<"Enter the email of employee: ";
                string email;
                cin>>email;
                e1[j].setemail(email);
                cout<<"Enter the position of employee: ";
                int position;
                cin>>position;
                e1[j].setposition(position);
                cout<<"Employee added successfully"<<endl;
                cout<<"Do you want to add more employee(y/n): ";
                cin>>ch;
            if (ch=='n')
                {  
                    cout<<"Thank you for using our system"<<endl;
                    break;
                }
                

            }
            break;
        }
        case 2:
        {
            int i;
            cout<<"Enter the number of employee you want to delete: ";
            cin>>i;
            for(int j=0;j<i;j++)
            {
                cout<<"Enter the name of employee: ";
                string name;
                cin>>name;
                e1[j].setname(name);
                cout<<"Enter the id of employee: ";
                int id;
                cin>>id;
                e1[j].setid(id);
                cout<<"Enter the age of employee: ";
                int age;
                cin>>age;
                e1[j].setage(age);
                cout<<"Enter the salary of employee: ";
                int salary;
                cin>>salary;
                e1[j].setsalary(salary);
                cout<<"Enter the adress of employee: ";
                string adress;
                cin>>adress;
                e1[j].setadress(adress);
                cout<<"Enter the phone of employee: ";
                int phone;
                cin>>phone;
                e1[j].setphone(phone);
                cout<<"Enter the email of employee: ";
                cout<<"Employee deleted successfully"<<endl;
                cout<<"Do you want to delete more employee(y/n): ";
                cin>>ch;
               if (ch=='n')
                {  
                    cout<<"Thank you for using our system"<<endl;
                    break;
                }

              }
            } 
        }
    }
}