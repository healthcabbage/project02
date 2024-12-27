#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Animal
{
public:
	Animal() {};
	virtual void makeSound() = 0;
	~Animal() {};
};

class Dog : public Animal
{
public:
	void makeSound()
	{
		cout << "Dog Dog" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound()
	{
		cout << "Cat Cat" << endl;
	}
};

class Cow : public Animal
{
public:
	void makeSound()
	{
		cout << "Cow Cow" << endl;
	}
};

class Zoo
{
private:
	Animal* animals[10]{};
	int animalCount = 0;
public:

	Zoo() {};

	void addAnimal(Animal* animal)
	{
		animals[animalCount] = animal;
	}

	void perforActions()
	{
		animals[animalCount]->makeSound();
	}

	~Zoo()
	{
		delete animals[animalCount];
		animalCount++;
	}
};

Animal* createRandomAnimal()
{
	srand((unsigned)time(NULL));
	int num = rand() % 3;

	Animal* animal[3];

	animal[0] = new Dog();
	animal[1] = new Cat();
	animal[2] = new Cow();

	return animal[num];
};


int main()
{
	Zoo zoo;
	zoo.addAnimal(createRandomAnimal());
	zoo.perforActions();
	zoo.~Zoo();

	return 0;
}
