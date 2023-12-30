#ifndef STRINGALGO_HPP
#define STRINGALGO_HPP

#include <array>
#include <string>
#include <sstream>
#include <iomanip>


/// <summary>
/// Direction enumeration
/// </summary>
enum class Direction { Forward, Backward };


/// <summary>
///  find numeric digit within a string or -1 if none found
/// </summary>
/// <param name="line"></param>
/// <param name="direction"></param>
/// <param name="pos"></param>
/// <returns></returns>
int32_t find_digit(std::string& line, Direction direction, int32_t& pos);


/// <summary>
///  find spelled digit within a string or -1 if none found
/// </summary>
/// <param name="line"></param>
/// <param name="direction"></param>
/// <param name="pos"></param>
/// <returns></returns>
int32_t find_spelled_digit(std::string& line, Direction direction, int32_t& pos);


/// 
template <class Iter>
std::string digit_to_string(Iter begin, Iter end, const bool uppercase) {
   std::ostringstream oss;

   if (uppercase) {
      oss.setf(std::ios_base::uppercase);
   }

   for (; begin != end; ++begin) {
      oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(*begin);
   }

   return oss.str();
}


template <class Dgt>
std::string digit_to_string(const Dgt& d, const bool uppercase = false) {
   return digit_to_string(std::cbegin(d), std::cend(d), uppercase);
}

#endif // STRINGALGO_HPP
