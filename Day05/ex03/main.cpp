#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	noob;
	Form	*newForm;
	Bureaucrat boss("Boss", 1);

	try
	{
	newForm = noob.makeForm("Shrubbery creation", "garden");
	newForm->beSigned(boss);
	newForm->execute(boss);
	delete newForm;
	newForm = noob.makeForm("Bad Form", "garden");
	delete newForm;
	}
	catch(std::exception & e)
	{
		std::cout << "hello";
	}
	return (0);
}
