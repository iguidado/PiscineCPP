#pragma once
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	private:
		Form	*makePresidential(std::string const &target);
		Form	*makeRobotomy(std::string const &target);
		Form	*makeShrubbery(std::string const &target);
	public:
		Intern(void);
		~Intern(void);
		Form	*makeForm(std::string const &name, std::string const &target);
};
