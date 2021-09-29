#ifndef CPP_MODULE04_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULE04_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(string const & target);
	~RobotomyRequestForm() {};
	RobotomyRequestForm(const RobotomyRequestForm& src);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
	virtual void execute(Bureaucrat const & executor) const;
private:
	string target;
};


#endif //CPP_MODULE04_ROBOTOMYREQUESTFORM_HPP
