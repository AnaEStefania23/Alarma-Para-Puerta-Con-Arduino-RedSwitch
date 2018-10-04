/*Instituto Tecnologio de Leon
 Ingenieria en Sistemas Computacionales
 Sistemas Programables
 Autor: ANA ESTEFANIA MEJIA ROCHA
 Nombre: Simulacion de una alarma con arduino
 Descripcion: Practica de arduino en donde se implementa el funcionamiento de una alarma
 utilizando un reed switch, un buzzer, un led, iman,resistencias y una placa arduino. 
 Cuando el iman se encuentre cerca del reed switch la alarma estara desactivada,
 pero al quitarlo la alarma se activara logrando que parpade un led y que el buzzer suene.
 Ademas se implemento un ahorro de energia en el arudino "poniendolo a dormir", esto utilizando
 una interrupcion. 
*/


//Declara las variables que se van a utilizar
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


    for (int a = 0; a < 4; a++) {  //se establece un ciclo for para determinar el tiempo que durará la alarma
      //encendida al momento de abrir la puerta

      digitalWrite(led, HIGH);     //para representar la alarma, se encendera el del asignado a la variable "led"
      delay(50);                   //tiempo de espera de encendido del led, es decir parpadea
      digitalWrite(led, LOW);      //deacuerdo al tiempo asignado en el ciclo 5 veces por 50 mls
      delay(50);                   
      
       if (led, HIGH) {           //se realiza una pregunta, si el led de alarma se enciende, se enciende el buzzer
      tone(8, 2900, 200);         //coordinando así el led con el buzzer
      delay(300);                 //aquí, se muestra los ciclos que el buzzer hace, es decir, al momento de sonar, este hace 
      tone(8, 2900, 200);         //pequeños intermitentes y despues se deactiva para ahorrar energia.
      delay(300);
      tone(8, 2900, 200);
      delay(300);
      tone(8, 2900, 200);
      delay(300);
  
   }

    }//cierra ciclo for
    
  }//se cierra If
  else {                          //en caso contrario de que el switch no sea accionado, este simplemente no
    digitalWrite(led, LOW);      //activará la alarma, por lo tanto no encendera el led, ahorrando enrgia.


  }//se cierra else


}//termina programa


