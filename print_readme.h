#include <iostream>
#include <string>
#include "print_readme.h"

std::string readme(std::ifstream &file_name) {
	std::string str;
	if (file_name.is_open()) {
		std::ostringstream ss;
		ss << file_name.rdbuf();
		str = ss.str();
		return str;
	}
	else {
		return "Error: File is not opened.";
	}
}