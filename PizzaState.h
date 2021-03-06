#ifndef PIZZASTATE_H
#define	PIZZASTATE_H

class Pizza;

class PizzaState
{
public:
    PizzaState();
    virtual void bake(Pizza* pizza) const = 0;
    virtual void deliver(Pizza* pizza) const = 0;
    virtual ~PizzaState();
};

#endif	/* PIZZASTATE_H */

