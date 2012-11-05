/*
  BiciMensajitos
  Adrian Santuario Hernadez
  
*/
 
const int ledPin1 =  1;      // the number of the LED pin
const int ledPin2 =  2;      // the number of the LED pin
const int ledPin3 =  3;      // the number of the LED pin
const int ledPin4 =  4;      // the number of the LED pin
const int ledPin5 =  5;      // the number of the LED pin
const int ledPin6 =  6;      // the number of the LED pin
const int ledPin7 =  7;      // the number of the LED pin
const int ledPin8 =  8;      // the number of the LED pin
const int ledPin9 =  9;      // the number of the LED pin
const int ledPin10 =  10;    // the number of the LED pin

const int delayHIGHTLetter = 60;
const int delayControlLetter = 10;
const int delayWord = 500;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);     
  pinMode(ledPin3, OUTPUT);     
  pinMode(ledPin4, OUTPUT);     
  pinMode(ledPin5, OUTPUT);     
  pinMode(ledPin6, OUTPUT);     
  pinMode(ledPin7, OUTPUT);     
  pinMode(ledPin8, OUTPUT);     
  pinMode(ledPin9, OUTPUT);     
  pinMode(ledPin10, OUTPUT);       
}

void loop() {
  
  /*
    Letters in Sketch:
  
  @,¡, !, A, B, C, D, E, F, G, H, I, J, K, L, M, N , O, P, Q , R , S, T, U ,V 
  , W, X, Y, Z
  
  */
  
  //AMOR
  
  setA();
  delay(delayWord);
  setM();
  delay(delayWord);
  setO();
  delay(delayWord);
  setR();
  delay(5000);


}

void setA(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); ; 
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}



void setR(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); ; 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setP(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setN(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setO(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //8
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
  
  //9
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setD(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setI(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setE(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setL(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setH(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void set0penEx(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}

void setCloseEx(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setB(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}

void setC(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setF(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);

  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setG(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}

void setJ(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setK(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setQ(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //8
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}



void setS(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setT(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //&
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setU(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setV(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}

void setX(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}



void setY(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setZ(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  
  //8
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}


void setM(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
 
 
 //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}



void setW(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);
 
 
 //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter);  
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}

void setAt(){

  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security
  
  //1
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //2
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
  
  //3
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
 
  //4
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //5
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter); 
 
  //6
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, HIGH);
  
  delay(delayHIGHTLetter);  
  
  //7
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //8
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);
  
  delay(delayHIGHTLetter); 
  
  //9
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin9, HIGH);
  digitalWrite(ledPin10, LOW);

  delay(delayHIGHTLetter); 
  
  //Security
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  
  delay(delayControlLetter);
  //Security

}



