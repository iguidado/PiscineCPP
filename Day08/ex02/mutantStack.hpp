#pragma once
#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
	private:
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;
		MutantStack(void): std::stack<T>(){ std::cout << "Default Constructor called" << std::endl; };
		MutantStack(MutantStack	&src): std::stack<T>(src){std::cout << "Copy Constructor called" << std::endl; };

		~MutantStack(void) { std::cout << "Default Destructor called" << std::endl; };

		MutantStack	&operator=(MutantStack	&rhs) { *this =  rhs; };
		iterator	begin(void) { return std::stack<T>::c.begin(); };
		iterator	end(void) { return std::stack<T>::c.end(); };
};
