#include <Keypad.h>

const byte ROWS = 3; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};
byte rowPins[ROWS] = {5, 4, 3}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup()
{
  // This code will only run once, after each powerup or reset of the board
  Serial.begin(115000);
}

void loop()
{
  char key = keypad.getKey();
  if(key){
    Serial.println(key);
  }
}
