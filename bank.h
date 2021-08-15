#ifndef BANKH
#define BANKH

class BankAcc {
private:
	
	int dollars;
	int cents;
	int accType;


public:
	BankAcc();
	BankAcc(int dol, int cent, int type); 

	void Deposit(int dol, int cent);
	void Withdraw(int dol, int cent);
	void SetInfo(int dol, int cent, int type);
	int GetDollars();
	int GetCents();
	int GetType() const;

	BankAcc operator+(BankAcc rhs);

};

#endif
