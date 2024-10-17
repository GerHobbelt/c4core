#include "c4/char_traits.hpp"

namespace c4 {

// warning C5041: 'whitespace_chars': out-of-line definition for constexpr static data member is not needed and is deprecated in C++17

#if __cplusplus < 202000L

constexpr const char char_traits< char >::whitespace_chars[];
constexpr const size_t char_traits< char >::num_whitespace_chars;
constexpr const wchar_t char_traits< wchar_t >::whitespace_chars[];
constexpr const size_t char_traits< wchar_t >::num_whitespace_chars;

#endif

} // namespace c4
