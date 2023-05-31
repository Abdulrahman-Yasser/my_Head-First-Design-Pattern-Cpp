#include "Beverage/Espresso.hpp"
#include "Beverage/Decaff.hpp"
#include "Beverage/DarkRoast.hpp"
#include "Beverage/HouseBlend.hpp"

#include "AddOnDecorators/Caramel.hpp"
#include "AddOnDecorators/Soy.hpp"
#include "AddOnDecorators/Mocha.hpp"
#include "AddOnDecorators/Whip.hpp"

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

    std::unique_ptr <Soy> esp_with_soy = std::make_unique<Soy>(std::make_unique<Decaff>());
    esp_with_soy->getDescription();
    std::cout <<"\n" << esp_with_soy->Cost() << std::endl;

    std::unique_ptr<beverage> DarkRoast_with_whip = std::make_unique<Whip>(std::make_unique<DarkRoast>());
    DarkRoast_with_whip->getDescription();
    std::cout <<"\n" << DarkRoast_with_whip->Cost()<< std::endl;

    DarkRoast_with_whip = std::make_unique<Mocha>(std::make_unique<HouseBlend>());
    DarkRoast_with_whip->getDescription();
    std::cout <<"\n" << DarkRoast_with_whip->Cost()<< std::endl;
}