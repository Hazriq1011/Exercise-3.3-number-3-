#include <iostream>
using namespace std;

int main()

{
	int loan_amount, number_of_years, monthly_payment;
	double anual_interest_rate;

	cout << "Enter loan amount (RM): ";
	cin >> loan_amount;
	cout << "Enter anual interest rate (%): ";
	cin >> anual_interest_rate;
	cout << "Enter the number of years: ";
	cin >> number_of_years;

	monthly_payment = ((((anual_interest_rate / 100) * loan_amount) * number_of_years) + loan_amount) / number_of_years / 12;

	cout << "Monthly payment for this loan is (RM): " << monthly_payment << endl;
	return 0;
}