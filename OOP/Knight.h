//
//  Knight.h
//  OOP
//
//  Created by Komil Kodirov on 30/01/25.
//

#ifndef Knight_h
#define Knight_h
using namespace std;
class Knight {
private:
    string name;
    int health;
    bool is_alive;
public:
    Knight(){
        name="UNKNOWN";
        health=100;
        is_alive = true;
    }
    Knight(string name){
        this->name=name;
        health=100;
        is_alive=true;
    }
    string get_name(){
        return name;
    }
    void set_name(string name){
        this->name=name;
    }
    int get_health(){
        return health;
    }
    void set_health(int health){
        this->health=health;
    }
    bool get_alive(){
        return is_alive;
    }
    void set_alive(bool alive){
        is_alive=alive;
    }
    int shield_strike(){
        cout<<name<<" uses a shield strike!\n";
        return 5;
    }
    int basic_attack(){
        cout<<name<<" uses a basic attack!\n";
        return 10;
    }
    int sword_attack(){
        cout<<name<<" uses a sword attack!\n";
        return 15;
    }
    int heavy_attack(){
        cout<<name<<" uses a heavy attack!\n";
        return 20;
    }
    int heal(){
        int a=5+rand()%16;
        cout<<name<<" heals for "<<a<<"%\n";
        return a;
    }
    
};

#endif /* Knight_h */
