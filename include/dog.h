#include <string>

class Dog {
  private:
	std::string name;
	int age = 0;

  public:
	Dog(std::string name);
	std::string getName();
	int getAge();
	std::string bark();
};

