#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "LET'S TRY SOME INITIALIZATIONS" << std::endl;

	// Correct initialization

	try
	{
		Bureaucrat b1("Mike", 150);
		std::cout << b1 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Incorrect initialization

	try
	{
		Bureaucrat b2("Stuart", 0);
		std::cout << b2 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("Bob", 160);
		std::cout << b3 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "NOW LET'S WORK WITH SOME BUREAUCRATS" << std::endl;
	Bureaucrat b("Bob", 150);
	std::cout << b << std::endl;
	std::cout << "Trying to decrease his grade: ";
	try
	{
		b.decrGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat c("Charlotte", 1);
	std::cout << c << std::endl;
	std::cout << "Trying to increase her grade: ";
	try
	{
		c.incrGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat d("Imogen", 34);
	std::cout << d << std::endl;
	try
	{
		d.incrGrade();
		std::cout << d.getName() << "'s grade is now " << d.getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Forms

	std::cout << std::endl << "NOW LET'S WORK WITH FORMS" << std::endl;
	Form f1( "Boring form", 10, 20);
	std::cout << f1 << std::endl;
	try
	{
		Form f2("Boring form", -1, 20);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "LET'S TRY TO MAKE A BUREAUCRAT SIGN A FORM" << std::endl;
	Bureaucrat bur("Rick", 5);
	std::cout << std::endl << "VALID FORM" << std::endl;
	f1.beSigned(bur);
	bur.signForm(f1);
	std::cout << f1 << std::endl;

	std::cout << std::endl << "INVALID FORM" << std::endl;
	Form f2("Morty's form", 4, 20);
	std::cout << f2 << std::endl;
	bur.signForm(f2);
	std::cout << f2 << std::endl;

	std::cout << std::endl << "FINALLY LET'S TRY THE COPY CONSTRUCTOR" << std::endl;
	Form f3 = f1;
	std::cout << f3 << std::endl;
	return (0);
}
