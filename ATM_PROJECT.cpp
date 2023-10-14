#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
using namespace std;
void login();
void line(char , int );
void get();
void logo();
void menu();

class bank
{   
      private:
      	string name;
      	string caste;
      	long ph;
      	int age;

	public:
		int deposite();
		 void showdeposit(char *);
		void menu()
		{
			
      	line('-',110);
		cout<<"\t1.REGISTRATION 2.REMAINING BALANCE 3.FAST CASH 4.WITHDRAW MONEY 5.ACCOUNT INFORMATION 6.LOGIN 7.Deposite"<<endl;
		line('-',110);
		}
		
		void get()
		{
			cout<<"\n\t\t\tEnter your name:";
			cin>>name;
			cout<<"\n\t\t\tEnter your caste:";
			cin>>caste;
			cout<<"\n\t\t\tEnter your age:";
			cin>>age;
			cout<<"\n\t\t\tEnter your phone no:";
			cin>>ph;
	       }	
	       show()
	     {
		cout<<" "<<name<<"\t"<<caste<<"\t\t"<<age<<"\t\t"<<ph<<endl;
       	}
        };
     
int main ()
{  
int code,no;
  bank b;
    logo();
    b.menu();
   
      	  
      	cout<<"\n\nEnter your choice from below options:";
      	cin>>code;
      	switch(code)
      	{
		  
      	case 1:
      		{ 
			 system("COLOR 70");
			   system("cls");
			  
			  cout<<"\t\t ----------------------------------------\n";
			  cout<<"\t\t|       Account Registration           |\n";
			  cout<<"\t\t|                                      |\n";
			  cout<<"\t\t ----------------------------------------\n\n";
			  cout<<"\n\n\t\t\tEnter account's info:"<<endl<<endl;
			 cout<<"\t\t\t";   line('-',20);
		      b.get();
		      b.deposite();
			cout<<"\n\n\t\t\t\t Registration completed successfully ... ";
			 getch();
			 system("cls"); 
			  return main();	
			  }
			  
			  case 2:
			  	
			  	
      		{ 
			 
			   system("cls");
			  
			  cout<<"\t\t ----------------------------------------\n";
			  cout<<"\t\t|       Remaining Balance              |\n";
			  cout<<"\t\t|                                      |\n";
			  cout<<"\t\t ----------------------------------------\n\n";
			  cout<<"\n\n\t\t\tEnter account's Number:"<<endl<<endl;
			  cin>>no;
			  cout<<"\t\t\t";   line('-',20);
				cout<<"\n\n\t\t\t\tsuccessfully Registration completed ... ";
		    	getch();
			  system("cls"); 
			   return main();
				  }
				  
				  
				  case 3:
			  	
			  	
      		{ 
			 
			   system("cls");
			  
			  cout<<"\t\t ----------------------------------------\n";
			  cout<<"\t\t|         F A S T    C A S H               |\n";
			  cout<<"\t\t|                                          |\n";
			  cout<<"\t\t ----------------------------------------\n\n";
			  cout<<"\n\n\t\t\tEnter account's Number:"<<endl<<endl;
			  cin>>no;
			  cout<<"\t\t\t";   line('-',20);
				cout<<"\n\n\t\t\t\tsuccessfully Registration completed ... ";
		    	getch();
			  system("cls"); 
			   return main();
				  }
 }
      	  
			
	getch();
}    //..........  End of Main program

int bank::deposite()
{
      ofstream file;
    file.open("deposite.txt",ios::app);
	file.write((char*)this,sizeof(*this));
	file.close();
	return (1);
}


	void bank::showdeposit(char *n)
{   int counter=0;
    ifstream fin;
    fin.open("deposite.txt",ios::app);
    if(!fin)
        cout<<"\nFile Not Found";
    else
    {fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    
    {

   show ();
    counter++;}

    fin.read((char*)this,sizeof(*this));
    }
    if(counter==0)
        cout<<"\n Record Not found";
	fin.close();

    }

	
	


      
void line(char ch, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<ch;
	}
	cout<<endl<<endl;
}


void logo()
{
cout<<"      \t\t\t========================================="<<endl;
cout<<"      \t\t\t|                                       |"<<endl;
cout<<"      \t\t\t|                                       |"<<endl;
cout<<"      \t\t\t|               ***********             |"<<endl;
cout<<"      \t\t\t|               ATM PROJECT             |"<<endl;
cout<<"      \t\t\t|               ***********             |"<<endl;
cout<<"      \t\t\t|                                       |"<<endl;
cout<<"      \t\t\t|                                       |"<<endl;
cout<<"      \t\t\t========================================="<<endl<<endl;

}
