#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
  fs::path app = "/Applications/Firefox.app/Contents/MacOS/firefox";

  if (fs::exists(app)) {
    std::cout << "Binary: " << app.filename() << "\n";
    std::cout << "Size: " << fs::file_size(app) << " bytes.\n";
  }

  fs::path frameworks = "/System/Library/Frameworks";
  int count = 0;
  for (const auto &entry : fs::directory_iterator(frameworks)) {
    if (entry.path().extension() == ".framework") {
      std::cout << entry.path().filename() << "\n";
      ++count;
      if (count == 3) {
        break;
      }
    }
  }

  return 0;
}
