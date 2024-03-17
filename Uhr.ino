#define LEDRed D12
#define LEDBlue D13
#define S1 D2
#define S2 D3

static HardwareTimer Timer2 = HardwareTimer(TIM2);
int Seconds = 0, Minutes = 0, Hours = 0, Menu = 0;
char Buffer[16];

void Time(void) {
  if (Seconds == 60) {
    Seconds = 0;
    Minutes++;
    if (Minutes == 60) {
      Minutes = 0;
      Hours++;
      if (Hours == 24) {
        Hours = 0;
      }
    }
  }
}

void ISR1(void) { // Setting time when S1 pressed
  Timer2.pause(); // Paused while setting time
  Menu++; // 0 = Normal use, 1 = Hours, 2 = Minutes, 3 = Seconds
  if (Menu == 5) {
    Menu = 0;
    Timer2.resume();
  }
}

void ISR2(void) { // Increase time and check "overflow"
  switch (Menu) {
    case 0:
      break;
    case 1:
      Hours++;
      Time();
      break;
    case 2:
      Minutes++;
      Time();
      break;
    case 3:
      Seconds++;
      Time();
      break;
  }
}

void ISRTimer(void) {
  Seconds++;
}


void setup() {
  Serial.begin(115200);
  pinMode(LEDRed, OUTPUT);
  pinMode(LEDBlue, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);

  Timer2.attachInterrupt(ISRTimer);
  Timer2.setPrescaleFactor(32000); // µC = 32 Mhz = 32 000 000 Mhz and 32 000 000 / 32 000 = 1000 Impulses per second
  Timer2.setOverflow(1000); // Counter goes to ISR every second

  attachInterrupt(digitalPinToInterrupt(S1), ISR1, FALLING);
  attachInterrupt(digitalPinToInterrupt(S2), ISR2, FALLING);

  Timer2.resume();
}

void loop() {
  Time();
  sprintf(Buffer, "%02u : %02u : %02u", Hours, Minutes, Seconds); // using sprintf to keep time output consistent in XX:XX:XX format
  Serial.println(Buffer);
}
