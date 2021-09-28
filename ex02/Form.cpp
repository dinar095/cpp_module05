#include "Form.hpp"


Form::Form(string name, int signgrade, int execgrade) : name(name), signGrade(signgrade), execGrade(execgrade), sign(false)
{

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

void Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	else
		sign = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high to sign this Form");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low to sign this Form");
}

std::ostream& operator<<(std::ostream &out, Form const &src)
{
	out << "Form: " << src.getName() << " Sign: " << src.getSign() << " signGrade: ";
	out << src.getSignGrade() << " execGrade: " << src.getExecGrade();
	return out;
}
