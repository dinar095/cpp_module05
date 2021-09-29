#ifndef CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Form.hpp"



class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(string const & target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
	~ShrubberyCreationForm() {};
	virtual void execute(Bureaucrat const & executor) const;
private:
	string target;
};


#endif //CPP_MODULE04_SHRUBBERYCREATIONFORM_HPP
