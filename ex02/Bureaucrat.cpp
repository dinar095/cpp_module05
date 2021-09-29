#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string const name) : name(name), grade(150)
{
}

Bureaucrat::Bureaucrat(string const name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

const string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrGrade()
{

	if ((grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrGrade()
{
	if ((grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return *this;
	grade = src.getGrade();
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.getName())
{
	*this = src;
}


std::ostream& operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName();
	out << ", bureaucrat grade ";
	out << src.getGrade();
	return out;
}

void Bureaucrat::signForm(const Form& src) const
{

	if (src.getSign())
		cout << name << " signs " << src.getName() << endl;
	else if (this->getGrade() > src.getSignGrade())
		cout << name << " cannot sign \"" << src.getName() << "\" because grade is too low" << endl;
}

void Bureaucrat::executeForm(const Form &form)
{
	if (!form.getSign())
		throw Form::notSigned();
	form.execute(*this);
	cout << name << " executes " << form.getName() << endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
