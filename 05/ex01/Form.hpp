#pragma once
#include "Bureaucrat.hpp"
#include <string>

class	Bureaucrat;

class	Form
{
	private:
		std::string const _name;
		bool		_isSigned;
		short const	_toSign;
		short const 	_toExec;
	public:
		Form(void);
		Form(std::string name, short toSign, short toExec);
		~Form(void);

		class	AlreadySigned: public std::exception { const char *what(void) const throw(); };
		class	NotSignedException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooHighException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooLowException: public std::exception { const char *what(void) const throw(); };

		void	beSigned(Bureaucrat & signatory);

		std::string	const &getName(void) const;
		short		const &getToSign(void) const;
		short		const &getToExec(void) const;
		bool		const &getSigned(void) const;
};

std::ostream & operator<<(std::ostream &os, Form & form);
