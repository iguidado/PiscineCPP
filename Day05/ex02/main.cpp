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

	std::cout << "----Testing not signed exception-----" << std::endl;
	try
	{
		boss.executeForm(garden);
	}
	catch (std::exception &e)
	{
		std::cout << "Boss can't execute Form because " << e.what() << std::endl;
	}
	try
	{
		boss.executeForm(loser);
	}
	catch (std::exception &e)
	{
		std::cout << "Boss can't execute Form because " << e.what() << std::endl;
	}
	try
	{
		boss.executeForm(evaluator);
	}
	catch (std::exception &e)
	{
		std::cout << "Boss can't execute Form because " << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl << std::endl;

	std::cout << "--------Signing Forms--------" << std::endl;
	boss.signForm(garden);
	boss.signForm(loser);
	boss.signForm(evaluator);
	std::cout << "-----------------------------" << std::endl << std::endl;

	std::cout << "---Testing grade to low exception for execution---" << std::endl;
	try
	{
		newbie.executeForm(garden);
	}
	catch (std::exception &e)
	{
		std::cout << "Newbie can't execute Form because " << e.what() << std::endl;
	}
	try
	{
		newbie.executeForm(loser);
	}
	catch (std::exception &e)
	{
		std::cout << "Newbie can't execute Form because " << e.what() << std::endl;
	}
	try
	{
		newbie.executeForm(evaluator);
	}
	catch (std::exception &e)
	{
		std::cout << "Newbie can't execute Form because " << e.what() << std::endl;
	}
	std::cout << "-------------------------------------------------" << std::endl << std::endl;

	std::cout << "---Executing Forms ---" << std::endl;
	boss.executeForm(garden);
	boss.executeForm(loser);
	boss.executeForm(evaluator);
	std::cout << "-------------------------------------------------" << std::endl << std::endl;
	return (0);
}
