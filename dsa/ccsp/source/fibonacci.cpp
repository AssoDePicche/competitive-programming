#include "fibonacci.h"

auto fibonacci(const unsigned n) noexcept -> unsigned {
  if (n == 0) {
    return n;
  }

  auto last{0u};

  auto next{1u};

  for (auto iteration{0u}; iteration < n; ++iteration) {
    const auto buffer{last};

    last = next;

    next += buffer;
  }

  return next;
}
