#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;

	std::cout << std::endl << "pushin 5 on stack" << std::endl;
	mstack.push(5);
		std::cout << "pushin 17 on stack" << std::endl;

	mstack.push(17);

	std::cout << "top stack = " << mstack.top() << std::endl;	
	std::cout << "poping stack" << std::endl;

	mstack.pop();

	std::cout << "stack size = " << mstack.size() << std::endl << std::endl;
	std::cout << "pushin 3 on stack" << std::endl;
	mstack.push(3);
	std::cout << "pushin 5 on stack" << std::endl;
	mstack.push(5);
	std::cout << "stack size = " << mstack.size() << std::endl << std::endl;

	std::cout << "pushin 737 on stack" << std::endl;
	mstack.push(737);

	std::cout << "pushin 0 on stack" << std::endl;
	mstack.push(0);
	std::cout << "stack size = " << mstack.size() << std::endl << std::endl;


	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "-----print stack-----" << std::endl << std::endl;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	std::cout << "-----print stack with reverse it-----" << std::endl << std::endl;

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	++cit;
	--cit;
	std::cout << "-----print stack with const it-----" << std::endl << std::endl;

	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl;
	return 0;
}
