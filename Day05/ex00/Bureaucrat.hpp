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
		void	GradeTooHighException(void);
		void	GradeTooLowException(void);
		bool		setGrade(short	grade);
		std::string	getName(void) const;
		short		getGrade(void) const;
		void		incrGrade(void);
		void		decreGrade(void);
};

std::ostream	operator<<(std::ostream	os, Bureaucrat &src);
