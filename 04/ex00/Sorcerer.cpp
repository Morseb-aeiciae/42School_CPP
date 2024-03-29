#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src){
    this->operator=(src);
}

Sorcerer::~Sorcerer(void){
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs){
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return (*this);
}

void Sorcerer::polymorph(Victim const & v) const{
    v.getPolymorphed();
}


std::string Sorcerer::getName(void) const{
    return (this->_name);
}
std::string Sorcerer::getTitle(void) const{
    return (this->_title);
}

void	Sorcerer::setName(std::string name){
    this->_name = name;
}

void	Sorcerer::setTitle(std::string title){
    this->_title = title;
}

std::ostream &  operator<<(std::ostream & o, Sorcerer const & rhs){
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
    return (o);
}