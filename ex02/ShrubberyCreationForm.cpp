#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) : Form(target, 145, 137), target(target)
{}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getExecGrade()) //check Bureaucrat
		throw Bureaucrat::GradeTooLowException();
//	else if (!getSign()) //check Form
//		throw Form::notSigned();
	else
	{
		string tree;
		tree = "               ,@@@@@@@,\n"
			   "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			   "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			   "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			   "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			   "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			   "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			   "       |o|        | |         | |\n"
			   "       |.|        | |         | |\n"
			   "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

		std::ofstream file(target + "_shrubbery");
		file << tree;
		file.close();
	}
}
