#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "--------------Constructor---------------" << std::endl;
	Bureaucrat	boss("Boss", 1);
	Bureaucrat	noob("Noob", 150);
	Bureaucrat	norm("Normie", 70);
	Bureaucrat	def(boss);


	std::cout << def << std::endl;
	std::cout << "--------------Getter---------------" << std::endl;
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Mod Function---------------" << std::endl;
	std::cout << norm << std::endl;
	std::cout << "upgrading Normie" << std::endl;
	norm.incrGrade();
	std::cout << norm << std::endl;
	std::cout << "downgrading Normie " << std::endl;
	norm.decreGrade();
	std::cout << norm << std::endl;
	std::cout << "--------------Exception---------------" << std::endl;
	try
	{
		Bureaucrat	high("High", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat creation failed because " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	low("Low", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat creation failed because " << e.what() << std::endl;
	}
	try
	{
		boss.incrGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat incrementation failed because " << e.what() << std::endl;
	}
	try
	{
		noob.decreGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat incrementation failed because " << e.what() << std::endl;
	}
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Setter---------------" << std::endl;
	boss.setGrade(3);
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Destructor---------------" << std::endl;
	return (0);
}
