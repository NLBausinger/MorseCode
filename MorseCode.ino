
/*
 * This program receives keyboard input and transcribes
 * it to morse code. The only component required is the 
 * arduino itself. The program uses its built-in LED to 
 * display the output. 
 */

#include <Keyboard.h>; //reads keyboard input to serial monitor

#define MCP A0 //Morse Code Pin, if used on an LED. 

void transcribeToMorseCode();
void shortPulse();
void longPulse();

void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT); //Morse code pin is set to output
  Serial.begin(9600);   //Serial port ready
}

void loop() {
  
  String message;
  Serial.println("Input message to translate to morse code");
  while (!Serial.available()){}
  
  while (Serial.available()){
    delay(100);
    message = Serial.readStringUntil('\n');
  }
  //scan message letter by letter
  //call transcribeToMorseCode() with the argument being the 
  //current character in the string. 
  
  for (int x = 0; x < message.length(); x++){
    Serial.println(message[x]);
    char messageLetter = message[x];
    transcribeToMorseCode(messageLetter); 
    

      
    
    } //for loop bracket




    
  }//end program bracket

  void shortPulse(){

    digitalWrite(LED_BUILTIN,HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
  }

  void longPulse(){

    digitalWrite(LED_BUILTIN,HIGH);
    delay(600);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    
  }

  void transcribeToMorseCode(char receivedLetter){
  
          
      switch (receivedLetter){
        
      //Numbers
      case '1': //S L L L L 
      
      shortPulse();
      longPulse();
      longPulse();
      longPulse();
      longPulse();
        
      break;
      case '2': //S S L L L
      
      shortPulse();
      shortPulse();
      longPulse();
      longPulse();
      longPulse();
       
      break;
      case '3': //S S S L L
      
      shortPulse();
      shortPulse();
      shortPulse();
      longPulse();
      longPulse();
       
      break;
      case '4': //S S S S L

      shortPulse();
      shortPulse();
      shortPulse();
      shortPulse();
      longPulse();
      
      break;
      case '5': //S S S S S

      shortPulse();
      shortPulse();
      shortPulse();
      shortPulse();
      shortPulse();
      
      break;
      
      case '6': //L S S S S
      
      longPulse();
      shortPulse();
      shortPulse();
      shortPulse();
      shortPulse();    
         
      break;

      case '7': //L L S S S 

      longPulse();
      longPulse();
      shortPulse();
      shortPulse();
      shortPulse(); 
     
      break;
      
      case '8': //L L L S S 

      longPulse();
      longPulse();
      longPulse();
      shortPulse();
      shortPulse();
      
      break;
      
      case '9': //L L L L S

      longPulse();
      longPulse();
      longPulse();
      longPulse();
      shortPulse();
      
      break;
      
      case '0': //L L L L L

      longPulse();
      longPulse();
      longPulse();
      longPulse();
      longPulse();
      
      break;
      
      //Letters

      case 'a': //S L
      case 'A':
        
      shortPulse();
      longPulse();
        
      break;

      case 'b': //L S S S
      case 'B': 

      longPulse();
      shortPulse();
      shortPulse();
      shortPulse();
         
      break;

      case 'c': //L S L S
      case 'C':

      longPulse();
      shortPulse();
      longPulse();
      shortPulse();

      break;

      case 'd': //L S S
      case 'D':

      longPulse();
      shortPulse();
      shortPulse();

      break;

      case 'e': //S
      case 'E':

      shortPulse();
      
      break;

      case 'f': //S S L S 
      case 'F':

      shortPulse();
      shortPulse();
      longPulse();
      shortPulse();

      break;

      case 'g': //L L S
      case 'G':

      longPulse();
      longPulse();
      shortPulse();
      
      break;

      case 'h': //S S S S
      case 'H':

      shortPulse();
      shortPulse();
      shortPulse();
      shortPulse();

      break;

      case 'i': //S S 
      case 'I':

      shortPulse();
      shortPulse();

      break;

      case 'j': //S L L L 
      case 'J':

      shortPulse();
      longPulse();
      longPulse();
      longPulse();

      break;

      case 'k': //L S L
      case 'K':

      longPulse();
      shortPulse();
      longPulse();

      break;

      case 'l': //S L S S
      case 'L':

      shortPulse();
      longPulse();
      shortPulse();
      shortPulse();

      break;

      case 'm': //L L 
      case 'M':

      longPulse();
      longPulse();

      break;

      case 'n': //L S
      case 'N':

      longPulse();
      shortPulse();

      break;

      case 'o': //L L L
      case 'O':

      longPulse();
      longPulse();
      longPulse();

      break;

      case 'p': //S L L S
      case 'P':

      shortPulse();
      longPulse();
      longPulse();
      shortPulse();

      break;

      case 'q': //L L S L
      case 'Q':

      longPulse();
      longPulse();
      shortPulse();
      longPulse();

      break;

      case 'r': //S L S
      case 'R':

      shortPulse();
      longPulse();
      shortPulse();

      break;

      case 's': //S S S 
      case 'S':

      shortPulse();
      shortPulse();
      shortPulse();

      break;

      case 't': //L
      case 'T':  

      longPulse();

      break;

      case 'u': //S S L
      case 'U':

      shortPulse();
      shortPulse();
      longPulse();
      
      break;

      case 'v': //S S S L
      case 'V':

      shortPulse();
      shortPulse();
      shortPulse();
      longPulse();

      break;

      case 'w': //S L L 
      case 'W':

      shortPulse();
      longPulse();
      longPulse();

      break;

      case 'x': //L S S L
      case 'X':

      longPulse();
      shortPulse();
      shortPulse();
      longPulse();
      
      break;

      case 'y': //L S L L
      case 'Y':

      longPulse();
      shortPulse();
      longPulse();
      longPulse();

      break;

      case 'z': //L L S S
      case 'Z':

      longPulse();
      longPulse();
      shortPulse();
      shortPulse();
      break;
      
      case ' ': //space simply delays the code.
      delay(200);
      break;

    
  }

  }//end transcribeToMorseCode function

  
