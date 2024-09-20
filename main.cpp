#include <iostream>
using namespace std;

int main() {

	//1
	/*int x;
	cout << "Enter the first number: ";
	cin >> x;
	int y;
	cout << "Enter the second number: ";
	cin >> y;

	int* x_p = &x;
	int* y_p = &y;

	if (*x_p > *y_p) {
		cout << *x_p << " more and " << *y_p << " less."<<endl;
	}
	else {
		cout << *y_p << " more and " << *x_p << " less." << endl;
	}*/
	
	//2
	/*int x;
	cout << "Enter the number: ";
	cin >> x;

	int* x_p = &x;

	if (*x_p > 0) {
		cout << *x_p << " the number is positive "<<endl;
	}
	else if (*x_p < 0) {
		cout << *x_p << " the number is negative " << endl;
	}
	else {
		cout << *x_p << " the number is zero " << endl;
	}*/
	
	//3
	/*int x = 99;
	int y = 13;


	int* x_p = &x;
	int* y_p = &y;
	int temp = *x_p;

	*x_p = *y_p;
	*y_p = temp;

	cout << "The numbers are reversed: " << x <<" " << y << endl;*/
	
	//4
	/*int x;
	cout << "Enter the first number: ";
	cin >> x;
	char op;
	cout << "Enter an operation +, -, *, /: ";
	cin >> op;
	int y;
	cout << "Enter the second number: ";
	cin >> y;
	int res;

	int* x_p = &x;
	int* y_p = &y;
	int* res_p = &res;

	if (op == '+') {
		*res_p = *x_p + *y_p;
	}
	else if (op == '-') {
		*res_p = *x_p - *y_p;
	}
	else if (op == '*') {
		if (*x_p != 0 && *y_p != 0) {
			*res_p = *x_p * *y_p;
		}
		else {
			*res_p = 0;
		}
	}
	else if (op == '/') {
		if (*x_p != 0 && *y_p != 0) {
			*res_p = *x_p / *y_p;
		}
		else {
			cout << "Cannot be divided by zero!" << endl;
		}
	}
	else {
		cout << "Invalid operator!" << endl;
	}

	cout << "Result: " << *res_p << endl;*/

	//5
	/*const int elements = 5;
	int masiv[elements] = { 10, 4, 26, 2, 18 };

	int* masiv_p = masiv;
	int sum = 0;

	
	for (int i = 0; i < elements; i++) {
		sum += *masiv_p;
		masiv_p++;
	}

	cout << "The sum of array elements: " << sum << endl;*/
	
}