#include "header.hpp"

int main(void)
{
	ClapTrap saad("saad");
	ScavTrap karim("karim");

	saad.attack("karim");
	karim.attack("saad");
	karim.guardGate();
	saad.clapStatus();
	karim.clapStatus();

	return (0);
}