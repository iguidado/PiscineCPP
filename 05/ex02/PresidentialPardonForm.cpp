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
		Form::testExecute(executor);
		perfExec(this->getTarget());
}

void	PresidentialPardonForm::perfExec(std::string const &target) const
{
	std::cout << target << " was forgiven by the fabulous Zaphod Beeblebrox *_*" << std::endl;
}
