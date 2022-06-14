//Header for driver class
//Class for basically running the whole program

#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include "Draw.h"
#include "Text.h"
using namespace std ;

class Driver
{
  private:
    //for drawing
    Draw draw;
    // 0 - basic, 1 - with sword
    // 2 - with shield, 3 - full
    int knight;
    string knightFileName;

    int scene; // deternimes location
    int lady; //deternimes whenver you helped lady or not
    Text text;
  public:
    Driver();
    //knight object
    void setKnight(int newKnight)
    { knight = newKnight; }
    int getKnight()
    { return knight; }
    //function for updating knight file name
    void updateKnightFileName();

    ////determines the location (run function)
    void location();
    
    //running a scene functions
    void run0(); //Scene 0: Frog
    void run1(); //Scene 1: City
    void run13(); //Sunscene 1: Talk to frog
    void run2(); //Scene 2: Goblin Bar
    void run3(); //Scene 3: Lady
    void run33(); //Subscene 3: Ask a frog
    void run4(); //Scene 4: Castle
    void run43(); //Subscene 4: Ask the frog

    //ending scenes run function
    void run404();
};

#endif