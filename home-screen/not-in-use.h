#include <string>
#include <iostream>
#include <sstream>



// Moon
#define ICON_moon_first_quarter "\U000F0F61"
#define ICON_moon_full "\U000F0F62"
#define ICON_moon_last_quarter "\U000F0F63"
#define ICON_moon_new "\U000F0F64"
#define ICON_moon_waning_crescent "\U000F0F65"
#define ICON_moon_waning_gibbous "\U000F0F66"
#define ICON_moon_waxing_crescent "\U000F0F67"
#define ICON_moon_waxing_gibbous "\U000F0F68"



std::string moonToIcon(std::string moonPhase)
{
  if (moonPhase == "new_moon") return ICON_moon_new;
  if (moonPhase == "waxing_crescent") return ICON_moon_waxing_crescent;
  if (moonPhase == "first_quarter") return ICON_moon_first_quarter;
  if (moonPhase == "waxing_gibbous") return ICON_moon_waxing_gibbous;
  if (moonPhase == "full_moon") return ICON_moon_full;
  if (moonPhase == "waning_gibbous") return ICON_moon_waning_gibbous;
  if (moonPhase == "last_quarter") return ICON_moon_last_quarter;
  if (moonPhase == "waning_crescent") return ICON_moon_waning_crescent;
  return "";
}

std::vector<std::string> splitStringIntoVector(std::string sentence, int lineLength)
{
  // This is not the most efficient way of splitting strings, but will do the job for now!
  std::string s = sentence;
  std::vector<std::string> result;

  std::replace( s.begin(), s.end(), ',', ' ');

  std::istringstream iss(s);
  std::string line;

  do {
    std::string word;
    iss >> word;
    if (line.length() + word.length() > lineLength) {
      result.push_back(line);
      line.clear();
    }
    line += word + ",";

  }while (iss);

  if (!line.empty()) {
    result.push_back(line);
  }

  return result;
}
