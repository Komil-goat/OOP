//
//  Monster.h
//  OOP
//
//  Created by Komil Kodirov on 30/01/25.
//

#ifndef Monster_h
#define Monster_h
using namespace std;
class Monster {
private:
    string name;
    bool is_alive;
    int health;
public:
    Monster(string name){
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
    int claw_attack(){
        cout<<name<<" executes a claw attack!\n";
        return 8;
    }
    int bite_attack(){
        cout<<name<<" bites agressively!\n";
        return 12;
    }
    int roar_attack(){
        cout<<name<<" unleashes a roar attack!\n";
        return 18;
    }
    int heal(){
        int a=10+rand()%11;
        cout<<name<<" regains its strength!\n";
        return a;
    }
};

#endif /* Monster_h */
