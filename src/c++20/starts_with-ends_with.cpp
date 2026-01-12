#include <iostream>
#include <string>
#include <string_view>

void classifySymbol(std::string_view sym) {
  if (sym.starts_with("_OBJC_")) {
    std::cout << sym << ": ObjC metadata.\n";
  } else if (sym.starts_with("_Z")) {
    std::cout << sym << ": C++ mangled.\n";
  } else if (sym.ends_with("_block_invoke")) {
    std::cout << sym << ": ObjC block.\n";
  } else {
    std::cout << sym << ": Other.\n";
  }
}

int main() {
  // https://stackoverflow.com/questions/12323417/symbol-not-found-objc-class-nsobject
  classifySymbol("_OBJC_CLASS_$_NSObject");
  // https://en.wikipedia.org/wiki/Name_mangling
  classifySymbol("_ZN9org8wikipedia7Article6formatEv");
  // https://apple-dev.groups.io/g/xcode/topic/symbolic_breakpoints_some/34200828
  classifySymbol(
      "-[UIPresentationController runTransitionForCurrentState]_block_invoke");
  return 0;
}