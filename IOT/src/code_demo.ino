const int PIN_TAMPER = 4;
const int PIN_LED_OK = 2;
const int PIN_LED_ALERT = 5;
const int PIN_BUZZER = 15;

int lastState = HIGH; // HIGH = vo dong (an toan) vi dung INPUT_PULLUP

void logEvent(String msg) {
  Serial.print("[");
  Serial.print(millis());
  Serial.print(" ms] ");
  Serial.println(msg);
}

void setup() {
  Serial.begin(115200);
  pinMode(PIN_TAMPER, INPUT_PULLUP);
  pinMode(PIN_LED_OK, OUTPUT);
  pinMode(PIN_LED_ALERT, OUTPUT);
  pinMode(PIN_BUZZER, OUTPUT);

  digitalWrite(PIN_LED_OK, HIGH);   // Mac dinh: vo dong, an toan
  digitalWrite(PIN_LED_ALERT, LOW);
  digitalWrite(PIN_BUZZER, LOW);

  logEvent("He thong khoi dong. Trang thai: AN TOAN (vo dong).");
}

void loop() {
  int state = digitalRead(PIN_TAMPER);

  if (state != lastState) {
    delay(30); // khu nhieu tiep diem

    if (state == HIGH) {
      // Mach ho = vo bi mo
      digitalWrite(PIN_LED_OK, LOW);
      digitalWrite(PIN_LED_ALERT, HIGH);
      digitalWrite(PIN_BUZZER, HIGH);
      logEvent(">>> CANH BAO: Phat hien THAO VO thiet bi! <<<");
    } else {
      // Mach kin = vo da dong lai
      digitalWrite(PIN_LED_OK, HIGH);
      digitalWrite(PIN_LED_ALERT, LOW);
      digitalWrite(PIN_BUZZER, LOW);
      logEvent("Vo thiet bi da dong lai. Trang thai: AN TOAN.");
    }
    lastState = state;
  }
}
