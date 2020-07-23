#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class employee
{
    private:
        // Variables for employee details
        char name[30];
        char designation[10];
        int age;
        int experience;
        int salary;
    public:
    	int id;
    	void getdata();
    	void showdata();
    	void addemploye();
    	void edit(int);
    	void byabovesalary(int);
    	void bybelowsalary(int);
};
void employee::getdata()
{
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Name of Employee: ";
            fflush(stdin);
            gets(name);
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Employee ID: ";
            cin>>id;
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Designation: ";
            fflush(stdin);
            gets(designation);
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Employee Age: ";
            cin>>age;
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Employee Experience: ";
            cin>>experience;
            cout<<"\n--------------------------------------------------------";
            cout<<"\n Enter Employee Salary: ";
            cin>>salary;
            cout<<"\n--------------------------------------------------------";

}
void employee::addemploye()
{
	cout<<"enter name  ";	
            fflush(stdin);
    		gets(name);
    		cout<<"enter id  ";	
    		cin>>id;
            cout<<"enter designation  ";	
            fflush(stdin);
    		gets(designation);
    		cout<<"enter age  ";	
    		cin>>age;
    		cout<<"enter experience  ";	
    		cin>>experience;
    		cout<<"enter salary  ";	
    		cin>>salary;
}
void employee::edit(int n)
{
	switch(n)
	{
	  case 1:
	  {
	  	cout<<"Name:";
		fflush(stdin);
		gets(name);
		break;
	  } 
	  case 2:
	  {
	  	cout<<"Designation:";
		fflush(stdin);
		gets(designation);
		break;
	  }  
	  case 3:
	  {
	  	cout<<"Age:";
		cin>>age;
		break;
	  }
	  case 4:
	  {
	  	cout<<"Experience:";
		cin>>experience;
		break;
	  }
	  case 5:
	  {
	  	cout<<"Salary:";
		cin>>salary;
		break;
	  }
	  default:
	  	{
	  		break;
		}
    }
}
void employee::showdata()
{
	    cout<<endl<<"Name: "<<name<<endl;
	    cout<<"Id: "<<id<<endl;
	    cout<<"Designation: "<<designation<<endl;
	    cout<<"Age: "<<age<<endl;
	    cout<<"Experience: "<<experience<<endl;
	    cout<<"Salary: "<<salary<<endl;
}
void employee::byabovesalary(int sal)
{
		if(salary>sal)
		{
		    showdata();
	    }
}
void employee::bybelowsalary(int sal)
{
		if(salary<sal)
		{
		    showdata();
	    }
}
void waitforenter()
{
	cout<<"\npress enter to go back";
	getch();
}
 int main()
{
	int i,choice,n,id,k;
 	employee e[10];
 	cout<<"\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<"<<endl;
 	do
 	{
 	   system("CLS");
 	   cout<<"\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
                cout<<"\n";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   1:   To Build Data of Employees";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   2:   To ADD New Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   3:   To Show Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   4:   To Edit Existing Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   5:   To Remove an Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   6:   To View Details of an Employee By Id";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   7:   To View Details of Employee Above a Given Salary ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   8:   To View Details of Employee Below a Given Salary ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   0:   To Exit     ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\n\t\t\t   Please Enter Your Choice: ";

 	  fflush(stdin);
 	  cin>>choice;
 	  if(choice==1)
 	  {
 	  	system("CLS");
 	    cout<<"enter the no. of employes";
 	    cin>>n;
 	    for(i=0;i<n;i++)
 	    {
 		  e[i].getdata();
	    }
	    waitforenter();
      } 
      if(choice==2)
      {
      	system("CLS");
    	 e[i].addemploye();
    	 n++;
    	 waitforenter();
      }
	  if(choice==3)
      {
      	system("CLS");
      	if(n==0)
      	{
      		cout<<endl<<"THIS LIST IS EMPTY"<<endl;
		}
		else
		{
      	  for(i=0;i<n;i++)
 	      {
 		    e[i].showdata();
	      }
	    }
	    waitforenter();
	  }
	  if(choice==4)
	  {
	  	system("CLS");
	  	cout<<"enter the id";
	  	cin>>id;
	  	i=0;
	  	while(i<n&&id!=e[i].id)
	  	{
	  		i++;
		}
		if(i==n)
	  	   cout<<"id not found";
	  	else
	  	{
	  		cout<<"what do u want to edit"<<endl<<"1>name   2>designation    3>age     4>experience     5>salary";
         	cin>>k;
	  		e[i].edit(k);
		}
		waitforenter();
	  }
	  if(choice==5)
	  {
	  	  system("CLS");
	  	  cout<<"enter the id";
	  	  cin>>id;
	  	  i=0;
	  	  while(i<n&&id!=e[i].id)
	  	  {
	  	  	 i++;
		  }
	  	  if(i==n)
	  	     cout<<"ERROR: Id not found\n";
	  	  else
		  {
		  	while(i<(n-1))
		  	{
		  		e[i]=e[i+1];
		  		i++;
			}
		  	n--;
		  	cout<<"DELETION successfull";
		  }	 
		  waitforenter();
	   }
	  if(choice==6)
	  {
	  	 system("CLS");
	     int id;
	  	 cout<<"enter the id";
         cin>>id;
         i=0;
         while(i<n&&id!=e[i].id)
         {
         	i++;
		 }
		 if(i==n)
		 {
		 	cout<<"ERROR:ID NOT FOUND";
		 }
		 else
		 {
		 	e[i].showdata();
		 }
	  	waitforenter();
	  } 
	  if(choice==7)
	  {
	  	system("CLS");
	  	int sal;
	  	cout<<"Enter the Salary Above which u want to search  ";
	  	cin>>sal;
	  	cout<<"Employees Who Are Above "<<sal<<" are:"<<endl;
	  	for(i=0;i<n;i++)
	  	{
	  	    e[i].byabovesalary(sal);
		}		
		waitforenter();
	  }
	  if(choice==8)
	  {
	  	system("CLS");
	  	int sal;
	  	cout<<"Enter the Salary Below which u want to search ";
	  	cin>>sal;
	  	cout<<"Employees Who Are Below "<<sal<<"are: "<<endl;
	  	for(i=0;i<n;i++)
	  	{
	  	    e[i].bybelowsalary(sal);
		}
		waitforenter();
      }
    }while(choice>=1&&choice<=8);
    return 0;
} 
