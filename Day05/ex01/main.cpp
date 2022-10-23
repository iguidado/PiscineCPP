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
		std::cout << "Can't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	std::cout << "*****************************" << std::endl;
	std::cout << form;
//	form.beSigned(boss);
	newbie.signForm(form);
	boss.signForm(form);
	std::cout << "*****************************" << std::endl << std::endl;
	std::cout << form;
	return (0);
}
