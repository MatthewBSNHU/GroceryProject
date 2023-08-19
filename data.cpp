// Created cpp file with the name of my header file, to allow program to be executed
#include "data.h"
void Data::ReadData(std::string value) {
	std::ifstream datafile;
	std::string Items; 
	datafile.open(value);
	if (!datafile.is_open()) {
		std::cout << "File could not be opened." << std::endl;
	
	} 
	else {
		//Reads string in the data file
		datafile >> Items;
		while (!datafile.fail()) {
			//while statement will read text file & populate map
			if (groceries.find(Items) == groceries.end()) {
				groceries[Items] = 1;
			}//Everytime finds Item (as a key), adds one
			else {
				groceries[Items] += 1;
			}
			datafile >> Items;
		}
	}
}
void Data::CreateData(std::string create) {
	std::ofstream outFs;
	//Will open file, if it can't, it will create file
	outFs.open(create);
	if (!outFs.is_open()) {
		std::cout << "Could not open file" << std::endl;
	}
	else {
		for (auto&& [key, value] : groceries) {
			outFs << key << " " << value << std::endl;
		}
	}

}
void Data::LookUp() {
	//Create string that will allow user to find item 
	std::string searchitem;
	//asks user for item and displays
	std::cout << "Please input item" << std::endl;
	std::cin >> searchitem;
	//Prompt will search for item 
	for (auto&& [key, value] : groceries) {
		if (key == searchitem) {
			std::cout << key << " " << value << std::endl;
			return;
		}
	}
	std::cout << "Error, item could not be found" << std::endl;
}
//Creating statement that will return Items
void Data::PrintItems() {
	for (auto&& [key, value] : groceries) {
			std::cout << key << " " << value << std::endl;
		}
}
//Prints Items in non-numeric form
void Data::Histogram() {
	for (auto&& [key, value] : groceries) {
		std::cout << key << " " << std::string(value, '*') << std::endl;
	}
}
