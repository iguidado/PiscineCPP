#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation", "Garden",  145, 137)
{
	std::cout << "Created a ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", target, 145, 137)
{
	std::cout << "Created a ShrubberyCreationForm with target: " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destroyed a ShrubberyCreationForm" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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

void	ShrubberyCreationForm::perfExec(std::string const &target) const
{
	std::ofstream  os;
	std::string	outfile = target + "_shrubbery";

	os.open(outfile.c_str(), std::ios::out | std::ios::trunc);
	os << "        _-_ " << std::endl;
	os << "     /~~   ~~\\ " << std::endl;
	os << "  /~~         ~~\\ " << std::endl;
	os << " {               } " << std::endl;
	os << "  \\  _-     -_  / " << std::endl;
	os << "    ~  \\\\ //  ~ " << std::endl;
	os << " _- -   | | _- _ " << std::endl;
	os << "   _ -  | |   -_ " << std::endl;
	os << "       // \\\\ " << std::endl;
	os.close();
}
