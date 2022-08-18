#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Anderson"), _grade(150)
{
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, short grade): _name(name)
{
	this->setGrade(grade);
	std::cout << "Constructor called with " +  _name << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

short		Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void		Bureaucrat::incrGrade(void)
{
	if (_grade > 1)
		this->_grade--;
}

void		Bureaucrat::decreGrade(void)
{
		if (_grade < 150)
			this->_grade++;
}

bool	Bureaucrat::setGrade(short grade)
{
	try{

	if (grade < 1 || grade > 150)
		_grade = grade;
	else
		throw _grade;
	}
	catch	(int wrong_grade)
	{
		if (wrong_grade < 1)
			this->GradeTooHighException();
		else
			this->GradeTooLowException();
		return (1);
	}
	return (0);
}

void	Bureaucrat::GradeTooHighException(void)
{
	std::cout << "Trying to set a grade to high on " + _name << std::endl;
}

void	Bureaucrat::GradeTooLowException(void)
{
	std::cout << "Trying to set a grade to low on " + _name << std::endl;
}
