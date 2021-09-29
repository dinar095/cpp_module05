#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const string &target) : Form(target, 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), 72,45)
{
	*this = src;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return *this;
	target = src.target;
	return *this;
}



void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException(); // Check bureaucrat
	else if (!getSign())
		throw Form::notSigned();
	else
	{
		std::srand(std::time(0));
		for (int i = 5; i > 0; i--)
		{
			if (i % 2)
				cout << "drr.. ";
			else
				cout << "br br br .. ";
		}
		cout << endl;
		if (rand() % 2)
			cout << target << " has been robotomized successfully" << endl;
		else
			cout << "The robotomize of " << target << " failed" << endl;
	}
}