#ifndef CPP_MODULE04_FORM_HPP
#define CPP_MODULE04_FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
private:
	string const	name;
	bool			sign;
	int const		signGrade;
	int const		execGrade;
	Form();
public:
class GradeTooHighException : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
class GradeTooLowException : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
	Form(string name, int signgrade, int execgrade);
	~Form() {};
	string const getName() const;
	bool 		getSign() const;
	int const	getSignGrade() const;
	int const	getExecGrade() const;
	void		beSigned(Bureaucrat const &src);
};

std::ostream& operator<<(std::ostream &out, Form const &src);


#endif //CPP_MODULE04_FORM_HPP
