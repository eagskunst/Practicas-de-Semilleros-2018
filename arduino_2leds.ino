int led1 = 13;//Indica el pin donde está el led, por defecto 13.
int led2 = 7;//Indica el pin del otro led.
int milisegundos = 500; //Marca cada cuantos milisegundos va a parpadear el led.

void setup() { //Función que se ejecuta al arrancar.
  pinMode(led1, OUTPUT); //Marcamos que se usará el pin 13 para emitir electricidad.
  pinMode(led2, OUTPUT); //Marcamos también el otro pin.
} //usamos OUTPUT para decirle al arduino que emitirá electricidad.

void loop() { //Función que se ejecuta con los ciclos del procesador.
  digitalWrite(led1, HIGH); //Le enviamos una señal digital, para encenderlo.
  digitalWrite(led2, LOW); //Le indicamos que cuando el otro esté encendido, este estará apagado.
  delay(milisegundos); //Paramos la función por la cantidad de milisegundos deseados.
  digitalWrite(led1, LOW); //Le retiramos la electricidad para apagarlo.
  digitalWrite(led2, HIGH); //Le indicamos que cuando el otro esté apagado, este estará encendido.
  delay(milisegundos); //Esperamos nuevamente para volverlo a prender.
}
