
// Simple ChatBox Using C++

// These are Header files
#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

// This is main function
int main()
{
	// Datatypes of this program
	char inp;
	string name,getkey;
	int age;
	
	//to color output screen text
	system("color 0a");   //color 0g for list of color codes
	
	cout<<"\t\t WELCOME TO CHATBOX"<<endl<<endl;
	cout<<" To continue the program type 'Y' and to End type 'N' "<<endl;
	cout<<"--> "; // Cout is to print input on screen
	
	cin>>inp; // Cin is to get input from the user
	
	//if else statement
	if(inp=='y' || inp=='Y')
	{
		cout<<"Welcome......!"<<endl;
	}
	else
	{
		cout<<endl<<"--> ";
		cout<<"Thanks for coming"<<endl;
		return 0;
	}
	
	system("cls");

	if(getkey !=  "by")
	{
		cout<<"\t HELLO USER "<<endl;
		cout<<"--> ";
		cin>> getkey;
		cout<<"What is your name ?"<<endl;
		cout<<"--> ";
		cin>>name;
		cout<<"what is your age"<<endl;
		cout<<"-->";
		cin>>age;
		
		//switch case statement
		switch(age)
		{
			
			//cases of switch statement
			case 16:
				cout<<"Oh! You are not young yet "<<endl;
				break;
			case 18:
				cout<<"Oh! You are young "<<endl;
				break;
			case 50:
				cout<<"Oh! You are a man "<<endl;
				break;
			default:
				cout<<"Oh! You are a old man"<<endl;
		}
	
		cout<<endl<<"By-->"<<name<<endl;
		cin>>getkey;
	}
	
	system("cls");
	
	cout<<"\t\t\t PROGRAM END HERE";
	return 0;
}
