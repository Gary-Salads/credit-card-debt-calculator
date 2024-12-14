#include <iostream>
#include <iomanip>
using namespace std;

const double YEARLY_INTEREST_RATE = 22.24 / 100.0;    // 22.24% = 0.2224
const double MONTHLY_INTEREST_RATE = YEARLY_INTEREST_RATE / 12;
const double CREDIT_LIMIT = 500.00;     // credit limit
const int    MAX_MONTHS = 12;           // maximum months to display

int main()
{
  
    double balance;
    double payment;
    double interest;
    double newBalance;
    int month = 1;
    cout << "What is the balance: $" << endl;
    cin >> balance;
    cout << "what are you paying monthly: $" << endl;
    cin >> payment;

    // table column headings
    cout << fixed << showpoint;
    cout << setw(7) << "Month" << setw(9) << "Balance" << setw(10) << "Interest" << setw(9) << "Payment" 
        << setw(9)  << setw(12) << "New Balance" << endl;

    do {
        interest = balance * MONTHLY_INTEREST_RATE;    
        newBalance = balance + interest - payment;
        if (newBalance>0.00)
        {
        // display table values
        cout << setprecision(2);
        cout << setw(7) << month << setw(9) << balance << setw(10) << interest << setw(9) << payment 
            << setw(9) << setw(12) << newBalance << endl;
        }
        month++;                
        balance = newBalance;   // transfer newBalance to balance for next computation
       
    } while (balance >= 0.00);
}