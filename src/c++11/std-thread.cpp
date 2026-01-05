#include <iostream>
#include <mutex>
#include <thread>

std::mutex printMutex;

void analyze(const char *segment) {
  std::lock_guard<std::mutex> lock(printMutex);
  std::cout << "Thread " << std::this_thread::get_id() << " analyzing "
            << segment << "\n";
}

int main() {
  std::thread t1(analyze, "__TEXT");
  std::thread t2(analyze, "__DATA");

  t1.join();
  t2.join();

  std::cout << "Done.\n";

  return 0;
}