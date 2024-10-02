#include <bits/stdc++.h>
// #include "cb.cpp"
using namespace std;

 
class Hero{






    
//     Hero(){
//  cout<<"constructor clled"<<endl;
//     }

// Hero(int health){
//     cout<<"this is "<<this<<endl;
//     this->health =  health;
    
// }
// Hero(int health, char level){
//     cout<<"this is "<<this<<endl;
//     this->health =  health;
//     this->level = level;
    
// }



    public:
    int health;
    char level;
    char *name;
    static int ttc;



 
        Hero(){
 cout<<"constructor clled"<<endl;
 name = new char[100];
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void setHealth(int h ){
        health=h;

    }
    void setLevel(char ch){
        level   =ch;
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
    void setName(char name[]){
        strcpy(this->name ,name);
    }

    //    void print(){
    //     cout<<level<<endl;
    //     cout<<health<<endl;
    //     cout<<name<<endl;
    // }


    Hero(int health, char level){
    // cout<<"this is "<<this<<endl;
    this->health =  health;
    this->level = level;
    
    
}



// 
Hero(Hero &temp){
    cout<<"Copy"<<endl;
    this->health=  temp.health;
    this->level  = temp.level;
}

~Hero(){
    cout<<"Desctructor"<<endl;
}

static int random(){
    cout<<ttc<<endl;
}







};

int Hero:: ttc=  10;

int main(){
    // Hero suresh(78,'A');
    // suresh.print();
    // Hero nilesh(suresh);
    // nilesh.print();

    // Hero hero1;
    // hero1.setHealth('D');

    // char name[7] = "Nilesh";
    // hero1.setName(name);


    // hero1.print();


    // nilesh.health  = suresh.health;
    // nilesh.level = suresh.level;

    // Hero h1; 
    // Hero *b   =new Hero; 


    cout<<Hero::ttc<<endl;


    














        // // Hero ramesh;
    
//     // // cout<<"ramesh health is "<< ramesh.gethealth()<<endl;
//     // // ramesh.setHealth(70);
//     // // cout<<"ramesh health is "<< ramesh.gethealth()<<endl;

//     // Hero *h  = new Hero;
//     // h->setLevel('A');
//     // h->setLevel(23);
//     // // cout<<"level is "<<(*h).level<<endl;
//     // // cout<<"health is "<<(*h).health<<endl;

//     // //or

//     //     cout<<"level is "<<h->level<<endl;
//     // cout<<"health is "<<h->health<<endl;

// // cout<<"hi"<<endl;
//     // Hero ramesh;
//     // // cout<<"hello"<<endl;

//     // // Hero *a = new Hero;

//     Hero siraj(23);
//     Hero nilesh (12, 'Y');
//     cout<<"adres of siraj is "<<&siraj<<endl;
    // cout<<"Health is "<< ramesh.health<<endl;

}