#pragma once
#include <stack>
#include <iostream>


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;


		MutantStack(void): std::stack<T>(){ std::cout << "Default Constructor called" << std::endl; };
		MutantStack(MutantStack	&src): std::stack<T>(src){std::cout << "Copy Constructor called" << std::endl; };

		~MutantStack(void) { std::cout << "Default Destructor called" << std::endl; };

		MutantStack	&operator=(MutantStack	&rhs) { *this =  rhs; };
		iterator	begin(void) { return std::stack<T>::c.begin(); };
		iterator	end(void) { return std::stack<T>::c.end(); };

		reverse_iterator	rbegin(void) { return std::stack<T>::c.rbegin(); };
		reverse_iterator	rend(void) { return std::stack<T>::c.rend(); };

		const_iterator	cbegin(void) { return std::stack<T>::c.begin(); };
		const_iterator	cend(void) { return std::stack<T>::c.end(); };
};
