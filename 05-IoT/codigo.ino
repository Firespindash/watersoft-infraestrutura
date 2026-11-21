const int sensor = A0;

const int ledVerde = 8;
const int ledAmarelo = 9;
const int ledVermelho = 10;

float temperatura;
int leitura;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  leitura = analogRead(sensor);

  float tensao = leitura * (5.0 / 1023.0);

  temperatura = (tensao - 0.5) * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  if (temperatura < 28.0) {

    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);

  }
  else if (temperatura < 32.0) {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);

  }
  else {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);

  }

  delay(1000);
}
