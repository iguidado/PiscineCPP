#pragma once
#include "Form.hpp"
#include <string>
#include <iostream>

class	Form;

class	Bureaucrat
{
	private:
		std::string	const _name;
		short		_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat &src);
		Bureaucrat(std::string name, short grade);
		~Bureaucrat(void);

		std::string	getName(void) const;
		short		getGrade(void) const;

		bool		setGrade(short	grade);
		void		incrGrade(void);
		void		decreGrade(void);

		void		signForm(Form &form);
		void		executeForm(Form const & form) const;

		class	GradeTooHighException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooLowException: public std::exception { const char *what(void) const throw(); };

		Bureaucrat &operator=(Bureaucrat &rhs);
};

std::ostream	operator<<(std::ostream	os, Bureaucrat &src);
