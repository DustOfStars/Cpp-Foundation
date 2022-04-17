#include <iostream>
using namespace std;

void display(int masks[]);

int main() {
  int marks[5] = {88, 95, 75, 69, 59};
  display(marks);
  return 0;
}

void display(int m[5]) {
  cout << "显示分数： " << endl;
  for (int i = 0; i < 5; ++i) {
    cout << "Student " << i + 1 << ": " << m[i] << endl;
  }
}
