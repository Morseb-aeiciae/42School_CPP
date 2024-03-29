#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form {

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	virtual void execute(Bureaucrat const & executor) const;
	std::string		getTarget() const {return this->_target;}

private:
	std::string	_target;
};

#endif