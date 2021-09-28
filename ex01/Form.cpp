#include "Form.hpp"


Form::Form(string name, int signgrade, int execgrade) : name(name), signGrade(signgrade), execGrade(execgrade), sign(false)
{
	if (signgrade > 150 || execgrade > 150)
		throw Form::GradeTooLowException();
	if (signgrade < 1 || execgrade < 1)
		throw Form::GradeTooHighException();
}

string const Form::getName() const
{
	return name;
}

bool Form::getSign() const
{
	return sign;
}

int const Form::getSignGrade() const
{
	return signGrade;
}

int const Form::getExecGrade() const
{
	return execGrade;
}

void Form::beSigned(const Bureaucrat& src)
{
	if (signGrade < src.getGrade())
		throw Form::GradeTooLowException();
	else
		sign = true;
}

Form& Form::operator=(const Form &src)
{
	if (this == &src)
		return *this;
	else
		sign = src.getSign();
	return *this;
}

Form::Form(const Form &src) : name(src.getName()), signGrade(src.getSignGrade()), execGrade(src.getExecGrade())
{
	*this = src;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream &out, Form const &src)
{
	out << "Form: \"" << src.getName() << "\" Sign: " << src.getSign() << " signGrade: ";
	out << src.getSignGrade() << " execGrade: " << src.getExecGrade();
	return out;
}
