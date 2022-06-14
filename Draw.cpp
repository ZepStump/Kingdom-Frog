#include "Draw.h"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

void Draw::drawSinglePicture(string FILE_NAME)
{
  //opening the file
  ifstream input_file;
  input_file.open(FILE_NAME);

  if (!input_file)
  {
    cout << "Can't open the file " << FILE_NAME
         << " aborting ..." << endl;
    exit(0);
  }

  //reading from file
  string one;
  while (getline(input_file, one))
  cout << one << endl;

  //closing the file
  input_file.close();
}

//for pringing knights with frogs since I have several
//knights
//input knight file name
void Draw::drawKnightWithFrog(string FILE_NAME)
{
  //creating an array to store knight first
  //then we will add frog to it
  //I know the length
  string knight[20];
  string frog[7];

  //putting the pictures into arrays
  putPictureIntoArray(FILE_NAME, knight, 20);
  putPictureIntoArray("Pictures//Frog.txt", frog, 7);

  //pringitng the results
  for (int i = 0; i < 20; i++)
  {
    cout << knight[i] 
    << ((i > 12) ? frog[i-13] : "")
    << endl;
  }
}

//function for drawing a knight with a lady
void Draw::drawKnightWithLady(string knight_file, string lady_file)
{
  //creating an array to store knight first
  //then we will add lady to it
  //I know the length
  string knight[20];
  string lady[20];

  //putting the pictures into arrays
  putPictureIntoArray(knight_file, knight, 20);
  putPictureIntoArray(lady_file, lady, 20);

  //pringitng the results
  for (int i = 0; i < 20; i++)
  {
    cout << knight[i] 
    << lady[i]
    << endl;
  }
}

//functio for drawing two frogs
void Draw::drawTwoFrogs()
{
  //creating an array to store first frog
  //then we will add second frog to it
  //I know the length
  string frog[7];

  //putting the pictures into arrays
  putPictureIntoArray("Pictures//Frog.txt", frog, 7);

  //pringitng the results
  for (int i = 0; i < 7; i++)
  {
    cout << frog[i] << frog[i] << endl;
  }
}

void Draw::putPictureIntoArray(string FILE_NAME, string arr[], int size)
{
  //opening the file
  ifstream input_file;

  //reading the file line by line
  input_file.open(FILE_NAME);

  if (!input_file)
  {
    cout << "Can't open the file " << FILE_NAME
         << " aborting ..." << endl;
    exit(0);
  }

  //reading from file
  for (int i = 0; i < size; i ++)
  {
    getline(input_file, arr[i]);
  }
  //closing the file
  input_file.close();
}