int led = 13; //Indica el pin donde está el led, por defecto 13.
int milisegundos = 500; //Marca cada cuantos milisegundos va a parpadear el led.

void setup() { //Función que se ejecuta al arrancar.
  pinMode(led, OUTPUT); //Marcamos que se usará el pin 13 para emitir electricidad.
} //usamos OUTPUT para decirle al arduino que emitirá electricidad.

void loop() { //Función que se ejecuta con los ciclos del procesador.
  digitalWrite(led, HIGH); //Le enviamos una señal digital, para encenderlo.
  delay(milisegundos); //Paramos la función por la cantidad de milisegundos deseados.
  digitalWrite(led, LOW); //Le retiramos la electricidad para apagarlo.
  delay(milisegundos); //Esperamos nuevamente para volverlo a prender.
}
