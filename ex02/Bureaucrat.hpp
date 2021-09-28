#ifndef CPP_MODULE04_BUREAUCRAT_HPP
#define CPP_MODULE04_BUREAUCRAT_HPP
#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::string;

class Bureaucrat
{
public:
	Bureaucrat(string name);
	Bureaucrat(string name, int grade);
	~Bureaucrat() {};
	const string getName() const;
	int getGrade() const;
	void incrGrade();
	void decrGrade();
//	Bureaucrat& operator=(const Bureaucrat& src);
//	Bureaucrat(const Bureaucrat& src);
	class GradeTooHighException : public std::exception
		{
		public:
			virtual char* what() const throw();
		};
	class GradeTooLowException : public std::exception
		{
		public:
			virtual char* what() const throw();
		};
private:
	int grade;
	string const name;
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &src);

#endif //CPP_MODULE04_BUREAUCRAT_HPP
