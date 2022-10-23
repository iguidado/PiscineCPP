#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void): _name("Default"), _isSigned(false), _toSign(1), _toExec(1)
{
	std::cout << "Default Constructor called" << std::endl;
}

Form::Form(std::string name, short toSign, short toExec): _name(name), _isSigned(false)
{
	this->setToSign(toSign);
	this->setToExec(toExec);
	std::cout << "Created a form needing " <<  _toSign << " to Sign and " << _toExec << " to Exec." << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called on " << this->_name << " form." << std::endl;
}

void		Form::setToSign(short grade)
{
	try{
		setGrade(this->_toSign, grade);
	}
	catch	(std::exception	& e)
	{
		std::cout << "Could not set toSign to " << grade << " because " << e.what() << std::endl;
		_toSign = 1;
	}
}

void		Form::setToExec(short grade)
{
	try{
		setGrade(this->_toExec, grade);
	}
	catch	(std::exception	& e)
	{
		std::cout << "Could not set toExec to " << grade << " because " << e.what() << std::endl;
		_toExec = 1;
	}
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

std::string	const &Form::getName(void) const
{
	return (_name);
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

void	Form::beSigned(Bureaucrat & signatory)
{
		if (_isSigned == true)
			throw Form::AlreadySigned();
		if (signatory.getGrade() > this->_toSign)
			throw Form::GradeTooLowException();
		_isSigned = true;
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

std::ostream & operator<<(std::ostream &os, Form &form)
{
	os  << "----- Form name :" << form.getName() +"-------"<< std::endl;
	os << "Form is ";
	if (!form.getSigned())
		os << "Not ";
	os << "Signed." << std::endl;
	os << "Rank require to sign :" << form.getToSign() << std::endl;
	os << "Rank require to execute :" << form.getToExec() << std::endl;
	os << "------------------------------------" << std::endl;
	return (os);
}
