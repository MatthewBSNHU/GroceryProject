//Developed by: Matthew Berdecia
//Date: August 13th, 2023 
#include "data.h"
int main() {
	//Create strings that are assigned with values of files
	std::string namefile = "list.txt";
	std::string frequency = "frequency.dat";
	int menu;
	Data info;
	info.ReadData(namefile);
	info.CreateData(frequency);
	do {
	//Will prompt user to desired option, 4 in this case
		std::cout << "1: Input desired item" << std::endl;
		std::cout << "2: Print all items" << std::endl;
		std::cout << "3: Print items in histogram form" << std::endl;
		std::cout << "4: Exit the program" << std::endl;
		std::cin >> menu;
		//assigns each menu item (option)
		if (1 == menu) {
			info.LookUp();
		}
		else if (2 == menu) {
			info.PrintItems();
		}
		else if (3 == menu) {
			info.Histogram();
		}
		else if (4 == menu) {
			std::cout << " The program will now be closing " << std::endl;
		}
		else {
			std::cout << " Prompt is invalid " << std::endl; 
		}
	} while (menu != 4);
	return 0;
}