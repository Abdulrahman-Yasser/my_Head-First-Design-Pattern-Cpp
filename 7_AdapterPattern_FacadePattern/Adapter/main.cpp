#include "Ducks/Duck.hpp"
#include "Ducks/MallardDuck.hpp"
#include "Turkey/Turkey.hpp"
#include "Turkey/WildTurkey.hpp"
#include "TurkeyAdapter/TurkeyAdapter.hpp"

void testDuck(Duck *d);

int main(){
    MallardDuck *ducky = new MallardDuck();

    WildTurkey *wTurkey = new WildTurkey();

    Duck* my_turkeyAdapter = new TurkeyAdapter(wTurkey); 

    std::cout << "The Turkey says ... \n";
    wTurkey->gobble();
    wTurkey->fly();

    std::cout << "The Duck says ... \n";
    testDuck(ducky);

    std::cout << "The TurkeyAdapter says ... \n";
    testDuck(my_turkeyAdapter);
}

void testDuck(Duck *d){
    d->quack();
    d->fly();
}