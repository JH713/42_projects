#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("ERROR");
	std::cout<<std::endl;
	harl.complain("DEBUG");
	std::cout<<std::endl;
	harl.complain("WARNING");
	std::cout<<std::endl;
	harl.complain("INFO");
}