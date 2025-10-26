#include <iostream>

class Farmacie
{
public:
	static std::string CLASS_NAME = "FARMACIE";

	Farmacie() {};
	virtual ~Farmacie() {};

public:
	std::string name_;
	std::string address_;
}

int main ()
{
	std::cout<<"Hello world from " << Farmacie::CLASS_NAME <<std::endl;
	return 0;
}
