// Program to convert from Fahrenheit to Celsius of Viceversa
#include <iostream>

void printMenu() {
	std::cout << "############## Temp Conversion Program ##############\n";
	std::cout << "Which unit you want to convert?\n";
}

char menuInputOption() {
	std::cout << "Enter the unit (C or F): ";
	char op{};
	std::cin >> op;
	return op;
}

void celciusToFahrenheit() 
{
	std::cout << "Enter the temp in C: ";
	double tempInC{};
	std::cin >> tempInC;

	double tempInF{ (1.8 * tempInC) + 32.0};
	std::cout << tempInC << " C are " << tempInF << " F";
	
}

void fahrenheitToCelcius()
{
	std::cout << "Enter the temp in F: ";
	double tempInF{};
	std::cin >> tempInF;

	double tempInC{ (tempInF - 32) / 1.8 };
	std::cout << tempInF << " F are " << tempInC << " C";

}

void optionOperation(char op) {
	if (op == 'F' || op == 'f')
		fahrenheitToCelcius();
	else if (op == 'C' || op == 'c')
		celciusToFahrenheit();
	else
		std::cout << "You did not entered a valid unit";
}

int main() {
	printMenu();
	char op{ menuInputOption() };
	optionOperation(op);
	return 0;
}