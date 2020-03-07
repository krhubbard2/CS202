// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int main()
{
  cout << "Hunt the Wumpus" << endl;
  //Instructions
  cout << "Would you like instructions (Y/N)? ";
  string instructions = "";
  getline(cin, instructions);

  //Yes instructions
  if (instructions == "Y" || instructions == "y" || instructions == "yes")
  {
    cout << "Welcome to Hunt the Wumpus (originally developed by Gregory Yob)."
         << " The Wumpus lives in a cave of 20 rooms. Each room is adjoined "
         << "by three tunnels connecting to other rooms." << endl << endl
         << "Hazards:" << endl << "Bottemless pits -- Two rooms have pits. "
         << "If you go in one of these rooms you will fall and die." << endl
         << "Super bats -- Two other rooms have bats. If you go in one of "
         << "these rooms a bat will grab you and carry you to another room "
         << "at random. Which could be deadly." << endl << "Wumpus:" << endl
         << "The Wumpus is not harmed by hazards. He is usally sleeping. "
         << "He is woken by you shooting an arrow or you entering his room. "
         << "If the Wumpus wakes he moves one room. If he walks into your "
         << "room he eats you." << endl << "You:" << endl << "Each turn you "
         << "may move or shoot an arrow that can go to 3 rooms." << endl
         << "Moving: You can move one room at a time." << endl
         << "Arrows: You have 5 arrows. You lose if you run out of arrows. "
         << "Each arrow can go from 1 to 3 rooms. You aim by telling the "
         << "computer the room #s you want the arrow to go through. If it"
         << "can't go that way (it isn't connected to that room) it stops."
         << endl << "If the arrow hits the Wumpus, you win." << endl
         << "If the arrow hits you, you lose." << endl << "Good luck." << endl;

  }

  //No Instructions
}
