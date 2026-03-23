#include "bit_length.h"

#include <cmath>

auto bit_length(const int bits) noexcept -> unsigned {
  return static_cast<unsigned>(std::log2(bits) + 1);
}
