// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "wumpus.hpp"
int randInt(int low, int high)
{
  random_device rd;
  mt19937 gen1(rd());
  uniform_int_distribution<int> dist(low,high);
  return dist(gen1);
}
void batmove(int &p)
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> distrib1(1,20);
  int original = p;
  while (p == original)
  {
    p = distrib1(gen);
  }
  cout << "The bats took you away to room " << p <<"!" << endl;

}

void shoot()
{
  cout << "shot" << endl;
}

void move(int &p)
{
  bool loop = true;
  string sh;

  if (p == 1)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 6)
        {
          p = 6;
          loop = false;
        }
        else if (mo == 9)
        {
          p = 9;
          loop = false;
        }
        else if (mo == 13)
        {
          p = 13;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 2)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 4)
        {
          p = 4;
          loop = false;
        }
        else if (mo == 8)
        {
          p = 8;
          loop = false;
        }
        else if (mo == 19)
        {
          p = 19;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 3)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 6)
        {
          p = 6;
          loop = false;
        }
        else if (mo == 16)
        {
          p = 16;
          loop = false;
        }
        else if (mo == 17)
        {
          p = 17;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 4)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 2)
        {
          p = 2;
          loop = false;
        }
        else if (mo == 5)
        {
          p = 5;
          loop = false;
        }
        else if (mo == 7)
        {
          p = 7;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 5)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 4)
        {
          p = 4;
          loop = false;
        }
        else if (mo == 8)
        {
          p = 8;
          loop = false;
        }
        else if (mo == 9)
        {
          p = 9;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 6)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 1)
        {
          p = 1;
          loop = false;
        }
        else if (mo == 3)
        {
          p = 3;
          loop = false;
        }
        else if (mo == 15)
        {
          p = 15;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 7)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 4)
        {
          p = 4;
          loop = false;
        }
        else if (mo == 11)
        {
          p = 11;
          loop = false;
        }
        else if (mo == 18)
        {
          p = 18;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 8)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 2)
        {
          p = 2;
          loop = false;
        }
        else if (mo == 5)
        {
          p = 5;
          loop = false;
        }
        else if (mo == 12)
        {
          p = 12;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 9)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 1)
        {
          p = 1;
          loop = false;
        }
        else if (mo == 5)
        {
          p = 5;
          loop = false;
        }
        else if (mo == 10)
        {
          p = 10;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 10)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 9)
        {
          p = 9;
          loop = false;
        }
        else if (mo == 13)
        {
          p = 13;
          loop = false;
        }
        else if (mo == 16)
        {
          p = 16;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 11)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 7)
        {
          p = 7;
          loop = false;
        }
        else if (mo == 14)
        {
          p = 14;
          loop = false;
        }
        else if (mo == 18)
        {
          p = 18;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 12)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 8)
        {
          p = 8;
          loop = false;
        }
        else if (mo == 17)
        {
          p = 17;
          loop = false;
        }
        else if (mo == 19)
        {
          p = 19;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 13)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 1)
        {
          p = 1;
          loop = false;
        }
        else if (mo == 10)
        {
          p = 10;
          loop = false;
        }
        else if (mo == 15)
        {
          p = 15;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 14)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 7)
        {
          p = 7;
          loop = false;
        }
        else if (mo == 11)
        {
          p = 11;
          loop = false;
        }
        else if (mo == 18)
        {
          p = 18;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 15)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 6)
        {
          p = 6;
          loop = false;
        }
        else if (mo == 13)
        {
          p = 13;
          loop = false;
        }
        else if (mo == 16)
        {
          p = 16;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 16)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 3)
        {
          p = 3;
          loop = false;
        }
        else if (mo == 10)
        {
          p = 10;
          loop = false;
        }
        else if (mo == 15)
        {
          p = 15;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 17)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 3)
        {
          p = 3;
          loop = false;
        }
        else if (mo == 12)
        {
          p = 12;
          loop = false;
        }
        else if (mo == 20)
        {
          p = 20;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 18)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 7)
        {
          p = 7;
          loop = false;
        }
        else if (mo == 14)
        {
          p = 14;
          loop = false;
        }
        else if (mo == 20)
        {
          p = 20;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 19)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 2)
        {
          p = 2;
          loop = false;
        }
        else if (mo == 12)
        {
          p = 12;
          loop = false;
        }
        else if (mo == 20)
        {
          p = 20;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }

  if (p == 20)
  {
    while(loop)
    {
      cout << "Where to? ";
      getline(cin, sh);
      istringstream iss(sh);
      int mo;
      iss >> mo;
      if (!iss)
      {
        cout << "Not possible." << endl;
        loop = true;
      }
      else
      {
        if (mo == 17)
        {
          p = 17;
          loop = false;
        }
        else if (mo == 18)
        {
          p = 18;
          loop = false;
        }
        else if (mo == 19)
        {
          p = 19;
          loop = false;
        }
        else
        {
          cout << "Not possible." << endl;
          loop = true;
        }
      }
    }
  }
}



void sm(int &p)
{
  string sh = "";
  bool loop = true;
  cout << "You are in room " << p << endl;

  if (p == 1)
  {
    cout << "Tunnels connect to rooms 6, 9, and 13." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 2)
  {
    cout << "Tunnels connect to rooms 4, 8, and 19." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 3)
  {
    cout << "Tunnels connect to rooms 6, 16, and 17." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 4)
  {
    cout << "Tunnels connect to rooms 2, 5, and 7." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 5)
  {
    cout << "Tunnels connect to rooms 4, 8, and 9." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 6)
  {
    cout << "Tunnels connect to rooms 1, 3, and 15." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 7)
  {
    cout << "Tunnels connect to rooms 4, 11, and 18." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 8)
  {
    cout << "Tunnels connect to rooms 2, 5, and 12." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 9)
  {
    cout << "Tunnels connect to rooms 1, 5, and 10." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 10)
  {
    cout << "Tunnels connect to rooms 9, 13, and 16." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 11)
  {
    cout << "Tunnels connect to rooms 7, 14, and 18." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 12)
  {
    cout << "Tunnels connect to rooms 8, 17, and 19." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 13)
  {
    cout << "Tunnels connect to rooms 1, 10, and 15." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 14)
  {
    cout << "Tunnels connect to rooms 7, 11, and 18." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 15)
  {
    cout << "Tunnels connect to rooms 6, 13, and 16." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 16)
  {
    cout << "Tunnels connect to rooms 3, 10, and 15." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 17)
  {
    cout << "Tunnels connect to rooms 3, 12, and 20." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 18)
  {
    cout << "Tunnels connect to rooms 7, 14, and 20." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 19)
  {
    cout << "Tunnels connect to rooms 2, 12, and 20." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }

  if (p == 20)
  {
    cout << "Tunnels connect to rooms 17, 18, and 19." << endl;
    cout << "Shoot or move (S/M): ";
    while(loop)
    {
      getline(cin, sh);

      if (sh == "S" || sh == "s" || sh == "shoot" || sh == "SHOOT")
      {
        shoot();
        loop = false;
      }
      else if (sh == "M" || sh == "m" || sh == "move" || sh == "MOVE")
      {
        move(p);
        loop = false;
      }
      else
      {
        cout << "Shoot or move (S/M): ";
        loop = true;
      }
    }
  }
}

  void check(int &p, const int w, const int b1, const int b2, const int p1,
             const int p2, int &win)
  {
    //If player is in room 1
    if (p == 1)
    {
      //Check if Wumpus is in same room if so, lose game
      if (w == 1)
      {
        //Lose to wumpus
        win = 2;
      }
      //Check if pit is in same room
      else if (p1 == 1 || p2 == 1)
      {
        //Lose to pit
        win = 3;
      }
      //Check if a b at is in the same room, if so move player randomly
      else if (b1 == 1 || b2 == 1)
      {
        //batmove(p);

        //WORKING ON THIS
      }
      //Check if Wumpus is in an adjoining room
      if (w == 6 || w == 9 || w == 13)
      {
        cout << "I smell a wumpus." << endl;
      }

      //Check if a bat is in an adjoining room
      if (b1 == 6 || b1 == 9 || b1 == 13 || b2 == 6 || b2 == 9 || b2 == 13)
      {
        cout << "I hear flapping." << endl;
      }
      //Check if a pit is in an adjoining room
      if (p1 == 6 || p1 == 9 || p1 == 13 || p2 == 6 || p2 == 9 || p2 == 13)
      {
        cout << "I feel a breeze." << endl;
      }
    }
  }
