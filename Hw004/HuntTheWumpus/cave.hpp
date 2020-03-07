// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus

#ifndef CAVE_HPP_
#define CAVE_HPP_

class Cave
{
  //Room number identification
  int _room = 0;

  //Connected rooms
  char _one = 0;
  char _two = 0;
  char _three = 0;

public:
  Cave();
  Cave(int _room);

  int getRoom() const;
  int getRoomOne() const;
  int getRoomTwo() const;
  int getRoomThree() const;

  void setRoomOne(const Cave& cave);
  void setRoomTwo(const Cave& cave);
  void setRoomThree(const Cave& cave);
};

#endif
