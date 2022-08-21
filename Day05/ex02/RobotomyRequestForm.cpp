#include "RobotomyRequestForm.hpp"
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(): Form("Default", 72, 45)
{
	std::cout << "Created a RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45)
{
	std::cout << "Created a RobotomyRequestForm with target: " << this->getTarget() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destroyed a RobotomyRequestForm" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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

void	RobotomyRequestForm::perfExec(std::string const &target) const
{
	std::cout << "*Drill sound*" << std::endl;
	srand(time(0));
	int		result = rand() % 2;

	if (result)
	{
		std::cout << "Robotomy was a Success." << target << " is now a Robot." << std::endl;
	}
	else
	{
		std::cout << "Robotomy was a Failure." << target << " is dead." << std::endl;
	}
}
