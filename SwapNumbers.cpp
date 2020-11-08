#include<iostream>
using namespace std;
// Signature of Function
void swapNumbers(int &a, int &b);

int main()
{
	int first_Num, second_Number;
//	Getting input of Two Numbers from user
	cout<<"Enter First Number\n";
	cin>>first_Num;
	cout<<"Enter Second Number\n";
	cin>>second_Number;
//	Showing the Results before swapping
	cout<<"\n\n\t\tBefore Swapping\n\n";
	cout<<"First Number is : "<<first_Num<<" And Second Number is : "<<second_Number<<endl;
//	Calling the Function
	swapNumbers(first_Num, second_Number);
//	Showing the Results after swapping
	cout<<"\n\n\t\tAfter Swapping\n\n";
	cout<<"First Number is : "<<first_Num<<" And Second Number is : "<<second_Number<<endl;
	return 0;
}
// Function to swap numbers without using third variable
// Pass By Reference so that changes not only occur in Dummy Variables but changes also occur in Default Parameters
void swapNumbers(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
