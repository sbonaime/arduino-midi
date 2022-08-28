#pragma once

#define MIDI_ACTIVE true

#define NAMESPACE_ACTIVE true
#define LOG_OUT Serial

#if defined(ESP32) 
#  define MIDI_BLE_ACTIVE true
#  define APPLE_MIDI_ACTIVE true
#  define MDNS_ACTIVE true
#  define UDP_ACTIVE true
#  define TCP_ACTIVE true
#elif defined(ESP8266)
#  define MIDI_BLE_ACTIVE false
#  define APPLE_MIDI_ACTIVE true
#  define MDNS_ACTIVE false
#  define UDP_ACTIVE true
#  define TCP_ACTIVE true
#elif defined(ARDUINO)
#  define APPLE_MIDI_ACTIVE true
#  define MIDI_BLE_ACTIVE false
#  define MDNS_ACTIVE false
#  define UDP_ACTIVE true
#  define TCP_ACTIVE true
#else
#  define APPLE_MIDI_ACTIVE false
#  define MIDI_BLE_ACTIVE false
#  define MDNS_ACTIVE false
#  define UDP_ACTIVE false
#  define TCP_ACTIVE false
#endif

