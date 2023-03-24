# C++ Module 03
This Module is all about Inheritance.

* [Exercise 00](#exercise-00-aaaaand-open)
* [Exercise 01](#exercise-01-serena-my-love)
* [Exercise 02](#exercise-02-repetitive-work)
* [Exercise 03](#exercise-03-now-its-weird)

## Exercise 00: Aaaaand... OPEN!
Nothing special about this exercise yet. You are simply required to create a class which will later be used as the base class for all the following exercises.

Without revealing too much detail, as this is a pretty straight-forward exercise, here are the requirements:
* Create a **ClapTrap** class, with these attributes:
	* A name
	* Energy points
	* Hit points (Health)
	* Attack damage
	* Member function **void attack(const std::string& target);**
	* Member function **void takeDamage(unsigned int amount);**
	* Member function **void beRepaired(unsigned int amount);**

Not too hard. Remember to **RTFM**.
## Exercise 01: Serena, my love!
A first attempt at Inheritance. The exercise requires you to create **ScavTrap** class that inherits from **ClapTrap**

The differences are:
* Different constructor and destructor messages.
* Different **attack()** message.
* Different Hit Point, Energy Point, and Attack values.

ScavTrap will have it's own special ability:
* **void guardGate();** to announce that it is in GateKeeper mode.

## Exercise 02: Repetitive work
The same as ScavTrap, but this time it's **FragTrap**.

Again, different messages and attribute values, but with it's own special ability:
* **void highFivesGuys();** to display a positive high five request.
## Exercise 03: Now it’s weird!
This time, create a class **DiamondTrap**, that inherits from both **ScavTrap** and **FragTrap**.
DiamondTrap will have:
* It's own private name, with the same variable name as it is in the **ClapTrap class**.
* Attributes from either parent,**ScavTrap** or **FragTrap**:
	* Hit Points - Frag
	* Energy Points - Scav
	* Attack Damage - Frag
	* attack() - Scav
* And it's own special ability:
	* **void whoAmI();** that displays it's own name and it's ClapTrap name.

In this exercise you'll come across the Diamond problem, when two superclasses of a class have a common base class. Hence the name, DiamondTrap. You'll have to figure out how to handle that.