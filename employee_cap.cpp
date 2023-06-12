//id, name, role, salary, experience, address, email and contact:

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int id,salary,experience;
		char name[100],role[100],address[100],email[100],contact[10];
		
		void setter()
		{
			cout<<"Enter ID : ";
		    cin>>id;
		    cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Role : ";
			cin>>role;
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter Experience : ";
			cin>>experience;
			cout<<"Enter Address : ";
			cin>>address;
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter Contact : ";
			cin>>contact;
		}
		
		void getter()
		{
			cout<<"ID = "<<id<<endl
			<<"Name = "<<name<<endl
			<<"Role = "<<role<<endl
			<<"Salary = "<<salary<<endl
			<<"Experience = "<<experience<<endl
			<<"Address = "<<address<<endl
			<<"Email = "<<email<<endl
			<<"Contact = "<<contact<<endl;
		}
};

main()
{
	Employee e1,e2;
	
	e1.setter();
	e2.setter();
	
	e1.getter();
	e2.getter();
	
}
