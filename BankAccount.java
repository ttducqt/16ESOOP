import java.util.ArrayList;

public class BankAccount
{
	private String name;
	private double balance;
	private long ID;
	
	public BankAccount()
    {
      balance = 0 ;
      ID = 0 ;
    }
    public BankAccount( long ID, String name, double balance)
    {
      this.name = name;
      this.balance = balance;
      this.ID = ID;
    }

    void deposit(double value)
    {
      if( value>0 )
        balance += value;
    }

    boolean withdraw(double value)
    {
      if( value>0 && value<=balance )
      	balance -= value;
      return true;
    }

    void transferMoney( BankAccount User, double money )
    {
      if( withdraw(money) );
      User.deposit(money);
    }
	
  	void printInfo()
    {
      System.out.print(ID+" "+name+" "+balance+"\n");
    }
	public static void main(String[] args)
    {
    	ArrayList<BankAccount> UserList = new ArrayList<BankAccount>();
    	BankAccount User0 = new BankAccount( 0, "Duc", 50000 );
      	UserList.add(User0);
      	BankAccount User1 = new BankAccount( 1, "Vinh", 30000 );
      	UserList.add(User1);
      	
      	UserList.get(0).transferMoney( UserList.get(1), 5000 );
      	UserList.get(0).printInfo();
      	UserList.get(1).printInfo();
    }
}


