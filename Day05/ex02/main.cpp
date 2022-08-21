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
	
	
	std::cout << std::endl << "------Presidential Pardon test------" << std::endl;
	evaluator.execute(boss);
	evaluator.beSigned(newbie);
	evaluator.beSigned(boss);
	evaluator.execute(boss);
	std::cout << std::endl << "------Robotomy test------" << std::endl;
	loser.execute(boss);
	loser.beSigned(newbie);
	loser.beSigned(boss);
	loser.execute(boss);
	std::cout << std::endl << "------Shrubbery creation test------" << std::endl;
	garden.setToSign(5);
	garden.beSigned(newbie);
	garden.beSigned(boss);
	garden.beSigned(boss);
	garden.execute(newbie);
	garden.execute(boss);
	return (0);
}
