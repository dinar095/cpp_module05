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

	if (grade > 1)
		grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrGrade()
{
	if ((grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;

}

//Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
//{
//	if (this == &src)
//		return *this;
//	if ()
//}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName();
	out << ", bureaucrat grade ";
	out << src.getGrade();
	return out;
}

char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}


