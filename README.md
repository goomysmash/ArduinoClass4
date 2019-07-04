## Class 4: Debouncing a push button using a state machine

### 0. Make a [programming flowchart](https://imgur.com/a/90yp4G4) for the state machine
- We'll get into designing new flowcharts in a future class

### 1. Set up Serial communication
- New code lines:
  - `Serial.begin(9600);`

### 2. Attach a switch statement state machine for debouncing
- New code lines:
  - `int buttonState = 0;`
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
- ``

### 4. Add a timer variable and what the flowchart says to do for each state (purple text)
- New code lines:
- `long timerStart = 0;`
- `timerStart = millis();`
- ``
- ``
- ``
- ``


 





