#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	noob;
	Form	*newForm;
	Bureaucrat boss("Boss", 1);

	newForm = noob.makeForm("shrubbery creation", "garden");
	newForm->beSigned(boss);
	newForm->execute(boss);
	delete newForm;
	std::cout << std::endl;

	newForm = noob.makeForm("robotomy request", "bender");
	newForm->beSigned(boss);
	newForm->execute(boss);
	delete newForm;
	std::cout << std::endl;

	newForm = noob.makeForm("presidential pardon", "bender");
	newForm->beSigned(boss);
	newForm->execute(boss);
	delete newForm;
	std::cout << std::endl;

	std::cout << "----Testing exception----" << std::endl;
	try 
	{
		Bureaucrat wrong("Wrong", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Error during bureaucrat creation because " << e.what() << std::endl;
	}

	Bureaucrat newcomer("Noob", 150);
	newForm = noob.makeForm("robotomy request", "bender");
	try 
	{
		newcomer.executeForm(*newForm);
	}
	catch (std::exception &e)
	{
		std::cout << "newcomer can't execute form because " << e.what() << std::endl;
	}
	try
	{
		newcomer.signForm(*newForm);
	}
	catch (std::exception &e)
	{
		std::cout << "newcomer can't sign form because " << e.what() << std::endl;
	}
	boss.signForm(*newForm);
	try 
	{
		newcomer.executeForm(*newForm);
	}
	catch (std::exception &e)
	{
		std::cout << "newcomer can't execute form because " << e.what() << std::endl;
	}
	delete newForm;
	std::cout << std::endl;

	try
	{
		newForm = noob.makeForm("Bad Form", "garden");
		if (newForm)
			delete newForm;
	}
	catch(std::exception & e)
	{
		std::cout << "Can't create form beceause " << e.what() << std::endl;
	}
	return (0);
}
