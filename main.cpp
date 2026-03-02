//HexToBytes C++ Final Product By VoidMain 02-03-2026
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#define GREEN  "\033[32m"
#define CYAN   "\033[36m"
#define YELLOW "\033[33m"
#define RESET  "\033[0m"
#define PINK "\033[95m"

void hextoBytes() {
	
	std::cout << "Enter Hex Value (e.g. 34 56 78): ";
	std::string userHexGiven{};
	std::cin.ignore(); // this is for clearing the buffer from std::cin >> usersellectorInput; 
	// so if use enter like 1 in std::cin >> usersellectorInput;  and this press enter in the buffer 
	// it store \n and then when getline read it only get \n from the buffer and just go along with it 
	std::getline(std::cin, userHexGiven); // so i am reading this whole user Given line string 
	std::stringstream ss(userHexGiven); // good thing about this is it can auto push the bytes that the varible need like char so it will puch 1 bytes at one loop
	std::string tempuserHexGiven{};
	while (ss >> tempuserHexGiven ) {
		std::cout << PINK<<  "0x" << tempuserHexGiven << " ";

	}
	std::cout << '\n';
	
	
}

void bytesToHex() {
	std::string userGivenBytes{};
	std::cout << "Enter Bytes Value (e.g. 0x34 0x56 0x78): ";
	std::cin.ignore(); // skip the next correct only 1 
	std::getline(std::cin , userGivenBytes);
	std::stringstream ss(userGivenBytes);
	std::string tempuserGivenBytes{};
	while (ss>>tempuserGivenBytes) {
		std::string subString{};
		subString = tempuserGivenBytes.substr(2); // it will start from 2 to end so if 0x34 = 34 ok 
		///it also take index 2 
		std::cout << PINK<< subString << " ";
		
		

	}

	std::cout << '\n';

}

int main() {
	int userWantToUse{};
	std::cout
		<< CYAN
		<< "=============================================\n"
		<< "        Welcome to HexToBytes Converter\n"
		<< "=============================================\n"
		<< RESET

		<< GREEN
		<< "A fast and easy way to convert Hex ↔ Bytes\n"
		<< RESET

		<< CYAN
		<< "Tip: If You Skip Entering New Data, The Program Will Automatically Reuse The Previous Input To Make The Process Faster.\n"
		<< RESET
		<< YELLOW
		<< "Made by VoidMain"         "GitHub: https://github.com/CV16MAIN \n"
		<< RESET; 


	while (userWantToUse == 0 ) { 
		int usersellectorInput{};
		std::cout << "HexToBytes(1) Or BytesToHex(0)-";
		std::cin >> usersellectorInput;  // if you use this and the user press enter it will auto add \n in the buffer 
		//and if you use getline after that it can casue getline to that \n from the buffer . 
		if (usersellectorInput==1) {
			hextoBytes();
			std::cout << RESET;
		}else if (usersellectorInput==0) {
			
			bytesToHex();
			std::cout << RESET;
		}
		else {
			break; 

		}
		
		
	}

	
	return 0;
}