//currency converter app in c++
#include <iostream>
#include <string>
using namespace std;

int main() {
	string currency_type[10] = {"USD(1)", "EUR(2)", "GBP(3)", "MYR(4)", "SGD(5)", "CAD(6)", "AUD(7)", "RMB(8)", "JPY(9)", "HKD(10)"};
	int currency_choice1;
	int currency_choice2;
	double convert_value;

	cout << "Choose from list of currencies to convert to: "<<"\n";
	for (int i = 0; i < 10; i++) {
		cout << "-" << currency_type[i] << "\n";
	}

	cout << "Choose by number(1st currency): ";
	cin >> currency_choice1;
	cout << "Choose by number(2nd currency): ";
	cin >> currency_choice2;
	cout << "Enter value to be converted: ";
	cin >> convert_value;
	
	switch (currency_choice1) {
		case 1:
			switch (currency_choice2) {
				case 2:
					convert_value *= 0.94;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.82;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 4.69;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 1.37;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 1.35;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 1.55;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 7.3;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 148.28;
					cout << convert_value << "JPY";
					break;
				
				case 10:
					convert_value *= 7.82;
					cout << convert_value << "HKD";
					break;
			}

			break;

		case 2:
			switch (currency_choice2) {
				case 1:
					convert_value *= 1.07;
					cout << convert_value << "USD";
					break;

				case 3:
					convert_value *= 0.87;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 5.01;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 1.46;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 1.44;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 1.88;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 7.79;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 158.27;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 8.33;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 3:
			switch (currency_choice2) {
				case 1:
					convert_value *= 1.22;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 1.15;
					cout << convert_value << "EUR";
					break;

				case 4:
					convert_value *= 5.74;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 1.67;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 1.65;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 1.9;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 8.93;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 181.48;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 9.57;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 4:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.21;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.2;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.17;
					cout << convert_value << "GBP";
					break;

				case 5:
					convert_value *= 0.29;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 0.29;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 0.33;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 1.56;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 31.79;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 1.67;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 5:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.73;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.69;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.6;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 3.43;
					cout << convert_value << "MYR";
					break;

				case 6:
					convert_value *= 0.99;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 1.14;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 5.34;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 108.56;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 5.73;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 6:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.74;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.7;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.61;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 3.48;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 1.01;
					cout << convert_value << "SGD";
					break;

				case 7:
					convert_value *= 1.15;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 5.41;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 109.9;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 5.8;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 7:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.64;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.61;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.53;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 3.02;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 0.88;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 0.87;
					cout << convert_value << "CAD";
					break;

				case 8:
					convert_value *= 4.7;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 95.87;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 5.04;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 8:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.14;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.13;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.11;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 0.64;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 0.19;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 0.18;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 0.21;
					cout << convert_value << "AUD";
					break;

				case 9:
					convert_value *= 20.32;
					cout << convert_value << "JPY";
					break;

				case 10:
					convert_value *= 1.07;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 9:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.0067;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.0063;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.0055;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 0.032;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 0.0092;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 0.0091;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 0.01;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 0.049;
					cout << convert_value << "RMB";
					break;

				case 10:
					convert_value *= 0.053;
					cout << convert_value << "HKD";
					break;
			}
			break;

		case 10:
			switch (currency_choice2) {
				case 1:
					convert_value *= 0.13;
					cout << convert_value << "USD";
					break;

				case 2:
					convert_value *= 0.12;
					cout << convert_value << "EUR";
					break;

				case 3:
					convert_value *= 0.1;
					cout << convert_value << "GBP";
					break;

				case 4:
					convert_value *= 0.6;
					cout << convert_value << "MYR";
					break;

				case 5:
					convert_value *= 0.17;
					cout << convert_value << "SGD";
					break;

				case 6:
					convert_value *= 0.17;
					cout << convert_value << "CAD";
					break;

				case 7:
					convert_value *= 0.2;
					cout << convert_value << "AUD";
					break;

				case 8:
					convert_value *= 0.93;
					cout << convert_value << "RMB";
					break;

				case 9:
					convert_value *= 18.96;
					cout << convert_value << "JPY";
					break;
			}
			break;
	}
}