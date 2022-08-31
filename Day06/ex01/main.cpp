#include "Data.hpp"

typedef unsigned long uintptr_t;

uintptr_t serialize(Data *ptr)
{
	uintptr_t addr;

	addr = reinterpret_cast<uintptr_t>(ptr);
	return (addr);
}

Data* deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main(void)
{
	Data		test;
	Data		*ptr = &test;
	uintptr_t	raw = serialize(ptr);
	Data		*deserialized = deserialize(raw);

	std::cout << "------original ptr----------" << std::endl;
	ptr->PrintClass();
	std::cout << "------deserialized ptr----------" << std::endl;
	deserialized->PrintClass();
	if (deserialized == ptr)
		std::cout << "Pointer are identical" << std::endl;
	return (0);
}
