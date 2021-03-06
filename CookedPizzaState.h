#ifndef COOKEDPIZZASTATE_H
#define	COOKEDPIZZASTATE_H

#include "PizzaState.h"

class CookedPizzaState : public PizzaState
{
public:
    CookedPizzaState();
    virtual void bake(Pizza* pizza) const;
    virtual void deliver(Pizza* pizza) const;
    virtual ~CookedPizzaState();
};

#endif	/* COOKEDPIZZASTATE_H */

