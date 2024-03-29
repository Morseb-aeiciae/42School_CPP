#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main02(){
	// PresidentialPardonForm 	ppf("\033[34mJean-Jacques\033[0m");
	// RobotomyRequestForm		rrf("\033[34mMarie-Capucine\033[0m");
	// ShrubberyCreationForm	scf("!NewFile");
	Bureaucrat s("\033[31mSamael\033[0m", 72);
	Bureaucrat boss("\033[32mBig Boss\033[0m", 1);
	Bureaucrat g("\033[33mGrouillot\033[0m", 130);
	Intern someRandomIntern;
	Form* ppf = someRandomIntern.makeForm("presidential pardon", "\033[34mJean-Jacques\033[0m");
	Form* rrf = someRandomIntern.makeForm("robotomy request", "\033[34mMarie-Capucine\033[0m");
	Form* scf = someRandomIntern.makeForm("shuberry creation", "!NewFile");

	std::cout << std::endl;
	std::cout << *ppf;
	std::cout << *rrf;
	std::cout << *scf;
	std::cout << std::endl;
//PPF test
	std::cout << "\t --- PPF TEST ---" << std::endl;
	try{
		(*ppf).execute(boss);
	} catch (std::exception &e){
	}
	try{
		s.signForm((*ppf));
	}catch(std::exception &e) {
	}
	boss.executeForm((*ppf));
	boss.signForm((*ppf));
	boss.executeForm((*ppf));
	try{
	(*ppf).execute(s);
		(*ppf).execute(boss);
	}catch(std::exception &e) {
	}
	g.signForm((*ppf));
	std::cout << std::endl;
//RRF test
	std::cout  << "\t --- RRF TEST ---"<< std::endl;
	try{
		(*rrf).execute(boss);
	} catch (std::exception &e){
	}
	try{
		s.signForm((*rrf));
	}catch(std::exception &e) {
	}
	boss.executeForm((*rrf));
	boss.signForm((*rrf));
	boss.executeForm((*rrf));
	try{
	(*rrf).execute(s);
		(*rrf).execute(boss);
	}catch(std::exception &e) {
	}
	g.signForm((*rrf));
	std::cout << std::endl;
//SCF test
	std::cout  << "\t --- SCF TEST ---"<< std::endl;
		try{
		(*scf).execute(boss);
	} catch (std::exception &e){
	}
	try{
		s.signForm((*scf));
	}catch(std::exception &e) {
	}
	boss.executeForm((*scf));
	boss.signForm((*scf));
	boss.executeForm((*scf));
	try{
	(*scf).execute(s);
		(*scf).execute(boss);
	}catch(std::exception &e) {
	}
	g.signForm(*scf);
	std::cout << std::endl;

	delete ppf;
	delete rrf;
	delete scf;

	return 0;
}

int main(){
	main02();


	return 0;
}
