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
