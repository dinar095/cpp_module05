#ifndef CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(string const & target);
	~ShrubberyCreationForm() {};
	void execute(const Bureaucrat & executor) const;
private:
	string target;
};


#endif //CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
