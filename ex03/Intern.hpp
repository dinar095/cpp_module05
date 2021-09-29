#ifndef CPP_MODULE04_INTERN_HPP
#define CPP_MODULE04_INTERN_HPP
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;
using std::string;

class Intern
{
public:
	Intern() {};
	~Intern() {};
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
	Form* makeForm(string form, const string& target);
	class InternException : public std::exception
			{
				virtual const char* what() const throw();
			};
};


#endif //CPP_MODULE04_INTERN_HPP
