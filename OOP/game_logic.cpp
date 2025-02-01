#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Knight.h"
#include "Monster.h"
using namespace std;

int knight_turn(Knight &player, Monster &monster){
    int ran=rand()%5;
    switch(ran){
        case 0:
            player.shield_strike();
            return (-5);
            break;
        case 1:
            player.basic_attack();
            return (-10);
            break;
        case 2:
            player.sword_attack();
            return (-15);
            break;
        case 3:
            player.heavy_attack();
            return (-20);
            break;
        case 4:
            player.heal();
            return player.heal();
            break;
    }
    return 0;
}
int monster_turn(Monster &monster, Knight &player){
    int ran=rand()%4;
    switch(ran){
        case 0:
            monster.claw_attack();
            return (-8);
            break;
        case 1:
            monster.bite_attack();
            return (-12);
            break;
        case 2:
            monster.roar_attack();
            return (-18);
            break;
        case 3:
            player.heal();
            return player.heal();
            break;
    }
    return 0;
}
void start_game(){
    srand(int(time(0)));
    string g;
    cout<<"Enter your name: ";
    cin>>g;
    cout<<endl;
    Knight player(g);
    Monster monster("monster");
    int khealth=player.get_health();
    int mhealth=monster.get_health();
    int counter=1;
    while(khealth>=0 || mhealth>=0){
        if(counter%2==0){
            mhealth+=knight_turn(player, monster);
        } else {
            khealth+=monster_turn(monster, player);
        }
        counter++;
        if(khealth<=0){
            cout<<"Monster won (\n";
            break;
        }
        if(mhealth<=0){
            cout<<"Knight won )\n";
            break;
        }
    }
    
}
