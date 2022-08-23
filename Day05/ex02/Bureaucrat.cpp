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

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	}
	catch	(std::exception	& e)
	{
		 std::cout << e.what() << std::endl;
	}
	return (0);
}

void		Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << "Executed " <<std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << _name << "couldn't sign Form" << std::endl;
	}
}

const	char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Trying to set a grade to high on Bureaucrat";
}

const	char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Trying to set a grade to low on Bureaucreat";
}

void		Bureaucrat::signForm(Form & form)
{
		form.beSigned(*this);
}


std::ostream	&operator<<(std::ostream	&os, Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (os);
}
