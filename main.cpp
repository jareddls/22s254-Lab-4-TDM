#include <iostream>
#include <fstream>
#include "print_readme.h"

int main() {
	//std::string file_name = "../README.md";
	std::string file_name = "README.md";
	std::string output;
	std::ifstream f(file_name);
	output = readme(f);
	std::cout << output;

}