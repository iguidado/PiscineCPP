#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern recruited !" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern fired !" << std::endl;
}

Form	*Intern::makeShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	static std::string form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	static Form *(Intern::* forms[])(std::string const &) = { &Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential };
	int	i = 0;
	
	while (i < 3)
	{
		if (name == form[i])
		{
			std::cout << "Intern creates " << name << " form" << std::endl;
			return ((this->*forms[i])(target));
		}
		i++;
	}
	std::cout << "There is no form named " << name << ", Intern panic !"<< std::endl;
	return (NULL);
}

//Form	*Intern::makeForm(std::string const &name, std::string const &target)
//{
//	std::string form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
//	Form	*newForm = NULL;
//	int	form_id = -1;
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (name == form[i])
//			form_id = i;
//	}
//	switch (form_id) {
//		case 0:
//			newForm = new ShrubberyCreationForm(target);
//			std::cout << "Inter creates " << name << " form" << std::endl;
//			break;
//		case 1:
//			newForm = new RobotomyRequestForm(target);
//			std::cout << "Inter creates " << name << " form" << std::endl;
//			break;
//		case 2:
//			newForm = new PresidentialPardonForm(target);
//			std::cout << "Inter creates " << name << " form" << std::endl;
//			break;
//		default:
//		std::cout << "There is no form named " << name << ", Intern panic !"<< std::endl;
//	}
//	return newForm;
//}
