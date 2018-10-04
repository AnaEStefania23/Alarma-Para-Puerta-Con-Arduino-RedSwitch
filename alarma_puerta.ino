int contacto = 2; //declarar variable para el contacto del switch

int led = 13; //declarar el pin para led


void setup() {

  pinMode(contacto, INPUT); //declaramos que la variable contacto aceptará un valor de entrada
  pinMode(led, OUTPUT); //declaramos que la variable led dará un valor de salida
  pinMode(8, OUTPUT);  //Buzzer
}


void loop() {
  if (digitalRead(contacto) == LOW) { //se pregunta si el switch esta activo, si es así ejecuta
    //las siguientes instrucciones


    for (int a = 0; a < 5; a++) {  //se establece un ciclo for para determinar el tiempo que durará la alarma
      //encendida al momento de abrir la puerta

      digitalWrite(led, HIGH);     //para representar la alarma, se encendera el del asignado a la variable "led"
      delay(50);                   //tiempo de espera de encendido del led, es decir parpadea
      digitalWrite(led, LOW);      //deacuerdo al tiempo asignado en el ciclo 50 veces por 50 mls
      delay(50);
      
       if (led, HIGH) {
      tone(8, 2900, 200);
      delay(300);
      tone(8, 2900, 200);
      delay(300);
      tone(8, 2900, 200);
      delay(300);
      tone(8, 2900, 200);
      delay(300);
  
   }

    }//cierra ciclo for
    
  }//se cierra If
  else {                     //en caso contrario de que el switch no sea accionado, este simplemente no
    digitalWrite(led, LOW);      //activará la alarma, por lo tanto no encendera el led


  }//se cierra else


}


