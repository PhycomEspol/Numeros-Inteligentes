void setup() {
  // Configuración inicial
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  
}

void loop() { 
  // Lee los datos enviados desde Python a través del puerto serial
  if (Serial.available() > 0) {
    char op = Serial.read();
    if (op == 'N') {
      digitalWrite(13, HIGH);
    }
    if (op == 'M') {
      digitalWrite(13,LOW);
    }

    Serial.println(op);

    //int receivedData = Serial.readString().toInt();  // Lee un carácter de los datos recibidos
    // Puedes realizar acciones basadas en los datos recibidos aquí
    //showNumberOnMatrix(receivedData); // Muestra la cantidad de dedos en la matriz de LEDs
  }
}
