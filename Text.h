//Header for text class
//Class for outputting the choices and all text

#ifndef TEXT_H
#define TEXT_H
#include <string>
using namespace std ;

class Text
{
  public:
    //text output for different scenes
    void text00(); //Scene: opening
    void text03(); //Subscene 0: kiss a frog
    void text04(); //Subscene 0: ignore the frog
    void text10(); //Scene 1: City
    void text13(); //Subscene 1: Talk to frog
    void text20(); //Scene 2: Goblin Bar
    void text22(); //Subscene 2: Fight goblins
    void text23(); //Subscene 2: Talk to goblins
    void text30(); //Scene 3: Lady
    void text33(); //Subscene 3: Ask the frog
    void text40(); //Scene 4: Castle
    void text43(); //Subscene 4: Ask the frog
    void text50(); //Scene 5
    void text51();
    void text52();
    void text6(); //Scene 6
    void text7(); //Scene 7
};

#endif