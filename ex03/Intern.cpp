#include "Intern.hpp"

Form* Intern::makeForm(string form, string name)
{
	string forms[3] = {"robotomy request", "presidental pardon forms", "sruberry creation"};

	Form *f[3] = {&ShrubberyCreationForm(name), };
	f[0] = new ShrubberyCreationForm(name);


}