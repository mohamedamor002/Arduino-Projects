#include <IRremote.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define IR_RECEIVE_PIN 8
#define IR_BUTTON_1 69
#define IR_BUTTON_2 70
#define IR_BUTTON_3 71
#define IR_BUTTON_4 68
#define IR_BUTTON_5 64
#define IR_BUTTON_6 67
#define IR_BUTTON_7 7
#define IR_BUTTON_8 21
#define IR_BUTTON_9 9
#define IR_BUTTON_0 25
#define IR_BUTTON_diez 13
#define IR_BUTTON_star 22
#define IR_BUTTON_Up 24
#define IR_BUTTON_Down 82
#define IR_BUTTON_Right 90
#define IR_BUTTON_Left 8
#define IR_BUTTON_OK 28




#define IR_BUTTON_PLAY_PAUSE 64 


void setup() {
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

// repeat infinitely
 void loop() {
   if (IrReceiver.decode()) {
    IrReceiver.resume();
    int command = IrReceiver.decodedIRData.command;
    switch (command) {
      case IR_BUTTON_1: {
         lcd.clear();
 lcd.print("Pressed 1");
        Serial.println("Pressed 1");
        break;
      }
      case IR_BUTTON_2: {
           lcd.clear();
 lcd.print("Pressed 2");
        Serial.println("Pressed  2");
        break;
      }
      case IR_BUTTON_3: {
           lcd.clear();
 lcd.print("Pressed 3");
        Serial.println("Pressed  3");
        break;
      }
            case IR_BUTTON_4: {
                 lcd.clear();
 lcd.print("Pressed 4");
        Serial.println("Pressed  4");
        break;
      }
            case IR_BUTTON_5: {
                 lcd.clear();
 lcd.print("Pressed 5 ");
        Serial.println("Pressed  5");
        break;
      }
            case IR_BUTTON_6: {
                 lcd.clear();
 lcd.print("Pressed 6");
        Serial.println("Pressed  6");
        break;
      }
            case IR_BUTTON_7: {
               lcd.clear();
 lcd.print("Pressed 7");
        Serial.println("Pressed  7");
        break;
      }
            case IR_BUTTON_8: {
               lcd.clear();
 lcd.print("Pressed 8");
        Serial.println("Pressed  8");
        break;
      }
            case IR_BUTTON_9: {
               lcd.clear();
 lcd.print("Pressed 9");
        Serial.println("Pressed  9");
        break;
      }
            case IR_BUTTON_0: {
        Serial.println("Pressed  0");
        break;
      }
            case IR_BUTTON_diez : {
        Serial.println("Pressed on button #");
        break;
      }
            case IR_BUTTON_star: {
        Serial.println("Pressed on button  *");
        break;
      }
            case IR_BUTTON_Up: {
        Serial.println("Pressed on button Up");
        break;
      }
            case IR_BUTTON_Down: {
        Serial.println("Pressed on button Down");
        break;
      }
            case IR_BUTTON_Right: {
        Serial.println("Pressed on button Right");
        break;
      }
            case IR_BUTTON_Left: {
        Serial.println("Pressed on button Left");
        break;
      }
            case IR_BUTTON_OK: {
        Serial.println("Pressed on button Ok");
        break;
      }
           
      
      default: {
        Serial.println("Button not recognized");
      }
    }
  } 
 }