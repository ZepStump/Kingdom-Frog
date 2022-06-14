#include "Text.h"
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

//Scene 0: Frog.
//Initial(opening) scene
void Text::text00()
{
  cout << "Hello, traveler! You went into portal and became a knight\n"
  << "You see a magic frog in front of you. Your actions:\n\n"
  << "[1].Ask a road to the nearest city\n"
  << "[2].Take a frog with you\n"
  << "[3].Kiss a frog\n"
  << "[4].Ignore it\n"
  << "==========================================================" << endl;
}

//Subscene 0: choice 3, kiss a frog
void Text::text03()
{
  cout << "Ughh, what would you do that?\n"
  << "I didn't say it was a princess or something.\n"
  << "You catch a disease and die.\n"
  << "Fool end.\n"
  << "==========================================================" << endl;
}

//Subscene 0: choice 4, ignore a frog
void Text::text04()
{
  cout << "That was rude!\n"
  << "Now frog is angry with you.\n"
  << "He turns you into another frog\n"
  << "Rude end.\n"
  << "==========================================================" << endl;
}

//Scene 1: City
void Text::text10()
{
  cout << "You entered a city. Frog follows you.\n"
  << "You see a castle and a bar full of goblins.\n\n"
  << "[1]. Go to the castle\n"
  << "[2]. Enter to the bar\n"
  << "[3]. Talk to the frog\n"
  << "==========================================================" << endl;
}

//Subscene 1: Talk to frog
void Text::text13()
{
  cout << "Frog offers you a word and shield.\n\n"
  << "[1]. Take the sword\n"
  << "[2]. Take shield\n"
  << "[3]. Take both\n"
  << "[4]. Kindly reject an offer\n"
  << "==========================================================" << endl;
}

//Scene 2:Goblin Bar
void Text::text20()
{
  cout << "You entered a bar with 10 angry looking goblins\n"
  << "You see many shovels as well.\n\n"
  << "[1].Say \"sorry\" and ran away\n"
  << "[2].Fight goblins\n"
  << "[3].Order a beer and try to make a small talk\n"
  << "==========================================================" << endl;
}

//Subscene 2:Fight goblins
void Text::text22()
{
  cout << "There were too many goblins.\n"
  << "You were only able to kill three before they killed you.\n"
  << "Sad end.\n"
  << "==========================================================" << endl;
}

//Subscene 2:Talk to goblins
void Text::text23()
{
  cout << "It turns out that they are very nice.\n"
  << "They work at the mine nearby.\n"
  << "You drink a lot of bear and wake up in your room.\n"
  << "Beer end.\n"
  << "==========================================================" << endl;
}

//Scene 3: Lady
void Text::text30()
{
  cout << "You went to the castle, but was stopped by a lady.\n"
  << "She asks you to protect her to the way to castle.\n\n"
  << "[1].Agree\n"
  << "[2].Disagree\n"
  << "[3].Ask the frog\n"
  << "==========================================================" << endl;
}

//Subscene 3: Ask the frog
void Text::text33()
{
  cout << "Frog offers you a word and shield.\n\n"
  << "[1]. Take the sword\n"
  << "[2]. Take shield\n"
  << "[3]. Take both\n"
  << "[4]. Take nothing\n"
  << "==========================================================" << endl;
}

//Scene 4: Castle
void Text::text40()
{
  cout << "You finally reached the castle.\n"
  << "You see a king with his two guards\n" 
  << "by they are surround by 10 enemies.\n"
  << "They offer you half of the gold if you help them.\n\n"
  << "[1].Help the King\n"
  << "[2].Accept the offer\n"
  << "[3].Ask frog for help\n"
  << "==========================================================" << endl;
}

//Subscene 4: Ask the frog
void Text::text43()
{
  cout << "Frog offers you a word and shield.\n\n"
  << "[1]. Take the sword\n"
  << "[2]. Take shield\n"
  << "[3]. Take both\n"
  << "[4]. Take nothing\n"
  << "==========================================================" << endl;
}

//Final Scene (5): Help the kind (full armor)
void Text::text50()
{
  cout << "You helped the king and saved him!\n"
  << "He gives you half of his gold and make you his royal guard.\n"
  << "Knight end.\n"
  << "==========================================================" << endl;
}

//Final Scene (5): Help the king (sword only)
void Text::text51()
{
  cout << "You saved the king, but was injured.\n"
  << "You die from your wounds.\n"
  << "King is foverer thankful to you.\n"
  << "Brave end.\n"
  << "==========================================================" << endl;
}

//Final Scene (5): Help the king (shield or nothing)
void Text::text52()
{
  cout << "You and king die.\n"
  << "You had no weapon.\n"
  << "All dead end.\n"
  << "==========================================================" << endl;
}

//Final Scene (6): Rob the king
void Text::text6()
{
  cout << "You robbed the king and get half of his gold.\n"
  << "You became a pirat.\n"
  << "Pirat end.\n"
  << "==========================================================" << endl;
}

//Final Scene (7): Help king and lady
void Text::text7()
{
  cout << "You saved the king and lady.\n"
  << "She is a princess.\n"
  << "King lets you marry her.\n"
  << "You become next king.\n"
  << "Happy end.\n"
  << "==========================================================" << endl;
}