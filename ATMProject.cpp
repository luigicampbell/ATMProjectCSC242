#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void topMenu();

void goodbye(int &accountNumber)
{

  // 1) Displays Good Bye exits returns logged in bool false
  cout
  << "Goodbye"
  << endl;
  // 2) Starts topMenu
  accountNumber = -1;
  topMenu();
}

// Sign In function
void signIn(int &accountNumber)
{
  int newAccountNumber;
  cout
  << "Current Account Number: "
  << accountNumber
  << endl
  << "Please enter your account number from the following list:  0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ..."
  << endl;

  cin
  >> newAccountNumber;

  // 1) Holds accounts for only 10 people in Array
  // 2) All have starting balance of $1000
  // 3) User types in an account number from 0 to 10 to access balance
  // 4) incorrect number or attempt to access other options without signing in
  // returns logged in bool false then runs top menu
  accountNumber = newAccountNumber;
  cout
  << "Selected Account Number: "
  << accountNumber
  << endl;
  topMenu();

}

// Balance
void balance(int &accountNumber)
{
  double accounts [] =
  // Need to pass values by reference

                          {
                            4.00,
                            1000.00,
                            5.00,
                            1000.00,
                            1000.00,
                            1000.00,
                            1000.00,
                            1000.00,
                            1000.00,
                            1000.00
                          };
    double account = accounts[accountNumber];
    cout
    << setprecision(2)
    << fixed
    << account
    << endl;
    topMenu();
  // 1) Display current balance
  // 2) Diplay "low balance" For low balance (if below $100)
  // 3) Run top menu with bool logged in true
}

// // Deposit
// double deposit(double& depositedAmount)
// {
//   // 1) Prompt user for amount to deposit
//   // 2) If input is negative count updated max 3 warns user invalid amount
//   // then tuns top menu
//   // 3) If successful run update balance
//   // return depositedAmount;
// }
//
// // Withdraw
// double withdraw(int& accountNumber, double& withdrawnAmount)
// {
//   // 1) Prompt user to enter amount to withdraw
//   // 2) Checks if user has enough then subtracts amount
//   // 3) Or displays warning and returns to top menu
//   return withdrawnAmount;
// }

void topMenu()
{
  // 1) Basic Menu displayed
  // 2) User must log in to access functions
  int option = 0;
  int accountNumber;
  cout
  <<"Account Number: "
  << accountNumber
  << endl
  << "1. Sign in"
  << endl
  << "2. Balance"
  << endl
  << "3. Deposit"
  << endl
  << "4. Withdraw"
  << endl
  << "5. Exit"
  << endl;

  cin
  >> option;

  if (option == 1 ){
    signIn(accountNumber);
  }
  if (option == 2 && accountNumber != -1 ){
    cout
    << "Successful login"
    << endl;
    balance(accountNumber);
  }
  // if (option == 3 && accountNumber != -1 ){
  //   deposit(accountNumber);
  // }
  // if (option == 4 && accountNumber != -1 ){
  //   withdraw(accountNumber);
  // }
  if ( option == 5 && accountNumber != -1 ){
    goodbye( accountNumber );
  }
  if ( option < 1 || option > 5 )
  {
    cout
    << "Invalid option.."
    << endl;
    topMenu();
  }
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
