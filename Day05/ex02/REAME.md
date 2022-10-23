# Check-list

- [x] Form not instanciable (abstract)

- [x] ShrubberyCreationForm Class
 - [x] to Sign 145
 - [x] to exec 137
 - [x]  execution create a \<target\>\_shrubbery in current dir
>		writing trees inside

- [x] RobotomyRequestForm
 - [x] Print message "Target got robotomized" half of the time
>		else print that operation failed
 - [x] to Sign 72
 - [x] to exec 45

- [x] PresidentialPardonForm
 - [x] Print that \<target\> got pardon from Zaphod Beeblebrox
 - [x] to Sign 25
 - [x] to Exec 5

- [x] each one should have a constructor taking target as parameter
- [x] attribute are all private and in base class


- [x] execute function to base class
>	(beware prototype) `execute(Bureaucrat const & executor) const`
	- [x] Throw an exception if form is not signed or executor grade is lacking

- [x] executeForm function added to Bureacrat, it is suppose to execute form
>		(Beware prototype) `executeForm(Form const & form)`
	- [x] if it fails print an error message (you should catch error thrown above)






