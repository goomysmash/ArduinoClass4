## Class 4: Debouncing a push button using a state machine

### 0. Make a [programming flowchart](https://i.imgur.com/zPMWbWn.png) for the state machine
- We'll get into designing new flowcharts for state machines in a future class

### 1. Set up Serial communication
- New code lines:
  - `Serial.begin(9600);`

### 2. Attach a switch statement state machine for debouncing and add the function to the main loop
- New code lines:
  - `int buttonState = 0;`
  - `buttonStateMachine();`
  - `void buttonStateMachine()`
  - `{switch(buttonState){`
  - `case 0: `
  - `break;`
  - `case 1:`
  - `break;`
  - `case 2:`
  - `break;`
  - `case 3:`
  - `break;}}`

### 3. Comment your switch statement according to the flowchart

### 4. Add a timer variable, previous and current button state variables, a counter variable, and attach the push button
- New code lines:
  - `long timerStart = 0;`
  - `bool buttonState = true;`
  - `bool prevButtonState = true;`
  - `int counter = 0;`
  - `pinMode(3, INPUT_PULLUP);`
### 5. Add the purple text from the flowchart to each case
- New code lines:
  - `prevButtonState = buttonState;`
  - `buttonState = digitalRead(3);`
  - `timerStart = millis();`
  - `prevButtonState = buttonState;`
  - `buttonState = digitalRead(3);`
  - `Serial.println("successful press");`
### 6. Add the transitions to and from states (the red if statements from the flowchart)
- New code lines:
  - `if(prevButtonState == 1 && buttonState == 0){buttonSwitchState = 1;}`
  - `buttonSwitchState = 2;`
  - `if (prevButtonState==0 && buttonState==1){buttonSwitchState=0;}`
  - `if (millis() - timerStart > 5){buttonSwitchState = 3;}`
  - `buttonSwitchState = 0;`
- (Upload and watch the serial monitor and press the button)
### 7. Add serial prints and change the debounce time to 500 to each case so you can see how the program flows
- New code lines:
  - `Serial.println("case 0: Wait for falling edge");`
  - `Serial.println("case 1: Start the timer");`
  - `Serial.println("case 2: Read the button state");`
- Modified line:
  - `if (millis() - timerStart > 5){buttonSwitchState = 3;}`
- Modified to:
  - `if (millis() - timerStart > 500){buttonSwitchState = 3;}`
- (Upload and watch the serial monitor and press the button)
- Notice how if you press the button very quickly the program gets up to case 2 but then goes back to case 0
- Only when you press the button for a long time (>500ms) does it actually register and say the "successful press" message
### 8. Comment out serial prints, add in an increment statement and serial print
- New code lines:
  - `counter = counter + 1;`
  - `Serial.println(counter);`
- (Upload and watch the serial monitor and press the button)
- Notice how it only increments when you hold the button down for a long time
- Let's change it back to 5ms so it acts like a normal debounced button
### 9. Change the 500ms comparison time to 5ms
- Modified line:
  - `if (millis() - timerStart > 500){buttonSwitchState = 3;}`
- Modified to:
  - `if (millis() - timerStart > 5){buttonSwitchState = 3;}`
- (Upload and watch the serial monitor and press the button)

### Lessons learned:
- Tasks such as debouncing push buttons can be done with state machines
- The best part about state machines: No delay()'s required!





