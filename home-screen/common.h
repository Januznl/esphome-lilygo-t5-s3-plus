#include <string>
#include <iostream>
#include <sstream>

// Conditions
#define ICON_w_clear_night "\U000F0594"
#define ICON_w_clear "\U000F0599"
#define ICON_w_cloudy "\U000F0590"
#define ICON_w_fog "\U000F0591"
#define ICON_w_hail "\U000F0592"
#define ICON_w_lightning "\U000F0593"
#define ICON_w_lightning_rainy "\U000F067E"
#define ICON_w_pouring "\U000F0596"
#define ICON_w_rainy "\U000F0596"
#define ICON_w_snowy "\U000F0F36"
#define ICON_w_snowy_rainy "\U000F067F"
#define ICON_w_sunny "\U000F0599"
#define ICON_w_windy "\U000F059D"
#define ICON_w_windy_variant "\U000F059E"
#define ICON_w_exceptional "\U000F0F38"
#define ICON_w_partly_cloudy "\U000F0595"
#define ICON_w_partly_cloudy_night "\U000F0F31"
#define ICON_w_partly_cloudy_rain "\U000F0F33"
#define ICON_w_partly_cloudy_light_rain "\U000F0F33"
#define ICON_w_partlycloudy_light_snow "\U000F0F35"
#define ICON_w_partlycloudy_snow "\U000F0F34"
#define ICON_w_partlycloudy_lightning "\U000F0F32"
#define ICON_w_light_rain "\U000F0597"
#define ICON_w_partly_cloudy_fog "\U000F0591"
#define ICON_w_light_snow "\U000F0598"
#define ICON_w_unknown "\U000F1522"



// Battery
#define ICON_bat_empty	"\U000F008E"
#define ICON_bat_10	"\U000F007A"
#define ICON_bat_20	"\U000F007B"
#define ICON_bat_30	"\U000F007C"
#define ICON_bat_40	"\U000F007D"
#define ICON_bat_50	"\U000F007E"
#define ICON_bat_60	"\U000F007F"
#define ICON_bat_70	"\U000F0080"
#define ICON_bat_80	"\U000F0081"
#define ICON_bat_90	"\U000F0082"
#define ICON_bat_100	"\U000F0079"

// Wifi
#define ICON_wifi_off "\U000F092D"
#define ICON_wifi_1 "\U000F091F"
#define ICON_wifi_2 "\U000F0922"
#define ICON_wifi_3 "\U000F0925"
#define ICON_wifi_4 "\U000F0928"


std::string conditionToIconBuienRadar(std::string condition, bool daytime)
{
  if (condition == "clear" && daytime) return ICON_w_clear;
  if (condition == "clear" && !daytime) return ICON_w_clear_night;
  if (condition == "partlycloudy" && daytime) return ICON_w_partly_cloudy;
  if (condition == "partlycloudy" && !daytime) return ICON_w_partly_cloudy_night;
  if (condition == "partlycloudy-rain") return ICON_w_partly_cloudy_rain;
  if (condition == "partlycloudy-fog") return ICON_w_partly_cloudy_fog;
  if (condition == "partlycloudy-light-rain") return ICON_w_partly_cloudy_light_rain;
  if (condition == "cloudy") return ICON_w_cloudy;
  if (condition == "fog") return ICON_w_fog;
  if (condition == "rainy") return ICON_w_rainy;
  if (condition == "light-rain") return ICON_w_light_rain;
  if (condition == "snowy") return ICON_w_snowy;
  if (condition == "snowy-rainy") return ICON_w_snowy_rainy;
  if (condition == "light-snow") return ICON_w_light_snow;
  if (condition == "lightning") return ICON_w_lightning;
  if (condition == "partlycloudy-light-snow") return ICON_w_partlycloudy_light_snow;
  if (condition == "partlycloudy-snow") return ICON_w_partlycloudy_snow;
  if (condition == "partlycloudy-lightning") return ICON_w_partlycloudy_lightning;
  return ICON_w_unknown;
}


std::string batteryToIcon(float battery)
{
  if (battery > 90) return ICON_bat_100;
  if (battery > 80) return ICON_bat_90;
  if (battery > 70) return ICON_bat_80;
  if (battery > 60) return ICON_bat_70;
  if (battery > 50) return ICON_bat_60;
  if (battery > 40) return ICON_bat_50;
  if (battery > 30) return ICON_bat_40;
  if (battery > 20) return ICON_bat_30;
  if (battery > 10) return ICON_bat_20;
  if (battery > 0) return ICON_bat_10;
  return ICON_bat_empty;
}

std::string wifiToIcon(float wifi_signal_strength)
{
  if (wifi_signal_strength >= 75) return ICON_wifi_4;
  if (wifi_signal_strength >= 50) return ICON_wifi_3;
  if (wifi_signal_strength >= 25) return ICON_wifi_2;
  if (wifi_signal_strength > 0) return ICON_wifi_1;
  return ICON_wifi_off;
}
