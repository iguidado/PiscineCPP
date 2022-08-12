#include <string>

class test
{
	private:
		char	*hello;
		int	lol;
		std::string world;
	public:
		int	getLol(void);
		test(void);
		~test(void);
};

test::test(void)
{
}

test::~test(void)
{
}

int	test::getLol(void)
{
	return (lol);
}

int	main(void)
{
	test	test1;

	return (0);
}
