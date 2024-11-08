
int rojo=10;
int azul = 11;
int verde=12;

String cadena;
void setup(){
  
 pinMode(rojo, OUTPUT);
 pinMode(azul, OUTPUT);
 pinMode(verde, OUTPUT);
}
void loop (){
analogWrite(rojo,0);
analogWrite(azul,0);
analogWrite(verde,0);
}
