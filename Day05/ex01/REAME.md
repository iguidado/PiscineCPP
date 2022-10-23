# Check-list

- [x] Form class
 - [x] Name const
 - [x] bool indicating if Form is signed
 - [x] Grade to sign and grade to execute
	 - [x] Throw exception if grade set are incorrect
 - [x] getter for all attribute
 - [x] "<<" operator overload printing all attribute

- [x] Ajoutez également au Form une fonction membre beSigned() prenant un Bureaucrat
en paramètre. Il doit changer le status du formulaire en signé si l’échelon du Bureaucrat
est suffisant (supérieur ou égal à l’échelon requis). Pour rappel, l’échelon 1 est plus élevé
que l’échelon 2.

- [x] Si l’échelon est insuffisant, jetez une Form::GradeTooLowException.

- [x] Pour finir, ajoutez au Bureaucrat une fonction membre signForm(). Si le formulaire
est signé, elle affichera quelque chose comme :
<bureaucrat> signed <form>
Ou dans le cas contraire :

- [x] <bureaucrat> couldn’t sign <form> because <reason>.
Implémentez et rendez vos propres tests afin de démontrer que tout marche comme
attendu.
