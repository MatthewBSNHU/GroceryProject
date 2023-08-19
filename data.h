#pragma once
#include <map>
#include <string>
#include <iostream>
#include <fstream>
class Data
{
//Created public functions, based on prompts required:
public: 
	void ReadData(std::string value);
	void CreateData(std::string create); 
	void LookUp();
	void PrintItems();
	void Histogram(); 
private:
	//Created map: allows storage of information given on file 
	std::map<std::string, int> groceries;
};
