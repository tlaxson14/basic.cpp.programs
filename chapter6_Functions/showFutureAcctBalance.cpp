/*********************************************************
 This program will find the future account value using
 inputs for current account balance, monthly interest rate,
 and the number of months the money will be in the account.
 The program will use the future value formula:
 F = P x (1+i)^t where P is the present value, i is the
 monthly interest rate, and t is the number of months.
 **********************************************************/

#include<iostream>
#include<iomanip>
#include<cmath>

//Namespaces
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;
using std::setw;

//Function prototypes
int getMonths();
double getInterestRate();
double getAccountBalance();
void getFutureBalance(double accountBalance, double interest, int months);

int main()
{
    int months;                   //Number of months to hold in account
    double currentBalance,        //Current balance in account
           monthlyInterestRate;   //Monthly interest rate for account

    //Call getAccountBalance function to get the current starting balance on account
    currentBalance = getAccountBalance();

    //Call getMonths function to get number of months to hold money in account
    months = getMonths();

    //Call getInterestRate function to obtain the interest rate of the account
    monthlyInterestRate = getInterestRate();

    //Call getFutureBalance function and pass arguments for balance, months, and interest
    getFutureBalance(currentBalance, monthlyInterestRate, months);

    return 0;
}

/********************** getAccountBalance *************************
 This function will accept and return the starting account balance
 on the account.
 *******************************************************************/
double getAccountBalance()
{
    double accountBalance;        //Current balance in account

    //Get current account balance
    cout << "What is the current account balance?" << endl;
    cin >> accountBalance;

    //Input validation
    while(accountBalance <= 0)
    {
        //Get correct account balance
        cout << "Please enter a valid account balance greater than $0." << endl;
        cin >> accountBalance;
    }

    return accountBalance;
}

/********************** getMonths function ***********************
 This function will accept and return the number of months the user
 would like to keep the money held within the account.
 ******************************************************************/
int getMonths()
{
    int months;       //Number of months input

    //Get months held in account
    cout << "How many months would you like to keep the money in your account?" << endl;
    cin >> months;

    //Input validation from 1 month to 99 years
    while(months <= 0 || months > 1200)
    {
        //Get correct number of months
        cout << "Please enter a time between 1 month and 99 years (in months)." << endl;
        cin >> months;
    }

    return months;
}

/********************* getInterestRate function ********************
 This function will take input for the monthly interest rate of the
 account and return the value back to main function.
 ********************************************************************/
double getInterestRate()
{
    double interest;      //Interest rate input

    //Get interest rate
    cout << "What is the monthly interest rate of the account in percent?" << endl;
    cin >> interest;

    //Input validation for 0.001% - 25%
    while(interest <= 0.00 || interest > 25.00)
    {
        //Get correct monthly interest
        cout << "Please enter a valid monthly interest between 1% and 25%." << endl;
        cin >> interest;
    }

    return interest;
}

/************************ getFutureBalance function *************************
 This function will take the arguments obtained from the previous 3 functions
 and calculate and show the future value of the account based on the parameter
 inputs -- using the future value equation.
 *****************************************************************************/
void getFutureBalance(double currentBal, double interestRate, int months)
{
    double futureBalance;         //Future balance of account

    //Calculate the future balance using parameters and future value formula
    futureBalance = (currentBal) * pow((1 + interestRate/100), static_cast<double>(months));

    //Format display to 2 decimal places
    cout << fixed << showpoint << setprecision(2);

    //Show all parameter values including calculated future balance
    cout << "Current balance: $" << setw(4) << currentBal << endl;
    cout << "Interest Rate: " << setw(4) << interestRate << "%" << endl;
    cout << "Number of months: " << setw(4) << months << endl;
    cout << "Future balance: $" << setw(4) << futureBalance << endl;
}
