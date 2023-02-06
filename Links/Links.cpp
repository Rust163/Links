#include <iostream>
using namespace std;

template<typename Type> Type theLargestNumber(Type& num1Ref, Type& num2Ref) {
	if (num1Ref > num2Ref) {
		cout << "The largest number is the first: " << num1Ref << "\n";
	}
	else if (num1Ref < num2Ref) {
		cout << "The largest number is the second: " << num2Ref << "\n";
	}
	else {
		cout << "You have entered equivalent numbers!" << "\n";;
	}
	cout << "\n";
	return num1Ref, num2Ref;
}

template<typename T> T positiveOrNegative(T& numRef) {
	if (numRef > 0) {
		cout << "Number " << numRef << " is positive, with a sign (+)!\n";
	}
	else {
		cout << "Number " << numRef << " is negative, with a sign (-)!\n";

	}
	cout << "\n";
	return numRef;
}

template<typename T> T swappingTheValues(T& num01Ref, T& num02Ref, T& tempNumRef) {
	tempNumRef = num01Ref;
	num01Ref = num02Ref;
	num02Ref = tempNumRef;
	cout << "Swapping the values of variables num01 and num02!" << "\n";
	cout << "num01 = " << num01Ref << "\n";
	cout << "num02 = " << num02Ref << "\n";
	return 0;
}

template<typename T> T calculater(T& number1Ref, T& number2Ref, T& resultRef) {
	char operation;
	cout << "Input character +, -, *, /: ";
	cin >> operation;
	cout << "\n";
	while (operation != 'off') {
		switch (operation)
		{
		case '+':
			resultRef = number1Ref + number2Ref;
			cout << number1Ref << " + " << number2Ref << " = " << resultRef << "\n";
			break;
		case '-':
			resultRef = number1Ref - number2Ref;
			cout << number1Ref << " - " << number2Ref << " = " << resultRef << "\n";
			break;
		case '*':
			resultRef = number1Ref * number2Ref;
			cout << number1Ref << " * " << number2Ref << " = " << resultRef << "\n";
			break;
		case '/':
			resultRef = number1Ref / number2Ref;
			cout << number1Ref << " / " << number2Ref << " = " << resultRef << "\n";
			break;
		default:
			cout << "Incorrect character!";
			break;
		}
		break;
	}
	return resultRef;
}

int main()
{
	int num1;
	cout << "Input first number: ";
	cin >> num1;
	cout << "\n";
	int num2;
	cout << "Input second number: ";
	cin >> num2;
	cout << "\n";
	int& num1Ref = num1;
	int& num2Ref = num2;
	theLargestNumber<>(num1Ref, num2Ref);

	cout << "\n==========================================================================\n";

	int num;
	int& numRef = num;
	cout << "Enter any number: ";
	cin >> numRef;
	positiveOrNegative<>(numRef);

	cout << "\n==========================================================================\n";

	int num01 = 4;
	int num02 = 7;
	cout << "num01 = " << num01 << "\n";
	cout << "num02 = " << num02 << "\n";
	int tempNum = 0;
	int& num01Ref = num01;
	int& num02Ref = num02;
	int& tempNumRef = tempNum;
	swappingTheValues<>(num01Ref, num02Ref, tempNumRef);

	cout << "\n==========================================================================\n";

	double number1;
	cout << "Enter first number: ";
	cin >> number1;
	double number2;
	cout << "Enter second number: ";
	cin >> number2;
	double result;
	double& number1Ref = number1;
	double& number2Ref = number2;
	double& resultRef = result;
	calculater<double>(number1Ref, number2Ref, resultRef);
}
}
