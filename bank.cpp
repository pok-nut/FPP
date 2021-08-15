#include "bank.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

BankAcc::BankAcc() {
	//default constructor
	dollars = 0;
	cents = 0;
	accType = 0;
}

BankAcc::BankAcc(int dol, int cent, int type) {
	//constructor
	dollars = dol;
	cents = cent;
	accType = type;
}

BankAcc BankAcc::operator+(BankAcc rhs) {
	BankAcc totalMoney;

	totalMoney.dollars = dollars + rhs.dollars;
	totalMoney.cents = cents + rhs.cents;

	return totalMoney;
}

void BankAcc::Deposit(int dol, int cent) {
	//deposit money
	dollars += dol;
	cents += cent;

	while (cents > 99) {
		cents -= 100;
		dollars++;
	}
}

void BankAcc::Withdraw(int dol, int cent) {
	dollars -= dol;
	cents -= cent;

	while (cents < 0) {
		dollars--;
		cents += 100;
	}
}

void BankAcc::SetInfo(int dol, int cent, int type) {
	//sets the currAcc's dollars, cents, and type
	dollars = dol;
	cents = cent;
	accType = type;
}

int BankAcc::GetCents() {
	return cents;
}

int BankAcc::GetDollars() {
	return dollars;
}

int BankAcc::GetType() const{
	return accType;
}


