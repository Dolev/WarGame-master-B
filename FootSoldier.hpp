//
// Created by dolev hindy on 18/07/2020.
//

#pragma once

#include "Soldier.hpp"
class FootSoldier:public Soldier{
private:
   // int initial_health_points;
    int damage_per_activity;
public:
 FootSoldier(){
        this->initial_health_points=100;
        this->damage_per_activity=10;
        this->father=1;
    }
    FootSoldier(int player_number){
        this->initial_health_points=100;
        this->its_max_health_points=100;
        this->damage_per_activity=10;
        this->player_number=player_number;
        this->father=1;
    }
    void attack_or_cure (std::vector<std::vector<Soldier*>> board,std::pair<int,int> source) ;
    Soldier* copy(int player_number);
};