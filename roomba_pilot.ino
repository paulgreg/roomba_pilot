#include <Roomba.h>

Roomba roomba(&Serial, Roomba::Baud115200);

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  delay(1000);

  roomba.start();
  delay(500);

  roomba.safeMode();
  delay(500);

  roomba.leds(ROOMBA_MASK_LED_PLAY, 255, 255);
  delay(1000);
  roomba.leds(ROOMBA_MASK_LED_NONE, 0, 0);
  delay(1000);

  // 2 bytes per note
  uint8_t song[] = {62, 12, 66, 12, 69, 12, 74, 36};
  roomba.song(0, song, sizeof(song));
  roomba.playSong(0);
  delay(1000);

  for (byte i = 0; i < 4; i++) {
    roomba.drive(200, 0);
    delay(2000);

    roomba.driveDirect(190, -190);
    delay(1000);
  }

  roomba.drive(0, 0);
  delay(500);

  roomba.start(); // reset

  while (1) ; // End
}
