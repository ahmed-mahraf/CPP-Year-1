#include <iostream>

int main()
{
	bool isActive = true;
	float num1, num2;
	
	while (isActive == true)
	{
		char chosenValue = ' ';
		std::cout << " ==================================================" << std::endl;
		std::cout << "  MAHRAF AHMED - SIMPLE CALCULATOR | VERSION 1.0.0" << std::endl;
		std::cout << " ==================================================" << std::endl;
		std::cout << " Welcome to the calculator. Choose your method of calculation:" << std::endl;
		std::cout << " 1 - Add" << std::endl;
		std::cout << " 2 - Subtract" << std::endl;
		std::cout << " 3 - Multiply" << std::endl;
		std::cout << " 4 - Divide" << std::endl;
		std::cout << " E - Exit" << std::endl;

		std::cin >> chosenValue;

		switch (chosenValue) {
		case '1':
			std::system("cls");
			std::cout << " Enter two numbers: " << std::endl;
			std::cin >> num1 >> num2;
			std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl; 
			std::system("pause");
			std::system("cls");
			break;
		case '2':
			std::system("cls");
			std::cout << " Enter two numbers: " << std::endl;
			std::cin >> num1 >> num2;
			std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
			std::system("pause");
			std::system("cls");
			break;
		case '3':
			std::system("cls");
			std::cout << " Enter two numbers: " << std::endl;
			std::cin >> num1 >> num2;
			std::cout << num1 << " x " << num2 << " = " << num1 * num2 << std::endl;
			std::system("pause");
			std::system("cls");
			break;
		case '4':
			std::system("cls");
			std::cout << " Enter two numbers: " << std::endl;
			std::cin >> num1 >> num2;
			std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			std::system("pause");
			std::system("cls");
			break;
		case 'e':
			isActive = false;
			std::cout << " Thank you for using this product. Please follow @ahmed-mahraf on Github.com." << std::endl;
			break;
		case 'E':
			isActive = false;
			std::cout << " Thank you for using this product. Please follow @ahmed-mahraf on Github.com." << std::endl;
			break;
		default:
			std::system("cls");
			std::cout << " You have entered the wrong value, try again!" << std::endl;
			std::system("pause");
			std::system("cls");
			break;
		}
	}

	std::system("pause");
	return 0;
}