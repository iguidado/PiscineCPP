#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*newForm;
	int	form_id = -1;

	for (int i = 0; i < 3; i++)
	{
		if (name == form[i])
			form_id = i;
	}
	if (form_id == -1)
	{
		std::cout << "There is no form named " << name << " Intern panic !"<< std::endl;
		return (NULL);
	}
	switch (form_id) {
		case 0:
			newForm = new ShrubberyCreationForm(target);
			break;
		case 1:
			newForm = new RobotomyRequestForm(target);
			break;
		case 2:
			newForm = new PresidentialPardonForm(target);
			break;
	}
	return newForm;
}
