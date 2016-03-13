#include "..\..\include\EnemyTypes\Squid.h"

Squid::Squid(){
    name = "Squid";
    ExperienceAmount = 20;
    QueensDrop = rand()%50;
}

int Squid::ReturnDamage(){
    return 1+rand()%10;
}

int Squid::ReturnRiskDamage(){
    int selector= rand()%6;
    switch(selector){
        case 0: case 1: case 2: case 3:
            return 2;
            break;
        case 4: case 5:
            return 15;
            break;
        default:
            return 0;
            break;
    }
}

int Squid::ReturnHealAmount(){
    return 1+rand()%11;
}
