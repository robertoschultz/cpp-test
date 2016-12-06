#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	/// This is the function which will be called to reproduce the sound each
	/// animal makes.
	virtual void makeSound() const = 0;

	/// This is our factory. You need to code the missing implementation.
	static Animal* create(const std::string& name);

	/// This function will terminate the class instance.
	static void destroy(Animal* animal)
	{
		delete animal;
	}
};



// Write your classes here
class Dog : public Animal
{  
   public:
   virtual void makeSound() const {cout << "woof" << endl;}
};

class Cow : public Animal
{
   public:
   virtual void makeSound() const {cout << "moo" << endl;}
};

class Cat : public Animal
{
   public:
   virtual void makeSound() const {cout << "meow" << endl;}
};

class Bird : public Animal
{
   public:
   virtual void makeSound() const {cout << "tweet" << endl;}
};

class Mouse : public Animal
{
   public:
   virtual void makeSound() const {cout << "squeek" << endl;}
};

class Frog : public Animal
{
   public:
   virtual void makeSound() const {cout << "croak" << endl;}
};

class Elephant : public Animal
{
   public:
   virtual void makeSound() const {cout << "toot" << endl;}
};

class Duck : public Animal
{
   public:
   virtual void makeSound() const {cout << "quack" << endl;}
};

class Fish : public Animal
{
   public:
   virtual void makeSound() const {cout << "blub" << endl;}
};

class Seal : public Animal
{
   public:
   virtual void makeSound() const {cout << "ow ow ow" << endl;}
};

class Fox : public Animal
{
   public:
   virtual void makeSound() const {cout << "Ylvis" << endl;}
};

// This is the function you need to change in order to instantiate the required
// classes.
Animal* Animal::create(const std::string& name)
{
   if(!name.compare("dog")) return new Dog();
   if(!name.compare("cow")) return new Cow();
   if(!name.compare("cat")) return new Cat();
   if(!name.compare("bird")) return new Bird();
   if(!name.compare("mouse")) return new Mouse();
   if(!name.compare("frog")) return new Frog();
   if(!name.compare("elephant")) return new Elephant();
   if(!name.compare("duck")) return new Duck();
   if(!name.compare("fish")) return new Fish();
   if(!name.compare("seal")) return new Seal();
   if(!name.compare("fox")) return new Fox();
   
   cout << name << " is not an animal" << endl;
   return 0;
}

void makeSound(const std::string& name)
{
	// Create our instance
	Animal* animal = Animal::create(name);

	animal->makeSound();

	// Destroy our instance
	Animal::destroy(animal);
}

int main(int argc, char** argv)
{
	int n = 0;
	std::cin >> n;

	while(n--)
	{
		std::string animal;

		std::cin.ignore();
		std::cin >> animal;

		makeSound(animal);
	}

	return 0;
}
