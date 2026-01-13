#include <cstdint>

#if INTPTR_MAX == INT32_MAX
#warning "32-bit build. Address space limited."
#endif

int main() { return 0; }