#include <iostream>
#include <vector>
#include <map>

struct Pokemon
{
    std::string name;
    std::string attack1;
    std::string attack2;
    std::string attack3;
    std::string attack4;
};

int main(){

    std::vector<Pokemon> pokemon;
    std::map<std::string, Pokemon> pokemonMap;

    pokemonMap["Bulbasaur"] = Pokemon {"Bulbasaur", "Vine Whip", "Power Whip", "Tackle", "Sludge Bomb"};
    pokemonMap["Raichu"] = Pokemon {"Raichu", "Spark", "Volt Switch", "Thunder Shock", "Charm"};
    pokemonMap["Meowth"] = Pokemon {"Meowth", "Scratch", "Return", "Body Slam", "Bite"};
    pokemonMap["Psyduck"] = Pokemon {"Psyduck", "Water Gun", "Aqua Tail", "Zen HeadButt", "Cross Chop"};

    Pokemon& pokemonData1 = pokemonMap["Bulbasaur"];
    std::cout<< pokemonData1.name << std::endl;
    std::cout<< pokemonData1.attack1<< std::endl;
    std::cout<< pokemonData1.attack2<< std:: endl;
    std::cout<< pokemonData1.attack3<< std:: endl;
    std::cout<< pokemonData1.attack4<< std:: endl;

    std::cout<< std::endl;

    Pokemon& pokemonData2 = pokemonMap["Raichu"];
    std::cout<< pokemonData2.name << std::endl;
    std::cout<< pokemonData2.attack1<< std::endl;
    std::cout<< pokemonData2.attack2<< std:: endl;
    std::cout<< pokemonData2.attack3<< std:: endl;
    std::cout<< pokemonData2.attack4<< std:: endl;

     std::cout<< std::endl;

    Pokemon& pokemonData3 = pokemonMap["Meowth"];
    std::cout<< pokemonData3.name << std::endl;
    std::cout<< pokemonData3.attack1<< std::endl;
    std::cout<< pokemonData3.attack2<< std:: endl;
    std::cout<< pokemonData3.attack3<< std:: endl;
    std::cout<< pokemonData3.attack4<< std:: endl;

     std::cout<< std::endl;

    Pokemon& pokemonData4 = pokemonMap["Psyduck"];
    std::cout<< pokemonData4.name << std::endl;
    std::cout<< pokemonData4.attack1<< std::endl;
    std::cout<< pokemonData4.attack2<< std:: endl;
    std::cout<< pokemonData4.attack3<< std:: endl;
    std::cout<< pokemonData4.attack4<< std:: endl;
    
    

    
    

}