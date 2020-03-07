// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#ifndef HAZARDS_HPP_
#define HAZARDS_HPP_
class Hazard
{
  int _room = 0;
  //Bat = 1; Pit = 2;
  int _type = 0;

public:
  Hazard();
  Hazard(int type);
  int getRoom();
  int getType();
  void setType(int type);
};

#endif
