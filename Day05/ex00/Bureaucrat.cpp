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
	std::cout << "Destructor called on " + _name  << std::endl;
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
	try
	{
	if (_grade > 1)
		this->_grade--;
	else
			throw Bureaucrat::GradeTooHighException();
	}
	catch	(std::exception & e)
	{
		std::cout << "Increment error :" << e.what() << std::endl;
	}
}

void		Bureaucrat::decreGrade(void)
{
	try {
		if (_grade < 150)
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch	(std::exception & e)
	{
		std::cout << "Decrement error :" << e.what() << std::endl;
	}
}

bool	Bureaucrat::setGrade(short grade)
{
	try{

	if (grade < 1)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade = grade;
	}
	catch	(std::exception	& e)
	{
			 std::cout << "Error with Bureaucrat " << getName() << ": " << e.what() << std::endl;
	}
	return (0);
}

const	char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Trying to set a grade too high on Bureaucrat";
}

const	char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Trying to set a grade too low on Bureaucreat";
}

std::ostream	&operator<<(std::ostream	&os, Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (os);
}

Bureaucrat::Bureaucrat(Bureaucrat &src): _name(src._name)
{
	std::cout << "Copy Constructor called with " + _name << std::endl;
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &rhs)
{
	std::cout << "Assigned attribute of " + rhs._name + " to " + this->_name<< std::endl;
	this->_grade = rhs._grade;
	return (*this);
}
