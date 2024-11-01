#define LED_R 13
#define LED_Y 12
#define LED_G 11
#define potPin A0 // Define o pino do potenciômetro

unsigned long millisAntes = 0;
int estadoSemaforo = 0;
int *ptrEstado = &estadoSemaforo;
int potValue = 0;
int tempoBase = 2000; // Tempo base mínimo em milissegundos

const int leds[] = {LED_R, LED_Y, LED_G};
const int *ptrLED = leds;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ptrLED[i], OUTPUT);
  }
}

void loop() {
  unsigned long millisAtual = millis();
  potValue = analogRead(potPin);

  // Mapear o valor do potenciômetro para um intervalo de 2000 a 6000 milissegundos
  tempoBase = map(potValue, 0, 1023, 2000, 6000);

  switch (*ptrEstado) {
    case 0: // LED vermelho aceso
      if (millisAtual - millisAntes >= tempoBase) {
        millisAntes = millisAtual;
        *ptrEstado = 1;
      }
      digitalWrite(LED_R, HIGH);
      digitalWrite(LED_Y, LOW);
      digitalWrite(LED_G, LOW);
      break;
      
    case 1: // LED amarelo aceso
      if (millisAtual - millisAntes >= tempoBase / 3) {
        millisAntes = millisAtual;
        *ptrEstado = 2;
      }
      digitalWrite(LED_R, LOW);
      digitalWrite(LED_Y, HIGH);
      digitalWrite(LED_G, LOW);
      break;

    case 2: // LED verde aceso
      if (millisAtual - millisAntes >= tempoBase) {
        millisAntes = millisAtual;
        *ptrEstado = 3;
      }
      digitalWrite(LED_R, LOW);
      digitalWrite(LED_Y, LOW);
      digitalWrite(LED_G, HIGH);
      break;

    case 3: // LED amarelo piscando para transição
      if (millisAtual - millisAntes >= tempoBase / 3) {
        millisAntes = millisAtual;
        *ptrEstado = 0;
      }
      digitalWrite(LED_R, LOW);
      digitalWrite(LED_Y, HIGH);
      digitalWrite(LED_G, LOW);
      break;
  }
}
