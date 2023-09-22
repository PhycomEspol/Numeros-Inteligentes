// Incluye la biblioteca LedControl
#include "LedControl.h"

// Declara un objeto LedControl para trabajar con la matriz de LEDs
LedControl lc = LedControl(12, 11, 10, 1);

// Arreglos de números del 0 al 9 (longitud 8)
byte number0[8] = {
  B00000000,
  B00111100,
  B00100100,
  B00100100,
  B00100100,
  B00111100,
  B00000000,
  B00000000
};
byte number1[8] = {
  B00000000,
  B00001000,
  B00011000,
  B00101000,
  B00001000,
  B00111100,
  B00000000,
  B00000000
};

byte number2[8] = {
  B00000000,
  B00111100,
  B00000100,
  B00111100,
  B00100000,
  B00111100,
  B00000000,
  B00000000
};

byte number3[8] = {
  B00000000,
  B00111100,
  B00000100,
  B00111100,
  B00000100,
  B00111100,
  B00000000,
  B00000000
};

byte number4[8] = {
  B00000000,
  B00001100,
  B00010100,
  B00100100,
  B00111110,
  B00000100,
  B00000000,
  B00000000
};

byte number5[8] = {
  B00000000,
  B00111100,
  B00100000,
  B00111100,
  B00000100,
  B00111100,
  B00000000,
  B00000000
};

byte number6[8] = {
  B00000000,
  B00111100,
  B00100000,
  B00111100,
  B00100100,
  B00111100,
  B00000000,
  B00000000
};

byte number7[8] = {
  B00000000,
  B00111100,
  B00000100,
  B00001000,
  B00010000,
  B00010000,
  B00000000,
  B00000000
};

byte number8[8] = {
  B00000000,
  B00111100,
  B00100100,
  B00111100,
  B00100100,
  B00111100,
  B00000000,
  B00000000
};

byte number9[8] = {
  B00000000,
  B00111100,
  B00100100,
  B00111100,
  B00000100,
  B00111100,
  B00000000,
  B00000000
};

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  // Configuración inicial
  Serial.begin(9600);
  lc.shutdown(0, false);  // Despierta la matriz de LEDs
  lc.setIntensity(0, 8);  // Establece la intensidad de brillo
  lc.clearDisplay(0);     // Borra la pantalla
}

void showNumberOnMatrix(int number) {
  // Verifica si el número es válido (del 1 al 9)
  if (number >= 0 && number <= 9) {
    byte* numberArray = nullptr;

    // Asigna el arreglo correspondiente al número
    switch (number) {
      case 0:
        numberArray = number0;
        break;
      case 1:
        numberArray = number1;
        break;
      case 2:
        numberArray = number2;
        break;
      case 3:
        numberArray = number3;
        break;
      case 4:
        numberArray = number4;
        break;
      case 5:
        numberArray = number5;
        break;
      case 6:
        numberArray = number6;
        break;
      case 7:
        numberArray = number7;
        break;
      case 8:
        numberArray = number8;
        break;
      case 9:
        numberArray = number9;
        break;
    }

    // Muestra el número en la matriz de LEDs
    for (int i = 0; i < 8; i++) {
      lc.setRow(0, i, numberArray[i]);
      //delay(delaytime);
    }
  }
}

void loop() {
  // Lee los datos enviados desde Python a través del puerto serial
  if (Serial.available() > 0) {
    char number = Serial.read();
    if (number == 'A') {
      showNumberOnMatrix(1);
    }
    if (number == 'B') {

      showNumberOnMatrix(2);
    }
    if (number == 'C') {

      showNumberOnMatrix(3);
    }
    if (number == 'D') {

      showNumberOnMatrix(4);
    }
    if (number == 'E') {

      showNumberOnMatrix(5);
    }
    if (number == 'F') {
      digitalWrite(13, 0);

      // Muestra la cantidad de dedos en la matriz de LEDs
      showNumberOnMatrix(0);
    }
    Serial.println(number);
  }
}
