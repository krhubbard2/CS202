// Kelby Hubbard
// CS202
// 1/14/2020
// Lab001

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

void print()
{
  cout << "You called a function." << endl;
}


int main(){

cout << "Please enter an int 1-5: ";
int x;
cin >> x;

// If Else
if (x > 0 && x < 6)
{
  cout << "Good job. Proper entry." << endl;
}
else
{
  cout << "Improper entry." << endl;
}

 cout << "If statement finished." << endl;

//switch

cout << "Please choose an option (1-3)." << endl
     << "1) Print Hello" << endl
     << "2) Print Goodbye" << endl
     << "3) Print Hello World" << endl;

int s;
cin >> s;

switch (s) {
  case 1:
      cout << "Hello" << endl;
      break;
  case 2:
      cout << "Goodbye" << endl;
      break;
  case 3:
      cout << "Hello World" << endl;
      break;
  default:
      cout << "Improper seleltction--jumped to default." << endl;
      break;
}

cout << "Switch statement finished." << endl;

//Fuction call
print();

cout << "Function call finished." << endl;

//While loop
int w = 3;
while (w == 3)
{
  cout << "w is 3." << endl;
  cout << "Enter a new \"w\": ";
  cin >> w;
}

cout << "While loop finished." << endl;

//Do while loop

do{
  cout << "w is currently " << w << "." << endl;
  cout << "Please enter a new w (while stay in while loop if w = 4): ";
  cin >> w;
} while (w == 4);

cout << "Do while loop finished." << endl;

//For loop
int z = 5;
for (int i = 0; i < z; i ++)
{
  cout << i << " ";
}

cout << "\nFor statement finished." << endl;

//Ranged based for loop

vector<int> vec{
  1,
  2,
  3,
  4,
  10,
  15,
  20
};

for (auto a : vec)
{
  cout << a << " ";
}

cout << "\nRanged based for loop finished." << endl;







  return 0;
}
