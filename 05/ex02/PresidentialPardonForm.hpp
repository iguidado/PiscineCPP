#pragma once
#include "Form.hpp"
#include <fstream>
#include <iostream>
#include "Bureaucrat.hpp"

class	PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		virtual	void	execute(Bureaucrat const & executor) const;
		void		perfExec(std::string const &target) const;
};
