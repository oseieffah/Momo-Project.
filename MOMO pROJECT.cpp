#include <iostream>
using namespace std;

// Default pin and balance
int default_pin = 0000;
float default_balance = 1000;

// User's pin and balamce
int user_pin;
float user_balance = default_balance;

// Function to authenticate user
bool authenticate () {
	int attempts = 0;
	while (attempts < 3) {
		int pin;
		cout << "ENTER YOUR PIN:";
		cin >> pin;
		if (pin == user_pin) {
			return true;
		} else {
			cout << "INVALID PIN. TRY AGAIN." <<
			endl;
			attempts++;
	}
}
cout << "TOO MANY ATTEMPTS. EXITING PROGRAM." << endl;
return false;
}

// Function to reset/change pin 
void reset_pin() {
int new_pin;
cout << "ENTER YOUR NEW PIN:";
cin >> new_pin;
user_pin = new_pin;
cout << "PIN CHANGED SUCCESSFULLY." <<
endl;
}

// Function to check balance 
void check_balance() {
cout << "YOUR CURRENT BALANCE IS:" <<
user_balance << endl;
}

// Function to send money
void send_money() {
float amount;
cout << "ENTER THE AMOUNT YOU WANT TO SEND:";
cin >> amount;
if (amount <= user_balance) {
user_balance -= amount;
cout << "TRANSACTION SUCCESSFUL. YOUR NEW BALANCE IS:" << user_balance << endl;
} else {
cout << "INSUFFICIENT FUNDS. TRANSACTION CANCELLED." << endl;
}
}

// Main function
int main() {
// Set default user pin and balance
user_pin = default_pin;

// Display menu and get user choice
int choice;
do {
cout << "WELCOME TO MOBILE MONEY PLATFORM." << endl;
cout << "1. AUTHENTICATE" << endl;
cout << "2. RESET/CHANGE PIN" << 
endl;
cout << "3. CHECK BALANCE" << endl;
cout << "4. SEND MONEY" << endl;
cout << "5. EXIT" << endl;
cout << "ENTER YOUR CHOICE:";
cin >> choice;

// Perform selected action 
switch (choice) {
case 1:
	if (authenticate()) {
	cout << "AUTHENTICATION SUCCESSFUL." << endl;
}
break;
case 2:
	if (authenticate()) {
	reset_pin();
}
break;
case 3:
	if (authenticate()) {
	check_balance();
}
break;
case 4:
	if (authenticate()) {
	send_money();
}
break;
case 5:
	cout << "EXITING PROGRAM.GOODBYE!" << endl;
	break;
	default:
		cout << "INVALID CHOICE. TRY AGAIN." << endl;
		break;
	}
	
} while (choice != 5);

return 0;
}
