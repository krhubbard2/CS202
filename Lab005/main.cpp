// Kelby Hubbard
// CS202
// February 11, 2020
// Lab005 -- Binary Files

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>
using std::fstream;

int main()
{
  fstream f;
  f.open("data.dat", std::ios::in | std::ios::binary);

  int x;
  double count = 0;
  long long sum = 0;

  cout << "Reading all ints from binary file: \n";

  while (!f.eof())
  {
    count++;
    f.read(reinterpret_cast<char*>(&x), sizeof(int));
    sum += x;
    cout << x << " ";
  }

  //To erase duplicate count at .eof
  if (f.eof())
  {
    count--;
  }
  
  int avg = sum / count;
  cout << "\nNumber of ints in file: " << count << endl;
  cout << "Sum of all ints: " << sum << endl;
  cout << "Average of the ints: " << avg << endl;




  f.close();


  return 0;
}
