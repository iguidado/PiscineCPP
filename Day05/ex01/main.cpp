#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Form			form("BuyCar", 130, 1);
	Form			wrong("tooLow", 160, 160);
	Form			wrong2("tooHigh", 0, 0);
	Bureaucrat		boss("Boss", 1);
	Bureaucrat		newbie("Noob", 150);
	

	std::cout << std::endl;
	try
	{
		form.beSigned(newbie);
	}
	catch (std::exception &e)
	{
		std::cout << "Newbie can't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << "*****************************" << std::endl;
	std::cout << form;
	try
	{
		newbie.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << "Newbie can't sign " << form.getName() << " because " << e.what() << std::endl;
	}

	try
	{
		boss.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << "Boss can't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	try
	{
		boss.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << "Boss can't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << "*****************************" << std::endl << std::endl;
	std::cout << form;
	return (0);
}
