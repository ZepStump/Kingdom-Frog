#include "Driver.h"
#include <iostream>
#include <iomanip>
using namespace std;

//constructor
Driver::Driver()
{
  knight = 0;
  updateKnightFileName(); //just in case
  scene = 0;
  text.text00(); //inital text
  location();
}

//determines the location (run function)
void Driver::location()
{
  //Scene 0: Frog
  if (scene == 0)
  {
    run0();
  }
  //Scene 1: City
  if (scene == 1)
  {
    run1();
  }
  //Subscene 1: Talk to frog
  if (scene == 13)
  {
    run13();
  }
  //Scene 2: Goblin Bar
  if (scene == 2)
  {
    run2();
  }
  //Scene 3: Lady
  if (scene == 3)
  {
    run3();
  }
  //Subscene 3: Ask a frog
  if (scene == 33)
  {
    run33();
  }
  //Scene 4:Castle
  if (scene == 4)
  {
    run4();
  }
  //Subscene 4: Ask the frog
  if (scene == 43)
  {
    run43();
  }
  //All ending scenes
  if (scene == 404)
  {
    run404();
  }
}

//Scene 0: Frog
//Initial(opening) scene
void Driver::run0()
{
  draw.drawKnightWithFrog(knightFileName);

  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) //Ask a road
  {
    text.text10(); //Scene 1: City
    draw.drawKnightWithFrog(knightFileName); //drawing
    scene = 1; //chaning the scene for location function
  }
  else if (choice == 2) //Take a frog
  {
    text.text10(); //Scene 1: City
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else if (choice == 3) //Kiss a frog
  {
    text.text03(); //changing the text
    draw.drawSinglePicture("Pictures//Dead.txt"); //tomb
    scene = 404; //ending scene
  }
  else if (choice == 4) //Ignore the frog
  {
    text.text04();//changin the text
    draw.drawTwoFrogs(); // chaing the drawings
    scene = 404; //ending scene
  }
  else
  {
    cout << "Please type between  1-4.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Scene 1: City.
void Driver::run1()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) // Go to the castle
  {
    text.text30(); //Scene 3: Lady
    draw.drawKnightWithLady(knightFileName, "Pictures//Lady.txt");
    scene = 3;
  }
  else if (choice == 2) //Enter the bar
  {
    text.text20(); // Scene 2: Goblin bar
    draw.drawSinglePicture("Pictures//Goblin.txt");
    scene = 2;
  }
  else if (choice == 3) //Talk to the frog.
  {
    text.text13();
    draw.drawKnightWithFrog(knightFileName);
    scene = 13;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Subscene 1: Talk to the frog
void Driver::run13()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) //Take a sword
  {
    knight = 1; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text10(); //returning back to Scene 1
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else if (choice == 2) //Take a shield
  {
    knight = 2; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text10();//returning back to Scene 1
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else if (choice == 3) //Take both
  {
    knight = 3; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text10(); //returning back to Scene 1
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else if (choice == 4)
  {
    text.text10(); //returning back to Scene 1
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Scene 2: Goblin Bar
void Driver::run2()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) // Return to the city
  {
    text.text10(); //returning back to Scene 1
    draw.drawKnightWithFrog(knightFileName);
    scene = 1;
  }
  else if (choice == 2) //Fight the goblins
  {
    text.text22();
    draw.drawSinglePicture("Pictures//Dead.txt"); //tomb
    scene = 404;
  }
  else if (choice == 3) //Talk to goblins
  {
    text.text23();
    draw.drawSinglePicture("Pictures//Beer.txt");
    scene = 404;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Scene: Lady
void Driver::run3()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) // Help Lady
  {
    lady = 1;
    text.text40();
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 4;
  }
  else if (choice == 2) // Don't help her
  {
    lady = 0;
    text.text40();
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 4;
  }
  else if (choice == 3) //Ask a frog
  {
    text.text33();
    draw.drawKnightWithFrog(knightFileName);
    scene = 33;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Subscene 3: Ask to the frog
void Driver::run33()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) //Take a sword
  {
    knight = 1; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text30(); //returning back to Scene 3
    draw.drawKnightWithLady(knightFileName, "Pictures//Lady.txt");
    scene = 3;
  }
  else if (choice == 2) //Take a shield
  {
    knight = 2; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text30();//returning back to Scene 3
    draw.drawKnightWithLady(knightFileName, "Pictures//Lady.txt");
    scene = 3;
  }
  else if (choice == 3) //Take both
  {
    knight = 3; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text30(); //returning back to Scene 3
    draw.drawKnightWithLady(knightFileName, "Pictures//Lady.txt");
    scene = 3;
  }
  else if (choice == 4) //Take nothing
  {
    knight = 0; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text30(); //returning back to Scene 3
    draw.drawKnightWithLady(knightFileName, "Pictures//Lady.txt");
    scene = 3;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Scene 4: Castle
void Driver::run4()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) //Help the king
  {
    if (lady == 1)
    {
      text.text7(); //married
      draw.drawKnightWithLady(knightFileName, "Pictures//Princess.txt");
      scene = 404;
    }
    else if (knight == 3)
    {
      text.text50(); //royal guard
      draw.drawSinglePicture("Pictures//Gold.txt");
      scene = 404;
    }
    else if (knight == 2)
    {
      text.text51(); //dead
      draw.drawSinglePicture("Pictures//Dead.txt");
      scene = 404;
    }
    else
    {
      text.text52(); //dead
      draw.drawSinglePicture("Pictures//Dead.txt");
      scene = 404;
    }
  }
  else if (choice == 2) //Accept offer
  {
    text.text6();
    draw.drawSinglePicture("Pictures//Gold.txt");
    scene = 404;
  }
  else if (choice == 3) //Ask the frog
  {
    text.text43();
    draw.drawKnightWithFrog(knightFileName);
    scene = 43;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//Subscene 4: Ask the frog
void Driver::run43()
{
  int choice;

  cin >> choice;

  cout << endl << endl;

  if (choice == 1) //Take a sword
  {
    knight = 1; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text40(); //returning back to Scene 4
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 3;
  }
  else if (choice == 2) //Take a shield
  {
    knight = 2; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text40();//returning back to Scene 4
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 4;
  }
  else if (choice == 3) //Take both
  {
    knight = 3; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text40(); //returning back to Scene 4
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 4;
  }
  else if (choice == 4) //Take nothing
  {
    knight = 0; //updating type of kinght
    updateKnightFileName(); //updating filename
    text.text40(); //returning back to Scene 4
    draw.drawSinglePicture("Pictures//Castle.txt");
    scene = 4;
  }
  else
  {
    cout << "Please type between  1-3.\n"
    << "Try again.\n\n";
  }

  //sending to scene distributor
  location();
}

//All ending scenes
void Driver::run404()
{
  //just do nothing
}

//for printing right file name
void Driver::updateKnightFileName()
{
  if (knight == 0)
    knightFileName = "Pictures//KnightBasic.txt";
  if (knight == 1)
    knightFileName = "Pictures//KnightSword.txt";
  if (knight == 2)
    knightFileName = "Pictures//KnightShield.txt";
  if (knight == 3)
    knightFileName = "Pictures//KnightFull.txt";
}
