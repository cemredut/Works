#include<iostream>
#include<stdio.h>
#include<cstdio>
using namespace std;


class UniversityMember
{
   public:
 	char name[100];
	char lastname[100];
	int year;

  public:
	void information()
	 {
            cout<<"Name \n";
	    fflush(stdin);//clear input stream
	    cin>>name;
            cout<<"Birth's year: \n";
            cin>>year;
            cout<<"Last name: \n";
            fflush(stdin);
            cin>>lastname;
           
	}
        void display()

	{
	   cout<<"Name is "<<name<<endl;
	   cout<<"Last name is "<<lastname<<endl;
	   cout<<"Year of birthday is "<<year<<endl;
             


	}
		
};
class Student:public UniversityMember
{
	int StudentID;
	char Departman[100];
	int uniyear;
public:
	void information()
 {
	UniversityMember::information();
	cout<<"Name of departman: \n";
	fflush(stdin);
	cin>>Departman;
	cout<<"Student Id : \n";
	cin>>StudentID;
	cout<<"Which year in university: \n";
	cin>>uniyear;



 }
public:
	void display()


{
	UniversityMember::display();
	cout<<"Name of departman is "<<Departman<<endl;
	cout<<"Student Id is "<<StudentID<<endl;
	cout<<"Year in university is "<<uniyear<<endl;



}




};

class Employee:public UniversityMember
{
    int salary;
    int Id;
    char position[100];
public:
	void information()
{
	UniversityMember::information();
	cout<<"Salary : ";
        cin>>salary;
	cout<<"Id :";
	cin>>Id;
	cout<<"Position: ";
	fflush(stdin);
	cin>>position;


}
	void display()
{
	UniversityMember::display();
	cout<<"Employee's position is "<<position<<endl;
	cout<<"Employee's salary is "<<salary<<endl;
	cout<<"Employee's Id is "<<Id<<endl;

}


};

int main()
{
	Student A;
	Employee B;
	cout<<"For student enter the information: "<<endl;
	A.information();
	cout<<"\n\n\n"<<endl;
	A.display();
        cout<<"For employee enter the information: "<<endl;
	B.information();
	cout<<"\n\n\n"<<endl;
	B.display();
	
	return 0;

}

@CemreDut
























































