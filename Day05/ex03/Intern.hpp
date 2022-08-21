#pragma once
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	public:
		Intern(void);
		~Intern(void);
		Form	*makeForm(std::string const &name, std::string const &target);
};
