const int ampelGruenPin = 2;
const int ampelGelbPin = 3;
const int ampelRotPin = 4;
bool AmpelAn = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(ampelRotPin, OUTPUT);
  pinMode(ampelGelbPin, OUTPUT);
  pinMode(ampelGruenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (AmpelAn) {
    roteAmpelOnly();
    delay(1000);
    gelbeAmpelOnly();
    delay(1000);
    grueneAmpelOnly();
    delay(1000);
    gelbeAmpelOnly();
    delay(1000);
    }
}

void roteAmpelOnly() {
  digitalWrite(ampelRotPin, HIGH);
  digitalWrite(ampelGelbPin, LOW);
  digitalWrite(ampelGruenPin, LOW);
}

void gelbeAmpelOnly() {
  digitalWrite(ampelRotPin, LOW);
  digitalWrite(ampelGelbPin, HIGH);
  digitalWrite(ampelGruenPin, LOW);
}

void grueneAmpelOnly() {
  digitalWrite(ampelGruenPin, HIGH);
  digitalWrite(ampelRotPin, LOW);
  digitalWrite(ampelGelbPin, LOW);
}