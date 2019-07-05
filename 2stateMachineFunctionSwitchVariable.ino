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
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
  }
}
