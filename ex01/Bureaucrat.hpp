#ifndef CPP_MODULE04_BUREAUCRAT_HPP
#define CPP_MODULE04_BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"


using std::cout;
using std::endl;
using std::string;

class Form;

class Bureaucrat
{
public:
	Bureaucrat(string const name);
	Bureaucrat(string name, int grade);
	~Bureaucrat() {};
	const string getName() const;
	int getGrade() const;
	void incrGrade();
	void decrGrade();
	Bureaucrat& operator=(const Bureaucrat& src);
	Bureaucrat(const Bureaucrat& src);
	void signForm(const Form& src) const;
	class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
	class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
private:
	int grade;
	string const name;
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &src);

#endif //CPP_MODULE04_BUREAUCRAT_HPP
