#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Form			form("lol", 130, 1);
	Bureaucrat		boss("Boss", 1);
	Bureaucrat		newbie("Noob", 150);
	
	
	form.beSigned(newbie);
	std::cout << form.getSigned();
	std::cout << "*****************************" << std::endl;
	std::cout << form;
	form.beSigned(boss);
	std::cout << form.getSigned();
	std::cout << "*****************************" << std::endl;
	std::cout << form;
	return (0);
}
