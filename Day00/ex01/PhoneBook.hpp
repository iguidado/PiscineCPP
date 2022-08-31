#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

class Contact {
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest;
		std::string	phonenum;
		std::string	name;
	public:
		Contact(void);
		~Contact(void);
		void PrintInfoRow(void);
		void PrintInfo(void);
};

class	PhoneBook{
	private:
		Contact	contact[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		void	LstContact(void);
};
