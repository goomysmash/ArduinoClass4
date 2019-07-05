int buttonSwitchState = 0; //Declare a variable for switching the state for the state machine
long timerStart = 0; //variable for the start of the timer

bool buttonState = true; //declaring the boolean variable buttonState and setting it to true
bool prevButtonState = true; //declaring the boolean variable for the previous button state and setting it to true

int counter = 0; //variable for how many times we've clicked

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
  pinMode(3, INPUT_PULLUP); //set pin D3 to be an input with a pullup resistor
}

void loop() 
{
  // put your main code here, to run repeatedly:
  buttonStateMachine(); //Go to the buttonStateMachine() function
}

void buttonStateMachine() //Function that contains our state machine (can call this function whenever)
{
  switch(buttonSwitchState) //switch statement (how our state machine decides to go to different states)
  {
    //case 0: Wait for falling edge
    case 0: //if buttonSwitchState is 0, do this case
      prevButtonState = buttonState; //update the prevButtonState
      buttonState = digitalRead(3); //read pin 3 then store the value in buttonState
      
      if(prevButtonState == 1 && buttonState == 0){buttonSwitchState = 1;} //if a falling edge was detected, go to case 1
       
      break; //Exit from the buttonStateMachine() function
      
    //case 1: Falling edge detected
    case 1: //if buttonSwitchState is 1, do this case
      timerStart = millis(); //store whatever time it is in this moment in the variable timerStart
  
      buttonSwitchState = 2; //go to case 2 (no if statement needed cause it always does this)
      
      break; //Exit from the buttonStateMachine() function
      
    //case 2: Not sure if debounced yet 
    case 2: //if buttonSwitchState is 2, do this case
      prevButtonState = buttonState; //update the prevButtonState
      buttonState = digitalRead(3); //read pin 3 then store the value in buttonState
  
      if (prevButtonState==0 && buttonState==1){buttonSwitchState=0;} //if there was a rising edge, go to case 0
      if (millis() - timerStart > 5){buttonSwitchState = 3;} //if sufficient time (5ms) has passed, go to case 3
      
      break; //Exit from the buttonStateMachine() function
      
    //case 3: 5ms has passed, successfully debounced
    case 3: //if buttonSwitchState is 3, do this case
      Serial.println("successful press"); //success message
      
      buttonSwitchState = 0; //next time we enter the switch statement, go to case 0
      
      break; //Exit from the buttonStateMachine() function
  }
}
