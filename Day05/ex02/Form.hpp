#pragma once
#include "Bureaucrat.hpp"
#include <string>

class	Bureaucrat;

class	Form
{
	private:
		std::string	_target;
		bool		_isSigned;
		short		_toSign;
		short		_toExec;
	public:
		Form(void);
		Form(std::string target, short toSign, short toExec);
		~Form(void);

		class	AlreadySigned: public std::exception { const char *what(void) const throw(); };
		class	NotSignedException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooHighException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooLowException: public std::exception { const char *what(void) const throw(); };

		void	beSigned(Bureaucrat & signatory);

		bool		testExecute(Bureaucrat const & executor) const;
		virtual	void	execute(Bureaucrat const & executor) const = 0;


		bool	setGrade(short &toSet, short grade);
		void	setToSign(short grade);
		void	setToExec(short grade);
		void	setIsSigned(bool status);


		std::string	const &getTarget(void) const;
		short		const &getToSign(void) const;
		short		const &getToExec(void) const;
		bool		const &getSigned(void) const;
};
