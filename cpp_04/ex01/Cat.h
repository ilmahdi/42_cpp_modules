#ifndef CAT_H
#define CAT_H

# include <iostream>
# include <string>
# include "Animal.h"
# include "Brain.h"


class Cat : public Animal
{
    Brain *brain;

    public:
        Cat();
        Cat(const Cat &cat);
        Cat &operator = (const Cat &cat);
        Brain *getBrain(void) const;
        void makeSound(void) const;
        ~Cat();
};

#endif