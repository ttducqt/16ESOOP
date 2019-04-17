#include <iostream>
#include <vector>

using namespace std;

class BankAccount
{
	private:
		string name;
		double balance;
		long ID;
	
	public:
		BankAccount()
		{
			balance = 0 ;
			ID = 0 ;
		}
		BankAccount( long ID, string name, double balance)
		{
			this->name = name;
			this->balance = balance;
			this->ID = ID;
		}

		void deposit(double value)
		{
		    if( value>0 )
			balance += value;
		}
		
		bool withdraw(double value)
		{
		    if( value>0 && value<=balance )
			    balance -= value;
			return true;
		}
		
		void displayInfo()
		{
			cout <<"Name: " <<name<<endl;
			cout <<"ID: " <<ID<<endl;
			cout <<"Balance: " <<balance<<endl;	
		}
		
        void transferMoney( BankAccount &User, double money )
        {
            if( withdraw(money) );
                User.deposit(money);
        }
};

main()
{
    vector<BankAccount> UserList;
	BankAccount User0( 0, "Duc", 50000 );
	UserList.push_back(User0);
	BankAccount User1( 1, "Khai", 20000 );
	UserList.push_back(User1);
	
	UserList[0].transferMoney( UserList[1], 4000 );
	UserList[0].displayInfo();
	UserList[1].displayInfo();
	
}



