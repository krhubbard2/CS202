// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "wumpus.hpp"
#include "cave.hpp"
#include "player.hpp"
#include "hazards.hpp"

/* CAVE SYSTEM LAYOUT
1 -- 6,9,13
2 -- 4,8,19
3 -- 6,16,17
4 -- 2,5,7
5 -- 4,8,9
6 -- 1,3,15
7 -- 4,11,18
8 -- 2,5,12
9 -- 1,5,10
10 -- 9,13,16
11 -- 7,14,18
12 -- 8,17,19
13 -- 1,10,15
14 -- 7,11,18
15 -- 6,13,16
16 -- 3,10,15
17 -- 3,12,20
18 -- 7,14,20
19 -- 2,12,20
20 -- 17,18,19
*/



int main()
{
  //Cave Layout
  vector<Cave> rooms;
  for (size_t i = 0; i < 21; i++)
  {
    Cave room(i);
    rooms.push_back(room);
  }
  rooms[1].setRoomOne(rooms[6]);
  rooms[1].setRoomTwo(rooms[9]);
  rooms[1].setRoomThree(rooms[13]);
  rooms[2].setRoomOne(rooms[4]);
  rooms[2].setRoomTwo(rooms[8]);
  rooms[2].setRoomThree(rooms[19]);
  rooms[3].setRoomOne(rooms[6]);
  rooms[3].setRoomTwo(rooms[16]);
  rooms[3].setRoomThree(rooms[17]);
  rooms[4].setRoomOne(rooms[2]);
  rooms[4].setRoomTwo(rooms[5]);
  rooms[4].setRoomThree(rooms[7]);
  rooms[5].setRoomOne(rooms[4]);
  rooms[5].setRoomTwo(rooms[8]);
  rooms[5].setRoomThree(rooms[9]);
  rooms[6].setRoomOne(rooms[1]);
  rooms[6].setRoomTwo(rooms[3]);
  rooms[6].setRoomThree(rooms[15]);
  rooms[7].setRoomOne(rooms[4]);
  rooms[7].setRoomTwo(rooms[11]);
  rooms[7].setRoomThree(rooms[18]);
  rooms[8].setRoomOne(rooms[2]);
  rooms[8].setRoomTwo(rooms[5]);
  rooms[8].setRoomThree(rooms[12]);
  rooms[9].setRoomOne(rooms[1]);
  rooms[9].setRoomTwo(rooms[5]);
  rooms[9].setRoomThree(rooms[10]);
  rooms[10].setRoomOne(rooms[9]);
  rooms[10].setRoomTwo(rooms[13]);
  rooms[10].setRoomThree(rooms[16]);
  rooms[11].setRoomOne(rooms[7]);
  rooms[11].setRoomTwo(rooms[14]);
  rooms[11].setRoomThree(rooms[18]);
  rooms[12].setRoomOne(rooms[8]);
  rooms[12].setRoomTwo(rooms[17]);
  rooms[12].setRoomThree(rooms[19]);
  rooms[13].setRoomOne(rooms[1]);
  rooms[13].setRoomTwo(rooms[10]);
  rooms[13].setRoomThree(rooms[15]);
  rooms[14].setRoomOne(rooms[7]);
  rooms[14].setRoomTwo(rooms[11]);
  rooms[14].setRoomThree(rooms[18]);
  rooms[15].setRoomOne(rooms[6]);
  rooms[15].setRoomTwo(rooms[13]);
  rooms[15].setRoomThree(rooms[16]);
  rooms[16].setRoomOne(rooms[3]);
  rooms[16].setRoomTwo(rooms[10]);
  rooms[16].setRoomThree(rooms[15]);
  rooms[17].setRoomOne(rooms[3]);
  rooms[17].setRoomTwo(rooms[12]);
  rooms[17].setRoomThree(rooms[20]);
  rooms[18].setRoomOne(rooms[7]);
  rooms[18].setRoomTwo(rooms[14]);
  rooms[18].setRoomThree(rooms[20]);
  rooms[19].setRoomOne(rooms[2]);
  rooms[19].setRoomTwo(rooms[12]);
  rooms[19].setRoomThree(rooms[20]);
  rooms[20].setRoomOne(rooms[17]);
  rooms[20].setRoomTwo(rooms[18]);
  rooms[20].setRoomThree(rooms[19]);

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

  //Declare player, wumpus, bats, and pits
  Player player;
  Wumpus wumpus;
  Hazard bat1(1);
  Hazard bat2(1);
  Hazard pit1(2);
  Hazard pit2(2);
  //Set player in random room (1-20)
  player.setCurrentRoom(rooms[randInt(1,20)]);
  //Set wumpus in random room (1-20)
  while (wumpus.getCurrentRoom() == 0 ||
         wumpus.getCurrentRoom() == player.getCurrentRoom())
  {
    wumpus.setCurrentRoom(rooms[randInt(1,20)]);
  }
  //Set bat1 in random room (1-20)
  while (bat1.getCurrentRoom() == 0 ||
         bat1.getCurrentRoom() == player.getCurrentRoom() ||
         bat1.getCurrentRoom() == wumpus.getCurrentRoom())
  {
    bat1.setCurrentRoom(rooms[randInt(1,20)]);
  }
  //Set bat2 in random room (1-20)
  while (bat2.getCurrentRoom() == 0 ||
         bat2.getCurrentRoom() == player.getCurrentRoom() ||
         bat2.getCurrentRoom() == wumpus.getCurrentRoom() ||
         bat2.getCurrentRoom() == bat1.getCurrentRoom())
  {
    bat2.setCurrentRoom(rooms[randInt(1,20)]);
  }
  //Set pit1 in random room (1-20)
  while (pit1.getCurrentRoom() == 0 ||
         pit1.getCurrentRoom() == player.getCurrentRoom() ||
         pit1.getCurrentRoom() == wumpus.getCurrentRoom() ||
         pit1.getCurrentRoom() == bat1.getCurrentRoom() ||
         pit1.getCurrentRoom() == bat2.getCurrentRoom())
  {
    pit1.setCurrentRoom(rooms[randInt(1,20)]);
  }
  //Set pit2 in random room (1-20)
  while (pit2.getCurrentRoom() == 0 ||
         pit2.getCurrentRoom() == player.getCurrentRoom() ||
         pit2.getCurrentRoom() == wumpus.getCurrentRoom() ||
         pit2.getCurrentRoom() == bat1.getCurrentRoom() ||
         pit2.getCurrentRoom() == bat2.getCurrentRoom() ||
         pit2.getCurrentRoom() == pit1.getCurrentRoom())
  {
    pit2.setCurrentRoom(rooms[randInt(1,20)]);
  }


  cout << "Player start: " << player.getCurrentRoom() << endl;
  cout << "Wumpus start: " << wumpus.getCurrentRoom() << endl;
  cout << "Bat1 start: " << bat1.getCurrentRoom() << endl;
  cout << "Bat2 start: " << bat2.getCurrentRoom() << endl;
  cout << "Pit1 start: " << pit1.getCurrentRoom() << endl;
  cout << "Pit2 start: " << pit2.getCurrentRoom() << endl;

  player.surrounding(rooms[player.getCurrentRoom()]);
  player.seeHazards(rooms[player.getCurrentRoom()], bat1, bat2, pit1, pit2,
                    wumpus);



 return 0;
}
