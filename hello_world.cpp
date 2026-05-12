#include <iostream>
#include <string>

int main()
{
std::string name;

// Fixed bad code style
std::cout << "Please enter name: ";
std::cin >> name;

std::cout << "Hello world from " << name << std::endl;
}
