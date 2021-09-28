#include "Bureaucrat.hpp"


int main()
{
	cout << "*** Valid initializations ***" << endl;
	try
	{
		Bureaucrat b1("B1", 1);
		cout << b1 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}

	cout << "*** Invalid initializations ***" << endl;
	try
	{
		Bureaucrat b2("B2", 0);
		cout << b2 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}
	try
	{
		Bureaucrat b3("B3", 150);
		cout << b3 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}

cout << "*** operations with Bureaucrats ***" << endl;
	//Valid
	try
	{
		cout << "Increase grade" << endl;
		Bureaucrat b1("B1", 10);
		b1.incrGrade();
		cout << b1 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}
	//Invalid
	try
	{
		Bureaucrat b1("B1", 1);
		b1.incrGrade();
		cout << b1 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}

	//Valid
	try
	{
		cout << "Decrease grade" << endl;
		Bureaucrat b1("B1", 10);
		b1.decrGrade();
		cout << b1 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}
	//Invalid
	try
	{
		Bureaucrat b1("B1", 150);
		b1.decrGrade();
		cout << b1 << endl;
	}
	catch (std::exception &ex)
	{
		std::cerr << ex.what() << endl;
	}




}