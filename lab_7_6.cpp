#include <iostream>

using namespace std;

int main () {

  /* เขียนโปรแกรมตารางแม่สูตรคูณที่แสดงผลดังนี้

  Base    Mul   Result
  2       1     2
  2       2     4
  2       3     6
  2       4     8
  2       5     10
  2       6     12
  2       7     14
  2       8     16
  2       9     18
  2       10    20
  2       11    22
  2       12    24

  */

  cout <<"Base\tMul\tResult\t"<<endl;
  int e;
  for (e=1; e<=12;e++){
  cout << "2\t"<<e<<"\t"<<2*e<<endl;
  }
}
