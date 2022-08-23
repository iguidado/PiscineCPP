#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "--------------Constructor---------------" << std::endl;
	Bureaucrat	boss("Boss", 1);
	Bureaucrat	noob("Noob", 150);


	std::cout << "--------------Getter---------------" << std::endl;
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Mod Function---------------" << std::endl;
	std::cout << "--------------Exception---------------" << std::endl;
	Bureaucrat	high("High", 0);
	Bureaucrat	low("Low", 151);
	boss.incrGrade();
	noob.decreGrade();
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Setter---------------" << std::endl;
	boss.setGrade(3);
	std::cout << "Bureaucrate named " <<  boss.getName() << " with grade " << boss.getGrade() << std::endl;
	std::cout << "--------------Destructor---------------" << std::endl;
	return (0);
}
