#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const string &target) : Form(target, 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), 25,5)
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
		const PresidentialPardonForm &src)
{
	if (this == &src)
		return *this;
	target = src.target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
	else if (!getSign())
		throw Form::notSigned();
	else
		cout << target << " has been pardoned by Zafod Beeblebrox" << endl;
}

