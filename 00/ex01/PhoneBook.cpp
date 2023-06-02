#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->firstname.clear();
	this->lastname.clear();
	this->nickname.clear();
	this->darkest.clear();
	this->phonenum.clear();
}

Contact::~Contact(void)
{
	return;
}

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	return;
}

const std::string&	Contact::GetFirstname(void) const
{
	return (this->firstname);
}

void	Contact::CpyContact(Contact const & contact)
{
	this->firstname = contact.firstname;
	this->lastname = contact.lastname;
	this->nickname = contact.nickname;
	this->darkest = contact.darkest;
	this->phonenum = contact.phonenum;
}

void	PhoneBook::AddContact(void)
{
	int	i;

	i = 0;
	while (i < 7 && contacts[i].GetFirstname() != "")
		i++;
	if (contacts[i].GetFirstname() != "")
	{
		for (int j = 0; j < 7; j++)
			contacts[j].CpyContact(contacts[j + 1]);
	}
	contacts[i].AddContact();
}

void	Contact::AddContact(void)
{
	this->firstname = safe_readline("firstname: ");
	this->lastname = safe_readline("lastname: ");
	this->nickname = safe_readline("nickname: ");
	this->darkest = safe_readline("darkest: ");
	this->phonenum = safe_readline("phonenum: ");
}

void	Contact::PrintInfoRow(void) const
{
	std::cout \
	<< std::setw(10) << (this->firstname.size() >= 10 ? this->firstname.substr(0, 9) + "." :this ->firstname) << "|" \
	<< std::setw(10) << (this->lastname.size() >= 10 ? this->lastname.substr(0, 9) + "." :this ->lastname) << "|" \
	<< std::setw(10) << (this->nickname.size() >= 10 ? this->nickname.substr(0, 9) + "." :this ->nickname) << "|" \
	<< std::endl;

}

void	Contact::PrintInfo(void) const
{
	std::cout <<  "firstname: " << this->firstname << std::endl;
	std::cout <<  "lastname: " << this->lastname << std::endl;
	std::cout <<  "nickname: " << this->nickname << std::endl;
	std::cout <<  "darkest: " << this->darkest << std::endl;
	std::cout <<  "phonenum: " << this->phonenum << std::endl;
}

void	PhoneBook::LstContact(void) const
{
	int		j = -1;
	std::string	input;

	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].PrintInfoRow();
	}
	input = safe_readline("Which contact do you want to have info on ? : " );
	std::sscanf(input.c_str(), "%d", &j);
	while (j < 0 || j > 7)
	{
		input = safe_readline("I did not understand pls enter a digit between 0 and 7 included : ");
		std::sscanf(input.c_str(), "%d", &j);
	}
	this->contacts[j].PrintInfo();
}
