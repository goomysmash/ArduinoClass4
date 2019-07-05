int buttonSwitchState = 0; //Declare a variable for switching the state for the state machine

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600); //set the Baud rate to 9600hz. You can change this in the bottom right corner of the serial monitor
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
      break; //Exit from the buttonStateMachine() function
      
    //case 1: Falling edge detected
    case 1: //if buttonSwitchState is 1, do this case
      break; //Exit from the buttonStateMachine() function
      
    //case 2: Not sure if debounced yet 
    case 2: //if buttonSwitchState is 2, do this case
      break; //Exit from the buttonStateMachine() function
      
    //case 3: 5ms has passed, successfully debounced
    case 3: //if buttonSwitchState is 3, do this case
      break; //Exit from the buttonStateMachine() function
  }
}
