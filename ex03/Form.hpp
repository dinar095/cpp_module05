#ifndef CPP_MODULE04_FORM_HPP
#define CPP_MODULE04_FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

class Form
{
public:
	Form(string name, int signgrade, int execgrade);
	virtual ~Form() {};

	Form& operator=(const Form& src);
	Form(const Form& src);
	string const getName() const;
	bool 		getSign() const;
	int const	getSignGrade() const;
	int const	getExecGrade() const;
	void		beSigned(const Bureaucrat &src);
	virtual void execute(Bureaucrat const & executor) const = 0;

class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
class notSigned : public std::exception
		{
	virtual const char* what() const throw();
		};

private:
	Form();
	string const	name;
	bool			sign;
	int const		signGrade;
	int const		execGrade;

};

std::ostream& operator<<(std::ostream &out, Form const &src);


#endif //CPP_MODULE04_FORM_HPP
