# Composition and Derivation

## Composition: HAS-A relationship

Example:

*  An engine has its properties, say horsepower.
*  A motorcar has its properties, say make (name), and on top it HAS-A
   engine.

Expressed as (see `composition.cc`):

*  Class `Engine` is defined with its properties and its class data,
   in this case `horsepower`.
*  Class `Motorcar` is defined with its properties and its class data,
   in this case `name` and `Engine`.

Advantages:

*  Easy to understand. A composed object is just like any other class
   variable.

Disadvantages:

*  The composed object will probably in most cases be `private`. The
   composing class will need to provide accessors to it.

## Derivation: IS-A relationship

Example:

*  A piece of furniture has its properties, say its description and weight, and
   `public` methods, say `display_furniture()` to show this.
*  A bed IS-A piece of furniture, but with additional properties, say the
   number of persons that can sleep on it.

Expressed as (see `derivation.cc`):

*  Class `Furniture` is defined with two properties (description and weight)
   and its display method.
*  Class `Bed` is derived from it and adds its own property and display method.
   `Bed`s display method calls `Furniture`s display method.

Advantages:

*  All `public` data and methods of the base class are automatic members of the
   derived class. There is no need to provide accessor wrappers as is the
   case with composition.

Disadvantages:

*  Care has to be taken to activate the right constructors of the base class
   when a derived class is instantiated.
*  Multiple derivation (when a class has multiple base classes) may lead to
   having the same base class multiple times in the derived class.
