#include "PhoneBook.hpp"

Contact::Contact(void)
{
	this->firstname.clear();
	this->firstname.clear();
	this->lastname.clear();
	this->nickname.clear();
	this->darkest.clear();
	this->phonenum.clear();
	this->name.clear();
}

Contact::~Contact(void)
{
	return;
}

PhoneBook::PhoneBook(void){
	memset(&this->Lst, 0, sizeof(this->Lst));
}

PhoneBook::~PhoneBook(void){
	return;
}

void	PhoneBook::AddContact(void)
{
	int i;

	while (!this->contact[i])
		i++;
	this->Lst[safe_readline("firstname: ");
}

void	Contact::PrintInfoRow(void)
{
}

void	PhoneBook::LstContact(void)
{

}
