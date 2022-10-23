#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void): _name("Default"), _target("default"), _isSigned(false), _toSign(0), _toExec(150)
{
	std::cout << "Default Constructor called" << std::endl;
}

Form::Form(std::string name, std::string target, short toSign, short toExec): _name(name), _target(target), _isSigned(false)
{
	this->setToSign(toSign);
	this->setToExec(toExec);
	std::cout << "Created a form needing " <<  _toSign << " to Sign and " << _toExec << " to Exec." << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}

void		Form::setTarget(std::string const &target)
{
		this->_target = target;
}

void		Form::setToSign(short grade)
{
//	try{
		setGrade(this->_toSign, grade);
//	}
//	catch	(std::exception	& e)
//	{
//		std::cout << "Could not set toSign to" << grade << " because " << e.what() << std::endl;
//		_toSign = 1;
//	}
}

void		Form::setToExec(short grade)
{
//	try{
		setGrade(this->_toExec, grade);
//	}
//	catch	(std::exception	& e)
//	{
//		std::cout << "Could not set toExec to" << grade << " because " << e.what() << std::endl;
//		_toExec = 1;
//	}
}

short	const	&Form::getToSign(void) const
{
	return (_toSign);
}

short	const	&Form::getToExec(void) const
{
	return (_toExec);
}

bool	const	&Form::getSigned(void) const
{
	return (_isSigned);
}

std::string	const &Form::getTarget(void) const
{
	return (_target);
}

bool	Form::setGrade(short &toSet, short grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	else
		toSet = grade;
	return (0);
}

std::string const	&Form::getName(void) const
{
	return this->_name;
}

void	Form::beSigned(Bureaucrat & signatory)
{
//	try
//	{
		if (_isSigned == true)
			throw Form::AlreadySigned();
		if (signatory.getGrade() > this->_toSign)
			throw Form::GradeTooLowException();
		_isSigned = true;
		std::cout << signatory.getName() << " Signed form " << this->_name << std::endl;
//	}
//	catch (std::exception & e)
//	{
//	std::cout << signatory.getName() << " could't sign "  << this->getName() << " because " << e.what() << std::endl;
//	}
}

bool	Form::testExecute(Bureaucrat const & executor) const
{
	if (this->_isSigned == false)
		throw  Form::NotSignedException();
	if (executor.getGrade() > this->_toExec)
		throw Form::GradeTooLowException();
	return (true);
}

void	Form::setIsSigned(bool status)
{
	this->_isSigned = status;
}

const	char	*Form::AlreadySigned::what() const throw()
{
	return "Form is already signed !";
}

const	char	*Form::NotSignedException::what() const throw()
{
	return "Form is not signed !";
}

const	char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High.";
}

const	char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low.";
}
