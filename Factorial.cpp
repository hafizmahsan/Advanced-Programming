#include<iostream>
using namespace std;
//Signature of the Function
int computeFactorial(int num);

int main()
{
	int num; char ch;
//	Asking for users choice whether the user want to compute factorial or not
	cout<<"Do you want to Compute Factorial : \nPress Y for Yes and N for No : \n";
	cin>>ch;
	
//	Labeling the Location for loop through usage using goto statement

	selection:
		if((ch == 'Y') || (ch=='y'))
		{
			cout<<"Enter a Number to Compute Factorial : \n";
			cin>>num;
			cout<<computeFactorial(num);	//calling the function
		}
		else if((ch == 'N') || (ch=='n'))
		{
			cout<<"Exiting\n";
		}
		else
		{
			cout<<"Enter a Valid Option\n";
			goto selection;
		}
	
	return 0;
}
// computeFactorial for computing the factorial
int computeFactorial(int num)
{
//	if num is equals to zero simply returns 1

	if((num == 0) || (num==1))
	{
		return 1;
	}
//	if number is positive then this conditions would be satisfied
	else if(num>1)
	{
		return num * computeFactorial(num-1);
	}
//	if accidently user enters the negative number then we wil return -1 to the user
	else
	{
		return -1;
	}
}
