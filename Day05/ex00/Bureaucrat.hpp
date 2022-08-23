#include <string>
#include <iostream>

class	Bureaucrat
{
	private:
		std::string	_name;
		short		_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, short grade);
		~Bureaucrat(void);
		class	GradeTooHighException: public std::exception { const char *what(void) const throw(); };
		class	GradeTooLowException: public std::exception { const char *what(void) const throw(); };
		bool		setGrade(short	grade);
		std::string	getName(void) const;
		short		getGrade(void) const;
		void		incrGrade(void);
		void		decreGrade(void);
};

std::ostream	&operator<<(std::ostream	&os, Bureaucrat &src);
