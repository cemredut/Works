#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c;
	float x1,x2;
	float determinant;
	float rP,iP;
	cout<<"Enter the a for ax^2+bx+c"<<endl;
	cin>>a;
	cout<<"Enter the b for ax^2+bx+c"<<endl;
	cin>>b;
	cout<<"Enter the c for ax^2+bx+c"<<endl;
	cin>>c;
	determinant=(b*b)-(4*a*c);
	if(determinant>0)
	{
		x1=(-b + sqrt(determinant))/ (2*a);
		x2=(-b - sqrt(determinant))/ (2*a);
		cout<<"Roots are real and different : \n x1=  "<<x1<<" \n x2 = "<<x2<<endl;
	}
	else if(determinant=0)
	{
		x1=(-b + sqrt(determinant))/(2*a);
		cout<<"Roots are real and same : \n x1=x2= "<<x1<<endl;
	}
	else
	{
		rP=-b/(2*a);
		iP=sqrt(-determinant)/(2*a);
		cout<<"Roots are complex and different \n x1 = "<<rP<<"+"<<iP<<"i"<<"and \n x2= "<<rP<<"-"<<iP<<"i"<<endl;

	}


return 0;
	 

}
