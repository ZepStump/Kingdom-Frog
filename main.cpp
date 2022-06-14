//Author: Askar Bashirov
//Final Project
//Date: 5/25/2021
#include "Driver.h"
#include <iostream>
#include <iomanip>
using namespace std;

//https://www.asciiart.eu/people/occupations/knights

/*Objective:
This is Game, where user need to choose between
several choice and based on his choice
there will be next set of choices or ending of the game
*/

/*Algortihm
1) Create a picture folder and store different picture
 a) Frog picture
 b) Basic knight picture
 c) Knight with sword
 d) Knight with shield
 e) Knight fully armored
2) Create a draw class with functions
 a) Draw a single picture, input file name
 b) Draw a knight and frog next to it based on knight
3) Create a Text function which would output the text
 a) it would just have function which output text
 for each scene nothing else, simple class
4) Create a Driver class which would run the program 
  a) it would have a draw object
  b) int for current knight amunition
  c) current knight file name
  d) method for updating knight file name based on current knight
  e) construtor
  d) text object for outputtin the text
  f) int scene for determening the location
  g) location funtion to disribute run functions
  d) run function for each constructor, which would output 
  text, read input and change scene variable, run location()
  function to boot next run function
  i) run404() functions for all endings
*/

int main() 
{
  Driver driver;
}