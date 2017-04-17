#include<iostream>
using namespace std;
int Array(int);
int minValue(int,int[]);
int main()
{
	int lenght;
	cout<<"Enter the array size: \n";
	cin>>lenght;
Array(lenght);


}
int Array(int n)
{
	int array[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>array[i];

	}
 minValue(n,array);
}



int minValue(int a,int array2[])
{
 int min;
 min=array2[0];
  for(int i=1;i<a;i++)

  {
	if(array2[i]<min)
	{
		min=array2[i];
  	}

  }
	cout<<endl;
	cout<< min;
	cout<<endl;

 
}
