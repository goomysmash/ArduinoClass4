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
### 6.   
  

- ``
- ``
- ``
- ``
- ``




 





