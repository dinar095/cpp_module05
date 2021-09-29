#ifndef CPP_MODULE04_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULE04_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(string const & target);
	~PresidentialPardonForm() {};
	PresidentialPardonForm(const PresidentialPardonForm& src);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
	virtual void execute(Bureaucrat const & executor) const;
private:
	string target;
};


#endif //CPP_MODULE04_PRESIDENTIALPARDONFORM_HPP
