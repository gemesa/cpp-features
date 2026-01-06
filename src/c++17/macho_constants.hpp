#ifndef MACHO_CONSTANTS_HPP
#define MACHO_CONSTANTS_HPP

#include <cstdint>
// https://github.com/apple-oss-distributions/xnu/blob/f6217f891ac0bb64f3d375211650a4c1ff8ca1ea/EXTERNAL_HEADERS/mach-o/loader.h#L65
// https://github.com/apple-oss-distributions/xnu/blob/f6217f891ac0bb64f3d375211650a4c1ff8ca1ea/EXTERNAL_HEADERS/mach-o/loader.h#L84
inline constexpr uint32_t MH_MAGIC_64 = 0xfeedfacf;
inline constexpr uint32_t MH_MAGIC = 0xfeedface;

#endif // MACHO_CONSTANTS_HPP