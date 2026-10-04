#define led 3
#define botao 2

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

bool estadoBotao;
bool estadoAnteriorBotao;

void loop() {
  // put your main code here, to run repeatedly:
estadoBotao=digitalRead(botao);
  if(estadoBotao != estadoAnteriorBotao && estadoBotao==1){
    digitalWrite(led, !digitalRead(led));
    delay(300);
  }
estadoAnteriorBotao = estadoBotao;
}
