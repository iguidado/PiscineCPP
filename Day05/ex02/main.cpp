#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	ShrubberyCreationForm garden("Garden");
	RobotomyRequestForm	loser("Zaphod");
	PresidentialPardonForm	evaluator("Evaluator");
	Bureaucrat		boss("Boss", 1);
	Bureaucrat		newbie("Noob", 150);
	
	std::cout << "Testing not signed exception " << std::endl;
	boss.executeForm(garden);
	boss.executeForm(loser);
	boss.executeForm(evaluator);
	std::cout << "-----------------------------" << std::endl << std::endl;

	std::cout << "--------Signing Forms--------" << std::endl;
	boss.signForm(garden);
	boss.signForm(loser);
	boss.signForm(evaluator);
	std::cout << "-----------------------------" << std::endl << std::endl;

	std::cout << "---Testing grade to low exception for execution---" << std::endl;
	newbie.executeForm(garden);
	newbie.executeForm(loser);
	newbie.executeForm(evaluator);
	std::cout << "-------------------------------------------------" << std::endl << std::endl;

	std::cout << "---Executing Forms ---" << std::endl;
	boss.executeForm(garden);
	boss.executeForm(loser);
	boss.executeForm(evaluator);
	std::cout << "-------------------------------------------------" << std::endl << std::endl;
	return (0);
}
