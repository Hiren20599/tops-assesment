#include<iostream>
#include<ctime> //for display current date and time
using namespace std;

class account
{
	public:
		int amount,balance;
	account() //default constructor
	{
		cout<<"The name of account holder is: Hiren_Patel\n"<<endl;
		cout<<"The Account Holder's Address is: Surat\n"<<endl;
		cout<<"Tha Branch Location is: Jahangirpura\n"<<endl;
		cout<<"Account Number: 123456789\n"<<endl;	
	}
	void deposit()
	{
		balance=20000;
		cout<<"The Present Account Balance is: "<<balance<<endl;
		cout<<"\nEnter the amount to be deposited: ";
		cin>>amount;
		balance+=amount;
		cout<<"\nYour new available account balance is: "<<balance<<endl;
	}
	void withdraw()
	{
		balance=20000;
		cout<<"\nEnter a amount you want to withdraw: ";
		cin>>amount;
		if(balance>amount)
		{
			balance-=amount;
			cout<<"\nYour new available account balance is: "<<balance<<endl;
		}
		if(balance<amount)
		{
			cout<<"\nInsufficient available balance in your account."<<endl;
			cout<<"                  SORRY!"<<endl;
		}	
	}
	void display()
	{
		balance=20000;
		cout<<"\nYour Current account balance is : "<<balance<<endl;
	}
	
};
int main()
{
	int choice,pin,select;
	cout<<"************** WELCOME TO ATM ***************\n"<<endl;
	time_t timetoday;
   	time(&timetoday);
   	cout<<"Current date and time: "<< asctime(localtime(&timetoday))<<endl;
   	cout<<"\n*********************************************\n"<<endl;
   	cout<<"Press 1 And Then Press Enter To Access Your Account Via Pin Number\n"<<endl;
   	cout<<"                      or\n"<<endl;
   	cout<<"Press 0 And Press Enter To Get Help\n"<<endl;
   	cin>>choice;
   	if(choice==1)
   	{
   		cout<<"************* ATM ACCOUNT ACCESS *************\n"<<endl;
   		cout<<"Enter Your Acc Pin Access Number! [Only One Attempt is Allowed]"<<endl;
   		cout<<"\n**********************************************\n"<<endl;
   		cin>>pin;
		if(pin==12345)
		{	atm:
			{
			
			cout<<"**********ATM Main Menu Screen********\n\n"<<endl;
			cout<<"Enter [1] To Deposit Cash"<<endl;
			cout<<"Enter [2] To Withdraw Cash"<<endl;
			cout<<"Enter [3] To Balance Inquiry"<<endl;
			cout<<"Enter [0] To Exit ATM\n"<<endl;
			cout<<"PLEASE ENTER A SELECTION AND PRESS ENTER: "<<endl;
			cin>>select;
			account service;
			switch (select)
			 {
				case 1:
					{
						cout<<"********** ATM ACCOUNT DEPOSIT SYSTEM *********\n"<<endl;
						service.deposit();
						cout<<"\n             Thank You!"<<endl;
						goto atm;	
					}
				case 2:
					{
						cout<<"********** ATM ACCOUNT WITHDRAWAL SYSTEM *********\n"<<endl;
						service.withdraw();
						goto atm;	
					}
				case 3:
					{
						cout<<"********** ATM ACCOUNT BALANCE ************\n"<<endl;
						service.display();
						cout<<"\n             Thank You!"<<endl;	
						goto atm;
					}
				case 0:
					{
						cout<<"Thank you for visiting ATM system:)"<<endl;
						break;	
					}
				default :
					{
						cout<<"Please enter valid option number: "<<endl;
						goto atm;	
					}
			 }
			}
		}
		else
   		{
   			cout<<"********** THANK YOU ************\n"<<endl;
   			cout<<"You had made your attempt which failed!!! No more attempts allowed!! Sorry!!\n"<<endl;
		}
	}
	else if(choice==0)
	{
		cout<<"*************ATM ACCOUNT STATUS***************\n"<<endl;
		cout<<"You must have have correct pin number to access this account."<<endl; 
		cout<<"See your bank representative for assistance during bank opening hours."<<endl;
		cout<<"Thanks for, your choice today!!"<<endl;
	}   
	return 0;
}
