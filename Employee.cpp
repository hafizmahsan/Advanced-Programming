#include<iostream>
#include<string.h>
using namespace std;
// This Variable is further used in the Program so that's why declared it here
string na;
// Declaring class Employee
class Employee{
	private:
		string name; 	//name is declared to use in program
	public:
		void setName(string n)		//before getName we have to declare setName to set a Name
		{
			name = n;
		}
		string getName()		//getting the name
		{
			return name;
		}
		virtual void calculateSalary() = 0;		//pure virtual function or abstrat funtion for Inherited Class usage
		
		void printSalary()			//Virtual Function
		{
			cout<<"Basic Salary\n";
		}
};
// Inherit Classes
class Manager : public Employee{
	public:
		void calculateSalary()		//Overriding the Function Calculate Salary
		{
			cout<<"Basic Salary + Medical Allowance + Utility Bills + TADA\n";
		}
		
		void printSalary()		//Overriding the Function Print Salary
		{
			cout<<"Your Salary consists of Basic Salary + Medical Allowance + Utility Bills + TADA\n";
		}
};

class Admin : public Employee{
	public:
		void calculateSalary()		//Overriding the Function Calculate Salary
		{
			cout<<"Basic Salary + Medical Allowance + Utility Bills\n";
		}
		
		void printSalary()		//Overriding the Function Print Salary
		{
			cout<<"Your Salary consists of Basic Salary + Medical Allowance + Utility Bills\n";
		}
};

class Clerk : public Employee{
	public:
		void calculateSalary()		//Overriding the Function Calculate Salary
		{
			cout<<"Basic Salary + Medical Allowance\n";
		}
		
		void printSalary()		//Overriding the Function Print Salary
		{
			cout<<"Your Salary consists of Basic Salary + Medical Allowance\n";
		}
};
// Main Function Goes Here
int main()
{
//	Declaring a String Type Variable for checking the type of employee
	string empType;
	start:	//It's a Label which we use for Loop through using goto statement
		// Taking the type of variable
		cout<<"Enter the Employee Type : \n";
		getline(cin, empType);
		//Checking the Type of Employee
		if((empType=="MANAGER") || (empType=="manager") ||(empType=="Manager"))
		{
//			From here we are setting the Name of our employee and then getting name, calculateSalary and printSalary of Employee
			cout<<"Manager Selected\n";
			Manager emp;
			cout<<"Enter the Name of Manager : \n";
			getline(cin, na);
			emp.setName(na);
			cout<<"Name is : "<<emp.getName()<<endl;
			emp.calculateSalary();
			emp.printSalary();
		}
		
		else if((empType=="ADMIN") || (empType=="admin") ||(empType=="Admin"))
		{	
//			From here we are setting the Name of our employee and then getting name, calculateSalary and printSalary of Employee
			cout<<"Admin Selected\n";
			Admin emp;
			cout<<"Enter the Name of Manager : \n";
			getline(cin, na);
			emp.setName(na);
			cout<<"Name is : "<<emp.getName()<<endl;
			emp.calculateSalary();
			emp.printSalary();
		}
		
		else if((empType=="CLERK") || (empType=="clerk") ||(empType=="Clerk"))
		{
//			From here we are setting the Name of our employee and then getting name, calculateSalary and printSalary of Employee
			cout<<"Clerk Selected\n";
			Clerk emp;
			cout<<"Enter the Name of Manager : \n";
			getline(cin, na);
			emp.setName(na);
			cout<<"Name is : "<<emp.getName()<<endl;
			emp.calculateSalary();
			emp.printSalary();
		}
		else
		{
			cout<<"Record Not Found\nLet\'s Try Again\n";
			goto start;		//Loop Through to Start Label
		}
	
	return 0;
}
