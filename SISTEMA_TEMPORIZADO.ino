
#include <RTClib.h>   // incluye libreria para el manejo del modulo RTC
RTC_DS3231 rtc;     // crea objeto del tipo RTC_DS3231
int a=0;


void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

Serial.begin(9600);

 if (! rtc.begin()) {       // si falla la inicializacion del modulo
 Serial.println("Modulo RTC no encontrado !");  // muestra mensaje de error
 while (1);         // bucle infinito que detiene ejecucion del programa
 }
//rtc.adjust(DateTime(__DATE__, __TIME__));  // funcion que permite establecer fecha y horario
            // al momento de la compilacion. Comentar esta linea
}           // y volver a subir para normal operacion


void loop() {

if(a==0)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  a=1;
}
DateTime fecha = rtc.now();
Serial.print(fecha.hour());      // funcion que obtiene la hora de la fecha completa
Serial.print(":");       // caracter dos puntos como separador
Serial.print(fecha.minute());      // funcion que obtiene los minutos de la fecha completa
Serial.print(":");       // caracter dos puntos como separador
Serial.println(fecha.second());    // funcion que obtiene los segundos de la fecha completa
delay(1000);

if(fecha.hour()== 7 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

 if(fecha.hour()== 8 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }
 
if(fecha.hour()== 9 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

if(fecha.hour()== 10 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }
 
 if(fecha.hour()== 11 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }
 
 if(fecha.hour()== 12 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }
 
 if(fecha.hour()== 13 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

 if(fecha.hour()== 14 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

 if(fecha.hour()== 15 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

 if(fecha.hour()== 16 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }

 if(fecha.hour()== 17 && fecha.minute()== 0)
 {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay (120000);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay (10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay (120000);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 }
}
