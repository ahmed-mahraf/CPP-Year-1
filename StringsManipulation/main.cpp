#include <iostream>
#include <string>
#include <algorithm> // access std::replace_if

std::string stringToText, textResult;

int main() {
	std::cout << "Enter a string:" << std::endl;

	std::cin >> stringToText;

	std::replace_if(
		stringToText.begin(),
		stringToText.end(),
		std::ispunct, 
		' ');

	std::cout << stringToText << std::endl;

	std::system("pause");
	return 0;
}