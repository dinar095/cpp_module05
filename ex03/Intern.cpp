#include "Intern.hpp"

Form* Intern::makeForm(string form, const string& target)
{
	int i = 0;
	string forms[3] = {"robotomy request",
					   "presidential pardon",
					   "shrubbery creation"};

	cout << "Intern creates " << target << endl;
	while(form != forms[i] && i < 3)
		i++;

	switch (i)
	{
		case 0: return new RobotomyRequestForm(target);
		case 1: return new PresidentialPardonForm(target);
		case 2: return new ShrubberyCreationForm(target);
		case 3: Intern::InternException();
	}
}



Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}


const char *Intern::InternException::what() const throw()
{
	return ("Unknown form");
}
