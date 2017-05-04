/**************************************************************************************
This program takes inputs of loan amount, annual interest rate, and number of payments.
The program then calculates and shows the monthly payment on the loan, the total amount
paid over the life of the loan, and includes the total interest paid.
***************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    //Initialize variables
    int numberOfPayments;
    double monthlyPayment, monthlyInterestRate, annualInterestRate, loanBalance, loanAmountPaid , interestPaid;

    //Get loan principal balance
    std::cout << "Enter principal loan amount: " << std::endl;
    std::cin >> loanBalance;

    //Get the monthly interest rate
    std::cout << "Enter the annual interest rate: " << std::endl;
    std::cin >> annualInterestRate;

    //Get the number of payments
    std::cout << "Enter the number of payments: " << std::endl;
    std:: cin >> numberOfPayments;

    //Calculate true monthly interest rate
    monthlyInterestRate = (annualInterestRate/100) / 12.0;

    //Calculate monthly payment
    monthlyPayment = ((monthlyInterestRate) * pow((1 + monthlyInterestRate), numberOfPayments) / (pow((1 + monthlyInterestRate), numberOfPayments) - 1)) * loanBalance;

    //Calculate full term loan payment
    loanAmountPaid = monthlyPayment * numberOfPayments;
    //std::cout << loanAmountPaid;

    //Calculate interest paid
    interestPaid = loanAmountPaid - loanBalance;

    //Show loan principal
    std::cout << "Principle Loan Amount: " << std::setw(3) << "$" << std::fixed << std::showpoint << std::setprecision(2) << loanBalance << std::endl;

    //Show interest rate
    std::cout << "Monthly Interest Rate:" << std::setw(7) << (monthlyInterestRate * 100) << "%" << std::endl;

    //Show number of payments - term of loan
    std::cout << "Number of Payments: " << std::setw(7) << numberOfPayments << std::endl;

    //Show monthly payment
    std::cout << "Monthly Payment: " << std::setw(9) << "$" << monthlyPayment << std::endl;

    //Show amount paid full term of loan
    std::cout << "Amount Paid Back: " << std::setw(8) << "$" << loanAmountPaid << std::endl;

    //Show interest paid
    std::cout << "Total Interest Paid: " << std::setw(5) << "$" << interestPaid << std::endl;

    return 0;
}
