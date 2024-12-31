#pragma once

#include <array>
#include <cassert>
#include <stdint.h>
#include <string>
#include <utility>

#include "defines.h"
#include "helpers.h"

namespace esphome {
namespace nspanel_lovelace {

enum class render_page_option : uint8_t { prev, next, screensaver, default_page };

enum class alarm_arm_action : uint8_t { arm_home, arm_away, arm_night, arm_vacation, arm_custom_bypass };

struct icon_t {
  static constexpr const icon_char_t* account = u8"\uE003";
  static constexpr const icon_char_t* air_humidifier = u8"\uF098";
  static constexpr const icon_char_t* alert_circle = u8"\uE027";
  static constexpr const icon_char_t* alert_circle_outline = u8"\uE5D5";
  static constexpr const icon_char_t* arrow_bottom_left = u8"\uE041";
  static constexpr const icon_char_t* arrow_collapse_horizontal = u8"\uE84B";
  static constexpr const icon_char_t* arrow_down = u8"\uE044";
  static constexpr const icon_char_t* arrow_expand_horizontal = u8"\uE84D";
  static constexpr const icon_char_t* arrow_left_bold = u8"\uE730";
  static constexpr const icon_char_t* arrow_right_bold = u8"\uE733";
  static constexpr const icon_char_t* arrow_top_right = u8"\uE05B";
  static constexpr const icon_char_t* arrow_up = u8"\uE05C";
  static constexpr const icon_char_t* arrow_up_bold = u8"\uE736";
  static constexpr const icon_char_t* battery = u8"\uE078";
  static constexpr const icon_char_t* battery_charging = u8"\uE083";
  static constexpr const icon_char_t* battery_outline = u8"\uE08D";
  static constexpr const icon_char_t* bell_ring = u8"\uE09D";
  static constexpr const icon_char_t* blinds = u8"\uE0AB";
  static constexpr const icon_char_t* blinds_open = u8"\uF010";
  static constexpr const icon_char_t* brightness_5 = u8"\uE0DD";
  static constexpr const icon_char_t* brightness_7 = u8"\uE0DF";
  static constexpr const icon_char_t* calendar = u8"\uE0EC";
  static constexpr const icon_char_t* calendar_clock = u8"\uE0EF";
  static constexpr const icon_char_t* calendar_sync = u8"\uEE8D";
  static constexpr const icon_char_t* cash = u8"\uE113";
  static constexpr const icon_char_t* chart_bell_curve = u8"\uEC4F";
  static constexpr const icon_char_t* check_circle = u8"\uE5DF";
  static constexpr const icon_char_t* check_network_outline = u8"\uEC53";
  static constexpr const icon_char_t* checkbox_blank_circle = u8"\uE12E";
  static constexpr const icon_char_t* checkbox_marked_circle = u8"\uE132";
  static constexpr const icon_char_t* circle_slice_8 = u8"\uEAA4";
  static constexpr const icon_char_t* close_network_outline = u8"\uEC5E";
  static constexpr const icon_char_t* crop_portrait = u8"\uE1A0";
  static constexpr const icon_char_t* cursor_text = u8"\uE5E6";
  static constexpr const icon_char_t* curtains = u8"\uF845";
  static constexpr const icon_char_t* curtains_closed = u8"\uF846";
  static constexpr const icon_char_t* door_closed = u8"\uE81A";
  static constexpr const icon_char_t* door_open = u8"\uE81B";
  static constexpr const icon_char_t* fan = u8"\uE20F";
  static constexpr const icon_char_t* fire = u8"\uE237";
  static constexpr const icon_char_t* flash = u8"\uE240";
  static constexpr const icon_char_t* format_color_text = u8"\uE69D";
  static constexpr const icon_char_t* garage = u8"\uE6D8";
  static constexpr const icon_char_t* garage_open = u8"\uE6D9";
  static constexpr const icon_char_t* gas_cylinder = u8"\uE646";
  static constexpr const icon_char_t* gate = u8"\uE298";
  static constexpr const icon_char_t* gate_open = u8"\uF169";
  static constexpr const icon_char_t* gauge = u8"\uE299";
  static constexpr const icon_char_t* gesture_tap_button = u8"\uF2A7";
  static constexpr const icon_char_t* help_circle_outline = u8"\uE624";
  static constexpr const icon_char_t* home = u8"\uE2DB";
  static constexpr const icon_char_t* home_outline = u8"\uE6A0";
  static constexpr const icon_char_t* light_switch = u8"\uE97D";
  static constexpr const icon_char_t* lightbulb = u8"\uE334";
  static constexpr const icon_char_t* link_box_outline = u8"\uED1A";
  static constexpr const icon_char_t* lock = u8"\uE33D";
  static constexpr const icon_char_t* lock_open = u8"\uE33E";
  static constexpr const icon_char_t* motion_sensor = u8"\uED90";
  static constexpr const icon_char_t* motion_sensor_off = u8"\uF434";
  static constexpr const icon_char_t* movie = u8"\uE380";
  static constexpr const icon_char_t* music = u8"\uE759";
  static constexpr const icon_char_t* music_note = u8"\uE386";
  static constexpr const icon_char_t* music_note_off = u8"\uE389";
  static constexpr const icon_char_t* open_in_app = u8"\uE3CA";
  static constexpr const icon_char_t* package = u8"\uE3D2";
  static constexpr const icon_char_t* package_up = u8"\uE3D4";
  static constexpr const icon_char_t* palette = u8"\uE3D7";
  static constexpr const icon_char_t* pause = u8"\uE3E3";
  static constexpr const icon_char_t* play = u8"\uE409";
  static constexpr const icon_char_t* playlist_music = u8"\uECB7";
  static constexpr const icon_char_t* playlist_play = u8"\uE410";
  static constexpr const icon_char_t* playlist_star = u8"\uEDF1";
  static constexpr const icon_char_t* power = u8"\uE424";
  static constexpr const icon_char_t* power_plug = u8"\uE6A4";
  static constexpr const icon_char_t* power_plug_off = u8"\uE6A5";
  static constexpr const icon_char_t* progress_alert = u8"\uECBB";
  static constexpr const icon_char_t* radiobox_blank = u8"\uE43C";
  static constexpr const icon_char_t* ray_vertex = u8"\uE444";
  static constexpr const icon_char_t* robot = u8"\uE6A8";
  static constexpr const icon_char_t* robot_vacuum = u8"\uE70C";
  static constexpr const icon_char_t* script_text = u8"\uEBC1";
  static constexpr const icon_char_t* shield = u8"\uE497";
  static constexpr const icon_char_t* shield_airplane = u8"\uE6BA";
  static constexpr const icon_char_t* shield_home = u8"\uE689";
  static constexpr const icon_char_t* shield_lock = u8"\uE99C";
  static constexpr const icon_char_t* shield_moon = u8"\uF827";
  static constexpr const icon_char_t* shield_off = u8"\uE99D";
  static constexpr const icon_char_t* shuffle = u8"\uE49C";
  static constexpr const icon_char_t* shuffle_disable = u8"\uE49D";
  static constexpr const icon_char_t* signal = u8"\uE4A1";
  static constexpr const icon_char_t* smog = u8"\uEA70";
  static constexpr const icon_char_t* smoke_detector = u8"\uE391";
  static constexpr const icon_char_t* smoke_detector_alert = u8"\uF92D";
  static constexpr const icon_char_t* smoke_detector_variant = u8"\uF80A";
  static constexpr const icon_char_t* smoke_detector_variant_alert = u8"\uF92F";
  static constexpr const icon_char_t* snowflake = u8"\uE716";
  static constexpr const icon_char_t* speaker_off = u8"\uE4C3";
  static constexpr const icon_char_t* square = u8"\uE763";
  static constexpr const icon_char_t* square_outline = u8"\uE762";
  static constexpr const icon_char_t* stop = u8"\uE4DA";
  static constexpr const icon_char_t* temperature_celsius = u8"\uE503";
  static constexpr const icon_char_t* temperature_fahrenheit = u8"\uE504";
  static constexpr const icon_char_t* thermometer = u8"\uE50E";
  static constexpr const icon_char_t* timer = u8"\uF3AA";
  static constexpr const icon_char_t* timer_outline = u8"\uE51A";
  static constexpr const icon_char_t* vibrate = u8"\uE565";
  static constexpr const icon_char_t* video = u8"\uE566";
  static constexpr const icon_char_t* water = u8"\uE58B";
  static constexpr const icon_char_t* water_off = u8"\uE58C";
  static constexpr const icon_char_t* water_percent = u8"\uE58D";
  static constexpr const icon_char_t* weather_cloudy = u8"\uE58F";
  static constexpr const icon_char_t* weather_fog = u8"\uE590";
  static constexpr const icon_char_t* weather_hail = u8"\uE591";
  static constexpr const icon_char_t* weather_lightning = u8"\uE592";
  static constexpr const icon_char_t* weather_lightning_rainy = u8"\uE67D";
  static constexpr const icon_char_t* weather_night = u8"\uE593";
  static constexpr const icon_char_t* weather_partly_cloudy = u8"\uE594";
  static constexpr const icon_char_t* weather_partly_snowy_rainy = u8"\uEF34";
  static constexpr const icon_char_t* weather_pouring = u8"\uE595";
  static constexpr const icon_char_t* weather_rainy = u8"\uE596";
  static constexpr const icon_char_t* weather_snowy = u8"\uE597";
  static constexpr const icon_char_t* weather_sunny = u8"\uE598";
  static constexpr const icon_char_t* weather_sunset_down = u8"\uE59A";
  static constexpr const icon_char_t* weather_sunset_up = u8"\uE59B";
  static constexpr const icon_char_t* weather_windy = u8"\uE59C";
  static constexpr const icon_char_t* weather_windy_variant = u8"\uE59D";
  static constexpr const icon_char_t* window_closed = u8"\uE5AD";
  static constexpr const icon_char_t* window_open = u8"\uE5B0";
  static constexpr const icon_char_t* window_shutter = u8"\uF11B";
  static constexpr const icon_char_t* window_shutter_open = u8"\uF11D";
  
  static constexpr const icon_char_t* none = u8"";
};

struct Icon {
  // The codepoint value
  // default: mdi:05D6 (alert-circle-outline)
  const icon_char_t *value;
  // The rgb565 color
  // default: #ff3131 (red)
  uint16_t color;
  // The string representation of the rgb565 color
  const std::string color_str() const { return std::to_string(color); }

  constexpr Icon() : Icon(icon_t::alert_circle_outline, 63878u) { }
  constexpr Icon(const icon_char_t* value, const uint16_t color) : value(value), color(color) { }
};

struct entity_state {
  static constexpr const char* unknown = "unknown";
  static constexpr const char* unavailable = "unavailable";
  static constexpr const char* on = "on";
  static constexpr const char* off = "off";
  // cover
  static constexpr const char* open = "open";
  static constexpr const char* closed = "closed";
  // media_player
  static constexpr const char* playing = "playing";
  static constexpr const char* paused = "paused";
  // lock
  static constexpr const char* locked = "locked";
  static constexpr const char* unlocked = "unlocked";
  // alarm_control_panel
  static constexpr const char* disarmed = "disarmed";
  static constexpr const char* arming = "arming";
  static constexpr const char* pending = "pending";
  static constexpr const char* triggered = "triggered";
  static constexpr const char* armed_home = "armed_home";
  static constexpr const char* armed_away = "armed_away";
  static constexpr const char* armed_night = "armed_night";
  static constexpr const char* armed_vacation = "armed_vacation";
  static constexpr const char* armed_custom_bypass = "armed_custom_bypass";
  // sun
  static constexpr const char* above_horizon = "above_horizon";
  static constexpr const char* below_horizon = "below_horizon";
  // vacuum
  static constexpr const char* docked = "docked";
  // person
  static constexpr const char* home = "home";
  static constexpr const char* not_home = "not_home";
  // timer
  static constexpr const char* idle = "idle";
  // climate
  static constexpr const char* cool = "cool";
  static constexpr const char* dry = "dry";
  static constexpr const char* heat = "heat";
  static constexpr const char* heat_cool = "heat_cool";
  static constexpr const char* fan_only = "fan_only";
  static constexpr const char* auto_ = "auto";

};

struct generic_type {
  static constexpr const char* enable = "enable";
  static constexpr const char* disable = "disable";
  static constexpr const char* empty = "";
};

struct weather_type {
  static constexpr const char* sunny = "sunny";
  static constexpr const char* windy = "windy";
  static constexpr const char* windy_variant = "windy-variant";
  static constexpr const char* cloudy = "cloudy";
  static constexpr const char* partlycloudy = "partlycloudy";
  static constexpr const char* clear_night = "clear-night";
  static constexpr const char* exceptional = "exceptional";
  static constexpr const char* rainy = "rainy";
  static constexpr const char* pouring = "pouring";
  static constexpr const char* snowy = "snowy";
  static constexpr const char* snowy_rainy = "snowy-rainy";
  static constexpr const char* fog = "fog";
  static constexpr const char* hail = "hail";
  static constexpr const char* lightning = "lightning";
  static constexpr const char* lightning_rainy = "lightning-rainy";
};

struct button_type {
  static constexpr const char* bExit = "bExit";
  static constexpr const char* sleepReached = "sleepReached";
  static constexpr const char* onOff = "OnOff";
  static constexpr const char* numberSet = "number-set";
  static constexpr const char* button = "button";

  // shutters and covers
  static constexpr const char* up = "up";
  static constexpr const char* stop = "stop";
  static constexpr const char* down = "down";
  static constexpr const char* positionSlider = "positionSlider";
  static constexpr const char* tiltOpen = "tiltOpen";
  static constexpr const char* tiltStop = "tiltStop";
  static constexpr const char* tiltClose = "tiltClose";
  static constexpr const char* tiltSlider = "tiltSlider";

  // media page
  static constexpr const char* mediaNext = "media-next";
  static constexpr const char* mediaBack = "media-back";
  static constexpr const char* mediaPause = "media-pause";
  static constexpr const char* mediaOnOff = "media-OnOff";
  static constexpr const char* mediaShuffle = "media-shuffle";
  static constexpr const char* volumeSlider = "volumeSlider";
  static constexpr const char* speakerSel = "speaker-sel";
  static constexpr const char* modeMediaPlayer = "mode-media_player";

  // light page
  static constexpr const char* brightnessSlider = "brightnessSlider";
  static constexpr const char* colorTempSlider = "colorTempSlider";
  static constexpr const char* colorWheel = "colorWheel";
  static constexpr const char* modeLight = "mode-light";

  // climate page
  static constexpr const char* tempUpd = "tempUpd";
  static constexpr const char* tempUpdHighLow = "tempUpdHighLow";
  static constexpr const char* hvacAction = "hvac_action";
  static constexpr const char* modePresetModes = "mode-preset_modes";
  static constexpr const char* modeSwingModes = "mode-swing_modes";
  static constexpr const char* modeFanModes = "mode-fan_modes";

  // alarm page
  static constexpr const char* disarm = "disarm";
  static constexpr const char* armHome = "arm_home";
  static constexpr const char* armAway = "arm_away";
  static constexpr const char* armNight = "arm_night";
  static constexpr const char* armVacation = "arm_vacation";
  static constexpr const char* armCustomBypass = "arm_custom_bypass";
  static constexpr const char* opnSensorNotify = "opnSensorNotify";

  // unlock page
  static constexpr const char* cardUnlockUnlock = "cardUnlock-unlock";

  // timer detail page
  static constexpr const char* timerStart = "timer-start";
  static constexpr const char* timerCancel = "timer-cancel";
  static constexpr const char* timerPause = "timer-pause";
  static constexpr const char* timerFinish = "timer-finish";

  static constexpr const char* modeInputSelect = "mode-input_select";
  static constexpr const char* modeSelect = "mode-select";
};

struct entity_type {
  static constexpr const char* scene = "scene";
  static constexpr const char* script = "script";
  static constexpr const char* light = "light";
  static constexpr const char* switch_ = "switch";
  static constexpr const char* input_boolean = "input_boolean";
  static constexpr const char* automation = "automation";
  static constexpr const char* fan = "fan";
  static constexpr const char* lock = "lock";
  static constexpr const char* button = "button";
  static constexpr const char* input_button = "input_button";
  static constexpr const char* input_select = "input_select";
  static constexpr const char* number = "number";
  static constexpr const char* input_number = "input_number";
  static constexpr const char* vacuum = "vacuum";
  static constexpr const char* timer = "timer";
  static constexpr const char* person = "person";
  static constexpr const char* service = "service";
  
  static constexpr const char* cover = "cover";
  static constexpr const char* sensor = "sensor";
  static constexpr const char* binary_sensor = "binary_sensor";
  static constexpr const char* input_text = "input_text";
  static constexpr const char* text = "text"; //added
  static constexpr const char* select = "select";
  static constexpr const char* alarm_control_panel = "alarm_control_panel";
  static constexpr const char* media_player = "media_player";
  static constexpr const char* sun = "sun";
  static constexpr const char* climate = "climate";
  static constexpr const char* weather = "weather";

  // internal (non HA) types
  static constexpr const char* nav_up = "navUp";
  static constexpr const char* nav_prev = "navPrev";
  static constexpr const char* nav_next = "navNext";
  static constexpr const char* uuid = "uuid";
  static constexpr const char* navigate = "navigate";
  static constexpr const char* navigate_uuid = "navigate.uuid";
  static constexpr const char* itext = "iText";
  static constexpr const char* delete_ = "delete";
};

struct entity_render_type {
  static constexpr const char* text = "text";
  static constexpr const char* shutter = "shutter";
  static constexpr const char* input_sel = "input_sel";
  static constexpr const char* media_pl = "media_pl";
};

struct entity_cover_type {
  static constexpr const char* awning = "awning";
  static constexpr const char* blind = "blind";
  static constexpr const char* curtain = "curtain";
  static constexpr const char* damper = "damper";
  static constexpr const char* door = "door";
  static constexpr const char* garage = "garage";
  static constexpr const char* gate = "gate";
  static constexpr const char* shade = "shade";
  static constexpr const char* shutter = "shutter";
  static constexpr const char* window = "window";
};

struct sensor_type {
  // sensor_mapping
  static constexpr const char* apparent_power = "apparent_power";
  static constexpr const char* aqi = "aqi";
  static constexpr const char* battery = "battery";
  static constexpr const char* carbon_dioxide = "carbon_dioxide";
  static constexpr const char* carbon_monoxide = "carbon_monoxide";
  static constexpr const char* current = "current";
  static constexpr const char* date = "date";
  static constexpr const char* duration = "duration";
  static constexpr const char* energy = "energy";
  static constexpr const char* frequency = "frequency";
  static constexpr const char* gas = "gas";
  static constexpr const char* humidity = "humidity";
  static constexpr const char* illuminance = "illuminance";
  static constexpr const char* monetary = "monetary";
  static constexpr const char* nitrogen_dioxide = "nitrogen_dioxide";
  static constexpr const char* nitrogen_monoxide = "nitrogen_monoxide";
  static constexpr const char* nitrous_oxide = "nitrous_oxide";
  static constexpr const char* ozone = "ozone";
  static constexpr const char* pm1 = "pm1";
  static constexpr const char* pm10 = "pm10";
  static constexpr const char* pm25 = "pm25";
  static constexpr const char* power_factor = "power_factor";
  static constexpr const char* power = "power";
  static constexpr const char* pressure = "pressure";
  static constexpr const char* reactive_power = "reactive_power";
  static constexpr const char* signal_strength = "signal_strength";
  static constexpr const char* sulphur_dioxide = "sulphur_dioxide";
  static constexpr const char* temperature = "temperature";
  static constexpr const char* timestamp = "timestamp";
  static constexpr const char* volatile_organic_compounds = "volatile_organic_compounds";
  static constexpr const char* voltage = "voltage";

  // sensor_mapping_on
  static constexpr const char* battery_charging = "battery_charging";
  static constexpr const char* cold = "cold";
  static constexpr const char* connectivity = "connectivity";
  static constexpr const char* door = "door";
  static constexpr const char* garage_door = "garage_door";
  static constexpr const char* problem = "problem";
  static constexpr const char* safety = "safety";
  static constexpr const char* tamper = "tamper";
  static constexpr const char* smoke = "smoke";
  static constexpr const char* heat = "heat";
  static constexpr const char* light = "light";
  static constexpr const char* lock = "lock";
  static constexpr const char* moisture = "moisture";
  static constexpr const char* motion = "motion";
  static constexpr const char* occupancy = "occupancy";
  static constexpr const char* opening = "opening";
  static constexpr const char* plug = "plug";
  static constexpr const char* presence = "presence";
  static constexpr const char* running = "running";
  static constexpr const char* sound = "sound";
  static constexpr const char* update = "update";
  static constexpr const char* vibration = "vibration";
  static constexpr const char* window = "window";
};

enum class page_type : uint8_t {
  unknown,
  screensaver,
  screensaver2,
  cardGrid,
  cardGrid2,
  cardGrid3,
  cardGrid4,
  cardGrid5,
  cardEntities,
  cardThermo,
  cardMedia,
  cardUnlock,
  cardQR,
  cardPower,
  cardAlarm,
  popupLight,
};
static constexpr const char* page_type_names [] = {
  "",
  "screensaver",
  "screensaver2",
  "cardGrid",
  "cardGrid2",
  "cardGrid3",
  "cardGrid4",
  "cardGrid5",
  "cardEntities",
  "cardThermo",
  "cardMedia",
  "cardUnlock",
  "cardQR",
  "cardPower",
  "cardAlarm",
  "popupLight",
};

inline const char *to_string(page_type type) {
  if ((size_t)type >= (sizeof(page_type_names) / sizeof(*page_type_names)))
    return nullptr;
  return page_type_names[(uint8_t)type];
}

struct action_type {
  static constexpr const char* buttonPress2 = "buttonPress2";
  static constexpr const char* pageOpenDetail = "pageOpenDetail";
  static constexpr const char* sleepReached = button_type::sleepReached;
  static constexpr const char* startup = "startup";
};

struct ha_action_type {
  static constexpr const char* turn_on = "turn_on";
  static constexpr const char* turn_off = "turn_off";
  static constexpr const char* press = "press";
  static constexpr const char* toggle = "toggle";
  static constexpr const char* open_cover = "open_cover";
  static constexpr const char* close_cover = "close_cover";
  static constexpr const char* stop_cover = "stop_cover";
  static constexpr const char* set_cover_position = "set_cover_position";
  static constexpr const char* open_cover_tilt = "open_cover_tilt";
  static constexpr const char* close_cover_tilt = "close_cover_tilt";
  static constexpr const char* stop_cover_tilt = "stop_cover_tilt";
  static constexpr const char* set_cover_tilt_position = "set_cover_tilt_position";
  static constexpr const char* set_temperature = "set_temperature";
  static constexpr const char* set_hvac_mode = "set_hvac_mode";
  static constexpr const char* set_preset_mode = "set_preset_mode";
  static constexpr const char* set_swing_mode = "set_swing_mode";
  static constexpr const char* set_fan_mode = "set_fan_mode";
  static constexpr const char* media_next_track = "media_next_track";
  static constexpr const char* media_previous_track = "media_previous_track";
  static constexpr const char* media_play_pause = "media_play_pause";
  static constexpr const char* shuffle_set = "shuffle_set";
  static constexpr const char* volume_set = "volume_set";
  static constexpr const char* select_source = "select_source";
  static constexpr const char* select_next = "select_next";
  static constexpr const char* start = "start";
  static constexpr const char* return_to_base = "return_to_base";
  static constexpr const char* lock = "lock";
  static constexpr const char* unlock = "unlock";
  static constexpr const char* select_option = "select_option";
  static constexpr const char* set_percentage = "set_percentage";
  static constexpr const char* set_value = "set_value";

  // others not in HA
  static constexpr const char* pause = "pause";
  static constexpr const char* cancel = "cancel";
  static constexpr const char* finish = "finish";
  // static constexpr const char* disarm = "disarm";
  // static constexpr const char* start_cleaning = "start_cleaning";
  // static constexpr const char* resume_cleaning = "resume_cleaning";
  // static constexpr const char* run = "run";
};

enum class ha_attr_type : uint8_t {
  unknown,
  // general
  entity_id,
  state,
  device_class,
  supported_features,
  unit_of_measurement,
  // light
  brightness,
  min_mireds,
  max_mireds,
  supported_color_modes,
  color_mode,
  color_temp,
  rgb_color,
  effect_list,
  effect,
  // alarm_control_panel
  code,
  code_arm_required,
  open_sensors,
  // cover
  current_position,
  position,
  current_tilt_position,
  tilt_position,
  // weather & climate
  temperature,
  temperature_unit,
  forecast,
  // timer
  duration,
  remaining,
  editable,
  finishes_at,
  // climate & fan (only preset_mode,preset_modes)
  current_temperature,
  target_temp_high,
  target_temp_low,
  target_temp_step,
  min_temp,
  max_temp,
  hvac_action,
  preset_mode,
  preset_modes,
  swing_mode,
  swing_modes,
  fan_mode,
  fan_modes,
  hvac_mode,
  hvac_modes,
  // media
  media_title,
  media_artist,
  volume_level,
  shuffle,
  media_content_type,
  source,
  source_list,
  // input & input_select
  options,
  option,
  // number & input_number
  min,
  max,
  value,
  // fan
  percentage,
  percentage_step,
};

static constexpr const char* ha_attr_names [] = {
  "",
  // general
  "entity_id",
  "state",
  "device_class",
  "supported_features",
  "unit_of_measurement",
  // light
  "brightness",
  "min_mireds",
  "max_mireds",
  "supported_color_modes",
  "color_mode",
  "color_temp",
  "rgb_color",
  "effect_list",
  "effect",
  // alarm_control_panel
  "code",
  "code_arm_required",
  "open_sensors",
  // cover
  "current_position",
  "position",
  "current_tilt_position",
  "tilt_position",
  // weather & climate
  "temperature",
  "temperature_unit",
  "forecast",
  // timer
  "duration",
  "remaining",
  "editable",
  "finishes_at",
  // climate & fan (only preset_mode,preset_modes)
  "current_temperature",
  "target_temp_high",
  "target_temp_low",
  "target_temp_step",
  "min_temp",
  "max_temp",
  "hvac_action",
  "preset_mode",
  "preset_modes",
  "swing_mode",
  "swing_modes",
  "fan_mode",
  "fan_modes",
  "hvac_mode",
  "hvac_modes",
  // media
  "media_title",
  "media_artist",
  "volume_level",
  "shuffle",
  "media_content_type",
  "source",
  "source_list",
  // input & input_select
  "options",
  "option",
  // number & input_number
  "min",
  "max",
  "value",
  // fan
  "percentage",
  "percentage_step",
};

inline const char *to_string(ha_attr_type attr) {
  if ((size_t)attr >= (sizeof(ha_attr_names) / sizeof(*ha_attr_names)))
    return nullptr;
  return ha_attr_names[(uint8_t)attr];
}

inline ha_attr_type to_ha_attr(const std::string &attr) {
  for (uint8_t i = 0; i < (sizeof(ha_attr_names) / sizeof(*ha_attr_names)); i++) {
    if (attr == ha_attr_names[i]) return static_cast<ha_attr_type>(i);
  }
  return ha_attr_type::unknown;
}

struct ha_attr_color_mode {
  static constexpr const char* onoff = "onoff";
  static constexpr const char* color_temp = "color_temp";
  static constexpr const char* xy = "xy";
  static constexpr const char* hs = "hs";
  static constexpr const char* rgb = "rgb";
  static constexpr const char* rgbw = "rgbw";
  static constexpr const char* rgbww = "rgbww";
};

struct ha_attr_media_content_type {
  static constexpr const char* music = "music";
  static constexpr const char* tvshow = "tvshow";
  static constexpr const char* video = "video";
  static constexpr const char* episode = "episode";
  static constexpr const char* channel = "channel";
  static constexpr const char* playlist = "playlist";
  static constexpr const char* app = "app";
  static constexpr const char* url = "url";
};

enum class datetime_mode : uint8_t {
  date = 1<<0,
  time = 1<<1,
  both = date | time
};
inline datetime_mode operator|(datetime_mode a, datetime_mode b) {
  return static_cast<datetime_mode>(static_cast<uint8_t>(a) | static_cast<uint8_t>(b));
}
inline datetime_mode operator&(datetime_mode a, datetime_mode b) {
  return static_cast<datetime_mode>(static_cast<uint8_t>(a) & static_cast<uint8_t>(b));
}

// note: The FrozenCharMap is designed to avoid dynamic memory allocation by
//       making use of std::array instead of std::map
template <typename Value, size_t Size>
using FrozenCharMap = const std::array<std::pair<const char *, Value>, Size>;

template<typename Value, size_t Size>
inline bool try_get_value(
    const FrozenCharMap<Value, Size> &map,
    Value &return_value,
    const char *key,
    const char *fallback_key = nullptr) {
  if (map.size() == 0)
    return false;

  const char *key_cstr = key;
  do {
    if ((key_cstr != nullptr && strlen(key_cstr) > 0)) {
      auto it = map.begin();
      for (; it != map.end(); ++it) {
        if (!str_equal(it->first, key_cstr)) continue;
        return_value = it->second;
        return true;
      }
    }
    if (key_cstr == fallback_key || 
        fallback_key == nullptr || strlen(fallback_key) == 0)
      return false;
    key_cstr = fallback_key;
  } while (true);

  return false;
}

template<typename Value, size_t Size>
inline bool try_get_value(
    const FrozenCharMap<Value, Size> &map,
    Value &return_value,
    const std::string &key,
    const char *fallback_key = nullptr) {
  return try_get_value(map, return_value, key.c_str(), fallback_key);
}

template<typename Value, size_t Size>
inline const Value &get_value_or_default(
    const FrozenCharMap<Value, Size> &map,
    const std::string &key,
    const Value &default_value,
    const char *fallback_key = nullptr) {
  // todo: fix this bad implementation
  //       use pointers and unwrap Value?
  static Value ret{};
  if (try_get_value(map, ret, key.c_str(), fallback_key))
    return ret;
  return default_value;
}

template<size_t Size>
inline const icon_char_t *get_icon(
    const FrozenCharMap<const icon_char_t *, Size> &map,
    const std::string &key,
    const char *fallback_key = nullptr) {
  return get_value_or_default(map, key, icon_t::alert_circle_outline, fallback_key);
}

// simple_type_mapping
static constexpr FrozenCharMap<const icon_char_t *, 22> ENTITY_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{entity_type::button, icon_t::gesture_tap_button},
  std::pair<const char*, const icon_char_t*>{entity_type::navigate, icon_t::gesture_tap_button},
  std::pair<const char*, const icon_char_t*>{entity_type::input_button, icon_t::gesture_tap_button},
  std::pair<const char*, const icon_char_t*>{entity_type::input_select, icon_t::gesture_tap_button},
  std::pair<const char*, const icon_char_t*>{entity_type::scene, icon_t::palette},
  std::pair<const char*, const icon_char_t*>{entity_type::script, icon_t::script_text},
  std::pair<const char*, const icon_char_t*>{entity_type::switch_, icon_t::light_switch},
  std::pair<const char*, const icon_char_t*>{entity_type::automation, icon_t::robot},
  std::pair<const char*, const icon_char_t*>{entity_type::number, icon_t::ray_vertex},
  std::pair<const char*, const icon_char_t*>{entity_type::input_number, icon_t::ray_vertex},
  std::pair<const char*, const icon_char_t*>{entity_type::light, icon_t::lightbulb},
  std::pair<const char*, const icon_char_t*>{entity_type::fan, icon_t::fan},
  std::pair<const char*, const icon_char_t*>{entity_type::person, icon_t::account},
  std::pair<const char*, const icon_char_t*>{entity_type::vacuum, icon_t::robot_vacuum},
  std::pair<const char*, const icon_char_t*>{entity_type::timer, icon_t::timer_outline},

  std::pair<const char*, const icon_char_t*>{entity_type::nav_up, icon_t::arrow_up_bold},
  std::pair<const char*, const icon_char_t*>{entity_type::nav_prev, icon_t::arrow_left_bold},
  std::pair<const char*, const icon_char_t*>{entity_type::nav_next, icon_t::arrow_right_bold},
  std::pair<const char*, const icon_char_t*>{entity_type::itext, icon_t::format_color_text},
  std::pair<const char*, const icon_char_t*>{entity_type::input_text, icon_t::cursor_text}, //added
  std::pair<const char*, const icon_char_t*>{entity_type::text, icon_t::cursor_text}, //added
  std::pair<const char*, const icon_char_t*>{entity_type::select, icon_t::gesture_tap_button}, //added
}};

// sensor_mapping_on
static constexpr FrozenCharMap<const icon_char_t *, 27> SENSOR_ON_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{sensor_type::battery, icon_t::battery_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::battery_charging, icon_t::battery_charging},
  std::pair<const char*, const icon_char_t*>{sensor_type::carbon_monoxide, icon_t::smoke_detector_alert},
  std::pair<const char*, const icon_char_t*>{sensor_type::cold, icon_t::snowflake},
  std::pair<const char*, const icon_char_t*>{sensor_type::connectivity, icon_t::check_network_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::door, icon_t::door_open},
  std::pair<const char*, const icon_char_t*>{sensor_type::garage_door, icon_t::garage_open},
  std::pair<const char*, const icon_char_t*>{sensor_type::power, icon_t::power_plug},
  std::pair<const char*, const icon_char_t*>{sensor_type::gas, icon_t::alert_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::problem, icon_t::alert_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::safety, icon_t::alert_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::tamper, icon_t::alert_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::smoke, icon_t::smoke_detector_variant_alert},
  std::pair<const char*, const icon_char_t*>{sensor_type::heat, icon_t::fire},
  std::pair<const char*, const icon_char_t*>{sensor_type::light, icon_t::brightness_7},
  std::pair<const char*, const icon_char_t*>{sensor_type::lock, icon_t::lock_open},
  std::pair<const char*, const icon_char_t*>{sensor_type::moisture, icon_t::water},
  std::pair<const char*, const icon_char_t*>{sensor_type::motion, icon_t::motion_sensor},
  std::pair<const char*, const icon_char_t*>{sensor_type::occupancy, icon_t::home},
  std::pair<const char*, const icon_char_t*>{sensor_type::opening, icon_t::square_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::plug, icon_t::power_plug},
  std::pair<const char*, const icon_char_t*>{sensor_type::presence, icon_t::home},
  std::pair<const char*, const icon_char_t*>{sensor_type::running, icon_t::play},
  std::pair<const char*, const icon_char_t*>{sensor_type::sound, icon_t::music_note},
  std::pair<const char*, const icon_char_t*>{sensor_type::update, icon_t::package_up},
  std::pair<const char*, const icon_char_t*>{sensor_type::vibration, icon_t::vibrate},
  std::pair<const char*, const icon_char_t*>{sensor_type::window, icon_t::window_open}
}};

// sensor_mapping_off
static constexpr FrozenCharMap<const icon_char_t *, 27> SENSOR_OFF_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{sensor_type::battery, icon_t::battery},
  std::pair<const char*, const icon_char_t*>{sensor_type::battery_charging, icon_t::battery},
  std::pair<const char*, const icon_char_t*>{sensor_type::carbon_monoxide, icon_t::smoke_detector},
  std::pair<const char*, const icon_char_t*>{sensor_type::cold, icon_t::thermometer},
  std::pair<const char*, const icon_char_t*>{sensor_type::connectivity, icon_t::close_network_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::door, icon_t::door_closed},
  std::pair<const char*, const icon_char_t*>{sensor_type::garage_door, icon_t::garage},
  std::pair<const char*, const icon_char_t*>{sensor_type::power, icon_t::power_plug_off},
  std::pair<const char*, const icon_char_t*>{sensor_type::gas, icon_t::checkbox_marked_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::problem, icon_t::checkbox_marked_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::safety, icon_t::checkbox_marked_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::tamper, icon_t::check_circle},
  std::pair<const char*, const icon_char_t*>{sensor_type::smoke, icon_t::smoke_detector_variant},
  std::pair<const char*, const icon_char_t*>{sensor_type::heat, icon_t::thermometer},
  std::pair<const char*, const icon_char_t*>{sensor_type::light, icon_t::brightness_5},
  std::pair<const char*, const icon_char_t*>{sensor_type::lock, icon_t::lock},
  std::pair<const char*, const icon_char_t*>{sensor_type::moisture, icon_t::water_off},
  std::pair<const char*, const icon_char_t*>{sensor_type::motion, icon_t::motion_sensor_off},
  std::pair<const char*, const icon_char_t*>{sensor_type::occupancy, icon_t::home_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::opening, icon_t::square},
  std::pair<const char*, const icon_char_t*>{sensor_type::plug, icon_t::power_plug_off},
  std::pair<const char*, const icon_char_t*>{sensor_type::presence, icon_t::home_outline},
  std::pair<const char*, const icon_char_t*>{sensor_type::running, icon_t::stop},
  std::pair<const char*, const icon_char_t*>{sensor_type::sound, icon_t::music_note_off},
  std::pair<const char*, const icon_char_t*>{sensor_type::update, icon_t::package},
  std::pair<const char*, const icon_char_t*>{sensor_type::vibration, icon_t::crop_portrait},
  std::pair<const char*, const icon_char_t*>{sensor_type::window, icon_t::window_closed},
}};

// sensor_mapping
static constexpr FrozenCharMap<const icon_char_t *, 31> SENSOR_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{sensor_type::apparent_power, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::aqi, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::battery, icon_t::battery},
  std::pair<const char*, const icon_char_t*>{sensor_type::carbon_dioxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::carbon_monoxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::current, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::date, icon_t::calendar},
  std::pair<const char*, const icon_char_t*>{sensor_type::duration, icon_t::timer},
  std::pair<const char*, const icon_char_t*>{sensor_type::energy, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::frequency, icon_t::chart_bell_curve},
  std::pair<const char*, const icon_char_t*>{sensor_type::gas, icon_t::gas_cylinder},
  std::pair<const char*, const icon_char_t*>{sensor_type::humidity, icon_t::air_humidifier},
  std::pair<const char*, const icon_char_t*>{sensor_type::illuminance, icon_t::lightbulb},
  std::pair<const char*, const icon_char_t*>{sensor_type::monetary, icon_t::cash},
  std::pair<const char*, const icon_char_t*>{sensor_type::nitrogen_dioxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::nitrogen_monoxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::nitrous_oxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::ozone, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::pm1, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::pm10, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::pm25, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::power_factor, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::power, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::pressure, icon_t::gauge},
  std::pair<const char*, const icon_char_t*>{sensor_type::reactive_power, icon_t::flash},
  std::pair<const char*, const icon_char_t*>{sensor_type::signal_strength, icon_t::signal},
  std::pair<const char*, const icon_char_t*>{sensor_type::sulphur_dioxide, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::temperature, icon_t::thermometer},
  std::pair<const char*, const icon_char_t*>{sensor_type::timestamp, icon_t::calendar_clock},
  std::pair<const char*, const icon_char_t*>{sensor_type::volatile_organic_compounds, icon_t::smog},
  std::pair<const char*, const icon_char_t*>{sensor_type::voltage, icon_t::flash}
}};

// A map of icons and their respective color for each weather condition
// see:
//  - https://www.home-assistant.io/integrations/weather/
//  - 'get_entity_color' function in:
//  https://github.com/joBr99/nspanel-lovelace-ui/blob/main/apps/nspanel-lovelace-ui/luibackend/pages.py
//  - icon lookup:
//      - codepoint values: https://docs.nspanel.pky.eu/icon-cheatsheet.html
//      - icon mapping:
//      https://github.com/joBr99/nspanel-lovelace-ui/blob/main/apps/nspanel-lovelace-ui/luibackend/icon_mapping.py
//      - mdi icons: https://pictogrammers.com/library/mdi/
//  - color lookup:
//      - https://rgbcolorpicker.com/565
static constexpr FrozenCharMap<Icon, 15> WEATHER_ICON_MAP {{
  std::pair<const char*, Icon>{weather_type::sunny,           Icon{icon_t::weather_sunny, 65504u}}, // mdi:0599,#ffff00
  std::pair<const char*, Icon>{weather_type::windy,           Icon{icon_t::weather_windy, 38066u}}, // mdi:059D,#949694
  std::pair<const char*, Icon>{weather_type::windy_variant,   Icon{icon_t::weather_windy_variant, 64495u}}, // mdi:059E,#ff7d7b
  std::pair<const char*, Icon>{weather_type::cloudy,          Icon{icon_t::weather_cloudy, 31728u}}, // mdi:0590,#7b7d84
  std::pair<const char*, Icon>{weather_type::partlycloudy,    Icon{icon_t::weather_partly_cloudy, 38066u}}, // mdi:0595,#949694
  std::pair<const char*, Icon>{weather_type::clear_night,     Icon{icon_t::weather_night, 38060u}}, // mdi:0594,#949663
  std::pair<const char*, Icon>{weather_type::exceptional,     Icon{icon_t::alert_circle_outline, 63878u}}, // mdi:05D6,#ff3131
  std::pair<const char*, Icon>{weather_type::rainy,           Icon{icon_t::weather_rainy, 25375u}}, // mdi:0597,#6361ff
  std::pair<const char*, Icon>{weather_type::pouring,         Icon{icon_t::weather_pouring, 12703u}}, // mdi:0596,#3131ff
  std::pair<const char*, Icon>{weather_type::snowy,           Icon{icon_t::weather_snowy, 65535u}}, // mdi:E598,#ffffff
  std::pair<const char*, Icon>{weather_type::snowy_rainy,     Icon{icon_t::weather_partly_snowy_rainy, 38079u}}, // mdi:067F,#9496ff
  std::pair<const char*, Icon>{weather_type::fog,             Icon{icon_t::weather_fog, 38066u}}, // mdi:0591,#949694
  std::pair<const char*, Icon>{weather_type::hail,            Icon{icon_t::weather_hail, 65535u}}, // mdi:0592,#ffffff
  std::pair<const char*, Icon>{weather_type::lightning,       Icon{icon_t::weather_lightning, 65120u}}, // mdi:0593,#ffce00
  std::pair<const char*, Icon>{weather_type::lightning_rainy, Icon{icon_t::weather_lightning_rainy, 50400u}} // mdi:067E,#c59e00
}};

// climate_mapping
static constexpr FrozenCharMap<const icon_char_t *, 7> CLIMATE_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{entity_state::auto_, icon_t::calendar_sync},
  std::pair<const char*, const icon_char_t*>{entity_state::heat_cool, icon_t::calendar_sync},
  std::pair<const char*, const icon_char_t*>{entity_state::heat, icon_t::fire},
  std::pair<const char*, const icon_char_t*>{entity_state::off, icon_t::power},
  std::pair<const char*, const icon_char_t*>{entity_state::cool, icon_t::snowflake},
  std::pair<const char*, const icon_char_t*>{entity_state::dry, icon_t::water_percent},
  std::pair<const char*, const icon_char_t*>{entity_state::fan_only, icon_t::fan},
}};

static constexpr FrozenCharMap<const icon_char_t *, 9> MEDIA_TYPE_ICON_MAP {{
  std::pair<const char*, const icon_char_t*>{entity_state::off, icon_t::speaker_off},
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::music, icon_t::music},
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::tvshow, icon_t::movie},
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::video, icon_t::video},
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::episode, icon_t::playlist_play}, // (originally: icon_t::alert_circle_outline)
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::channel, icon_t:: playlist_star}, // (OR radio-tower E43A / broadcast F71F?) (originally: icon_t::alert_circle_outline)
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::playlist, icon_t::playlist_music}, // (originally: icon_t::alert_circle_outline)
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::app, icon_t::open_in_app}, // newly added!
  std::pair<const char*, const icon_char_t*>{ha_attr_media_content_type::url, icon_t::link_box_outline}, // newly added! (OR cast E117?)
}};

const FrozenCharMap<Icon, 10> ALARM_ICON_MAP {{
  std::pair<const char*, Icon>{entity_state::unknown, Icon{icon_t::shield_off, 0x0CE6u}}, //green
  std::pair<const char*, Icon>{entity_state::disarmed, Icon{icon_t::shield_off, 0x0CE6u}}, //green
  std::pair<const char*, Icon>{entity_state::armed_home, Icon{icon_t::shield_home, 0xE243u}}, //red
  std::pair<const char*, Icon>{entity_state::armed_away, Icon{icon_t::shield_lock, 0xE243u}}, //red
  std::pair<const char*, Icon>{entity_state::armed_night, Icon{icon_t::shield_moon, 0xE243u}}, //red. icon was E593:weather-night
  std::pair<const char*, Icon>{entity_state::armed_vacation, Icon{icon_t::shield_airplane, 0xE243u}}, //red
  std::pair<const char*, Icon>{entity_state::armed_custom_bypass, Icon{icon_t::shield, 0xE243u}}, //red
  std::pair<const char*, Icon>{entity_state::arming, Icon{icon_t::shield, 0xED80u}}, //orange
  std::pair<const char*, Icon>{entity_state::pending, Icon{icon_t::shield, 0xED80u}}, //orange
  std::pair<const char*, Icon>{entity_state::triggered, Icon{icon_t::bell_ring, 0xE243u}}, //red
}};

// cover_mapping
static constexpr FrozenCharMap<std::array<const icon_char_t *, 4>, 10> COVER_MAP {{
  // "device_class": ("icon-open", "icon-closed", "icon-cover-open", "icon-cover-close")
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::awning, {icon_t::window_open, icon_t::window_closed, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::blind, {icon_t::blinds_open, icon_t::blinds, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::curtain, {icon_t::curtains, icon_t::curtains_closed, icon_t::arrow_expand_horizontal, icon_t::arrow_collapse_horizontal}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::damper, {icon_t::checkbox_blank_circle, icon_t::circle_slice_8, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::door, {icon_t::door_open, icon_t::door_closed, icon_t::arrow_expand_horizontal, icon_t::arrow_collapse_horizontal}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::garage, {icon_t::garage_open, icon_t::garage, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::gate, {icon_t::gate_open, icon_t::gate, icon_t::arrow_expand_horizontal, icon_t::arrow_collapse_horizontal}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::shade, {icon_t::blinds_open, icon_t::blinds, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::shutter, {icon_t::window_shutter_open, icon_t::window_shutter, icon_t::arrow_up, icon_t::arrow_down}},
  std::pair<const char*, std::array<const icon_char_t*, 4>>{entity_cover_type::window, {icon_t::window_open, icon_t::window_closed, icon_t::arrow_up, icon_t::arrow_down}},
}};

static constexpr FrozenCharMap<const char *, 29> ENTITY_RENDER_TYPE_MAP {{
  std::pair<const char*, const char*>{entity_type::cover, entity_render_type::shutter},
  std::pair<const char*, const char*>{entity_type::light, entity_type::light},

  std::pair<const char*, const char*>{entity_type::switch_, entity_type::switch_},
  std::pair<const char*, const char*>{entity_type::input_boolean, entity_type::switch_},
  std::pair<const char*, const char*>{entity_type::automation, entity_type::switch_},

  std::pair<const char*, const char*>{entity_type::fan, entity_type::fan},
  
  std::pair<const char*, const char*>{entity_type::button, entity_type::button},
  std::pair<const char*, const char*>{entity_type::input_button, entity_type::button},
  std::pair<const char*, const char*>{entity_type::scene, entity_type::button},
  std::pair<const char*, const char*>{entity_type::script, entity_type::button},
  std::pair<const char*, const char*>{entity_type::lock, entity_type::button},
  std::pair<const char*, const char*>{entity_type::vacuum, entity_type::button},
  std::pair<const char*, const char*>{entity_type::navigate, entity_type::button},
  std::pair<const char*, const char*>{entity_type::service, entity_type::button},

  std::pair<const char*, const char*>{entity_type::number, entity_type::number},
  std::pair<const char*, const char*>{entity_type::input_number, entity_type::number},

  std::pair<const char*, const char*>{entity_type::input_select, entity_render_type::input_sel},
  std::pair<const char*, const char*>{entity_type::select, entity_render_type::input_sel},
  
  std::pair<const char*, const char*>{entity_type::itext, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::sensor, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::binary_sensor, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::input_text, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::alarm_control_panel, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::sun, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::person, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::climate, entity_render_type::text},
  std::pair<const char*, const char*>{entity_type::weather, entity_render_type::text},

  std::pair<const char*, const char*>{entity_type::timer, entity_type::timer},
  std::pair<const char*, const char*>{entity_type::media_player, entity_render_type::media_pl},
}};

inline const char *get_entity_type(const std::string &entity_id) {
  auto pos = entity_id.find('.');
  if (pos == std::string::npos) {
    if (entity_id == entity_type::delete_)
      return entity_type::delete_;
    return nullptr;
  }
  
	auto type = entity_id.substr(0, pos);

	if (type == entity_type::light) return entity_type::light;
  else if (type == entity_type::switch_) return entity_type::switch_;
  else if (type == entity_type::input_boolean) return entity_type::input_boolean;
  else if (type == entity_type::automation) return entity_type::automation;
  else if (type == entity_type::fan) return entity_type::fan;
  else if (type == entity_type::lock) return entity_type::lock;
  else if (type == entity_type::button) return entity_type::button;
  else if (type == entity_type::input_button) return entity_type::input_button;
  else if (type == entity_type::input_select) return entity_type::input_select;
  else if (type == entity_type::number) return entity_type::number;
  else if (type == entity_type::input_number) return entity_type::input_number;
  else if (type == entity_type::vacuum) return entity_type::vacuum;
  else if (type == entity_type::timer) return entity_type::timer;
  else if (type == entity_type::person) return entity_type::person;
  else if (type == entity_type::service) return entity_type::service;
  else if (type == entity_type::scene) return entity_type::scene;
  else if (type == entity_type::script) return entity_type::script;

  else if (type == entity_type::cover) return entity_type::cover;
  else if (type == entity_type::sensor) return entity_type::sensor;
  else if (type == entity_type::binary_sensor) return entity_type::binary_sensor;
  else if (type == entity_type::text) return entity_type::text;
  else if (type == entity_type::input_text) return entity_type::input_text;
  else if (type == entity_type::select) return entity_type::select;
  else if (type == entity_type::alarm_control_panel) return entity_type::alarm_control_panel;
  else if (type == entity_type::media_player) return entity_type::media_player;
  else if (type == entity_type::sun) return entity_type::sun;
  else if (type == entity_type::climate) return entity_type::climate;
  else if (type == entity_type::weather) return entity_type::weather;

  // internal (non HA) types
  else if (type == entity_type::nav_up) return entity_type::nav_up;
  else if (type == entity_type::nav_prev) return entity_type::nav_prev;
  else if (type == entity_type::nav_next) return entity_type::nav_next;
  else if (type == entity_type::uuid) return entity_type::uuid;
  else if (type == entity_type::navigate) {
    if (entity_id.length() > (pos + 5) &&
      entity_id.substr(0, pos + 5) == entity_type::navigate_uuid)
      return entity_type::navigate_uuid;
    return entity_type::navigate;
  }
  else if (type == entity_type::itext) return entity_type::itext;
  
  else return nullptr;
}

} // namespace nspanel_lovelace
} // namespace esphome