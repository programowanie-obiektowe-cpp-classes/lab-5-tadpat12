#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > char_vector;
    // Twoja implementacja tutaj
    //return {};
    for(auto iter= people.rbegin(); iter != people.rend(); iter++){
        iter -> birthday();
        if(iter ->isMonster() == true){
            char_vector.push_back('n');
        }
        else if(iter -> isMonster() == false){
            
            char_vector.push_back('y');
        }
    }
    return char_vector;
}
