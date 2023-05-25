#include <iostream>
#include <thread>

using namespace std;

void cpu_waster() {
  while (true) {
    // Do nothing.
  }
}

int main() {
  cout << "Main thread started." << endl;

  thread t1(cpu_waster);
  thread t2(cpu_waster);

  t1.join();
  t2.join();

  cout << "Main thread finished." << endl;

  return 0;
}
