//Tx

#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'7','8','9', '/'},
  {'4','5','6','x'},
  {'1','2','3','-'},
  {'*','0','#','+'}
};
byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int xB = 0;

void setup() 
{
  Serial.begin(9600);  

}
void loop() 
{
  char pts = keypad.getKey();
    if (pts)
  {
    if(pts == '1'){xB = 1; Serial.print("1");}
    if(pts == '2'){xB = 1; Serial.print("2");}
    if(pts == '3'){xB = 1; Serial.print("3");}
    if(pts == '4'){xB = 1; Serial.print("4");}
    if(pts == '5'){xB = 1; Serial.print("5");}
    if(pts == '6'){xB = 1; Serial.print("6");}
    if(xB == 0){Serial.print(pts);}
    xB = 0; 
  }
}
