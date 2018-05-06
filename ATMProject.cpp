#include <iostream>
#include <cmath>

using namespace std;

void topMenu(bool loggedIn)
{
  // 1) Basic Menu displayed
  // 2) User must log in to access functions
  int option = 0;
  loggedIn = false;
  cout
  << "1. Sign in"
  << endl
  << "2. Balance"
  << endl
  << "3. Deposit"
  << endl
  << "4. Withdraw"
  << endl
  << "5. Exit"

}

bool goodbye(bool loggedIn)
{

  // 1) Displays Good Bye exits returns logged in bool false
  // 2) Starts topMenu
  return loggedIn;
}

// Sign In function
bool signIn(bool loggedIn)
{
  // 1) Holds accounts for only 10 people in Array
  // 2) All have starting balance of $1000
  // 3) User types in an account number from 0 to 10 to access balance
  // 4) incorrect number or attempt to access other options without signing in
  // returns logged in bool false then runs top menu
  return loggedIn;
}

// Balance
void balance()
{
  // 1) Display current balance
  // 2) Diplay "low balance" For low balance (if below $100)
  // 3) Run top menu with bool logged in true
}

// Deposit
double deposit(double depositedAmount)
{
  // 1) Prompt user for amount to deposit
  // 2) If input is negative count updated max 3 warns user invalid amount
  // then tuns top menu
  // 3) If successful run update balance
  return depositedAmount;
}

// Withdraw
double withdraw(double withdrawnAmount)
{
  // 1) Prompt user to enter amount to withdraw
  // 2) Checks if user has enough then subtracts amount
  // 3) Or displays warning and returns to top menu
  return withdrawnAmount;
}

// Runs top menu functions
int main()
{
  cout
  << "Welcome to Luigi's ATM service~"
  << endl;
  topMenu();
  return 0;
}
