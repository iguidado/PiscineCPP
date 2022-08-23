#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon", "Traitor",  25, 5)
{
	std::cout << "Created a PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon", target, 25, 5)
{
	std::cout << "Created a PresidentialPardonForm with target: " << this->getTarget() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destroyed a PresidentialPardonForm" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::testExecute(executor);
		perfExec(this->getTarget());
	}
	catch (std::exception & e)
	{
		std::cout << "Can't execute Form because: " << e.what() << std::endl;
	}
}

void	PresidentialPardonForm::perfExec(std::string const &target) const
{
	std::cout << target << " Was forgiven by the fabulout Zaphod Beeblebrox *_*" << std::endl;
}
