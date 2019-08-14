#include <Mouse.h>
void setup() {

  Mouse.begin();
  pinMode(2, INPUT);
}



void loop(){
  //if the switch attached to pin 2 is closed, press and hold the left mouse button
  if(digitalRead(2) == HIGH){
    Mouse.press(MOUSE_LEFT);
  }
  //if the switch attached to pin 3 is closed, release the left mouse button
  else{
  Mouse.release(MOUSE_LEFT);
  }
}
