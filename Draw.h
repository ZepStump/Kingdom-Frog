//Header for drawing class
//Class for drawing the picture

#ifndef DRAW_H
#define DRAW_H
#include <string>
using namespace std ;

class Draw
{
  public:
    //single picture by file name
    void drawSinglePicture(string);
    //combination of pictures
    void drawKnightWithFrog(string);
    void putPictureIntoArray(string, string [], int);
    void drawTwoFrogs();
    void drawKnightWithLady(string, string);
};

#endif