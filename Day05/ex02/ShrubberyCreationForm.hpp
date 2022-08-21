#pragma once
#include "Form.hpp"
#include <fstream>
#include <iostream>
#include "Bureaucrat.hpp"

class	ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		virtual	void	execute(Bureaucrat const & executor) const;
		void		perfExec(std::string const &target) const;
};
