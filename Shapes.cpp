#include<iostream>
#include<string.h>
using namespace std;

//Abstract Class Draw
class Draw{
	public:
		void drawShape()  //Virtual Function
		{
			cout<<"Shape has been Drawn.\n";
		}
};
// Inherit Classes
class Square : public Draw{
	public:
		void drawShape()	//Overriding the Function drawShape
		{
			cout<<"A Square has been drawn.\n";
		}
};

class Circle : public Draw{
	public:
		void drawShape()	//Overriding the Function drawShape
		{
			cout<<"A Circle has been drawn.\n";
		}
};

class Triangle : public Draw{
	public:
		void drawShape()	//Overriding the Function drawShape
		{
			cout<<"A Triangle has been drawn.\n";
		}
};

int main()

{
	//Variable for asking about the shape from the user
	string shape;
//	Labeling the point for loop through using goto statment
	start:
		cout<<"Enter the Shape you want to Draw : \n";
		cout<<"1)\tSquare\n2)\tCircle\n3)\tTriangle\n";
		cout<<endl;
		getline(cin, shape);
//		Confirming the Shape that whether it is a Square, a Circle or a Triangle
		if((shape=="SQUARE") || (shape=="square") || (shape=="Square"))
		{
//			Drawing a Square
			Square sq;
			sq.drawShape();
		}
		else if((shape=="CIRCLE") || (shape=="circle") || (shape=="Circle"))
		{
//			Drawing a Circle
			Circle c;
			c.drawShape();
		}
		else if((shape=="TRIANGLE") || (shape=="triangle") || (shape=="Triangle"))
		{
//			Drawing a Triangle
			Triangle t;
			t.drawShape();
		}
		else
		{
//			For any Mistyped Data going back to The Start Label
			cout<<"Record not found.\nTry Again\n";
			goto start;
		}
		return 0;
}
