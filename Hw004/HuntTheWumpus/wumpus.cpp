// Kelby Hubbard
// CS202
// March 8, 2020
// Hw004 -- Hunt the Wumpus
#include "wumpus.hpp"

void shoot()
{
  cout << "shot" << endl;
}

void move(int p)
{
  bool loop = true;
  string sh;
  cout << "Where to? ";

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



void sm(const int p)
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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
        move();
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