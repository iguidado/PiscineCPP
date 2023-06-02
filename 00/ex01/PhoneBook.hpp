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
	public:
		Contact(void);
		~Contact(void);
		void		CpyContact(Contact const & contact);
		const std::string&	GetFirstname(void) const;
		void		AddContact(void);
		void		PrintInfoRow(void) const;
		void		PrintInfo(void) const;
};

class	PhoneBook{
	private:
		Contact	contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		void	LstContact(void) const;
};

std::string	safe_readline(std::string prompt);
std::string	safe_input(void);
