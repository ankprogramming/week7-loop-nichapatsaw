#include <iostream>

using namespace std;

int main() {

  cout << "For to while" << endl;

  // ตัวอย่างโปรแกรมที่ใช้ for

  int i = 0;
  for (i = 0; i < 10; i++) {
    cout << "Run from for" << endl;
  }
  cout << "************END FOR************" << endl;

  // เขียนโปรแกรมที่ทำงานเหมือนด้านบนโดยใช้ while แทน for
int e =0;
while (e<10){
    cout << "Run From while"<< endl;
    e++;
}
  cout << "************END FOR************" << endl;

  return 0;
}
