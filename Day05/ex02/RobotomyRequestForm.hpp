#pragma once
#include "Form.hpp"
#include <fstream>
#include <iostream>
#include "Bureaucrat.hpp"
#include <cstdlib>

class	RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		virtual	void	execute(Bureaucrat const & executor) const;
		void		perfExec(std::string const &target) const;
};
