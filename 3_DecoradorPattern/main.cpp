#include "Beverage/Espresso.hpp"
#include "Beverage/Decaff.hpp"
#include "AddOnDecorators/Caramel.hpp"
#include "AddOnDecorators/Soy.hpp"

int main(int argc, const char * argv[]) {
    Espresso esp;
    esp.getDescription();
    std::cout <<"\n" << esp.Cost() << std::endl;
    
    std::unique_ptr<beverage> esp2 = std::make_unique<Decaff>();
    esp2->getDescription();
    std::cout <<"\n" << esp2->Cost() << std::endl;

    esp2 = std::make_unique<Espresso>();
    esp2->getDescription();
    std::cout <<"\n" << esp2->Cost() << std::endl;

    std::unique_ptr<Caramel> esp_with_caramel = std::make_unique<Caramel>(std::move(esp2));
    esp_with_caramel->getDescription();
    std::cout <<"\n" << esp_with_caramel->Cost() << std::endl;

    std::unique_ptr <Soy> esp_with_soy = std::make_unique<Soy>(std::move(std::make_unique<Decaff>()));
    esp_with_soy->getDescription();
    std::cout <<"\n" << esp_with_soy->Cost() << std::endl;

    

}