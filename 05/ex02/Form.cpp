#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void): _name("Default"), _target("default"), _isSigned(false), _toSign(1), _toExec(1)
{
	std::cout << "Default Constructor called" << std::endl;
}

Form::Form(std::string name, std::string target, short toSign, short toExec): _name(name), _target(target), _isSigned(false), _toSign(toSign), _toExec(toExec)
{
	if (toSign < 1 || toExec < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150 || toExec > 150)
		throw Form::GradeTooLowException();
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

std::string const	&Form::getName(void) const
{
	return this->_name;
}

void	Form::beSigned(Bureaucrat & signatory)
{
		if (_isSigned == true)
			throw Form::AlreadySigned();
		if (signatory.getGrade() > this->_toSign)
			throw Form::GradeTooLowException();
		_isSigned = true;
		std::cout << signatory.getName() << " Signed form " << this->_name << std::endl;
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
