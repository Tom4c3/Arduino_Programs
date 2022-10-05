const int INPUT_PIN = A0;  // 入力ピンをA0に固定
const int LED_PIN = 9;     // LEDを11番ピンに固定
int VOLUME;                // 変数を整数型で宣言

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   VOLUME = analogRead(INPUT_PIN);  // アナログ値の読み取り
   analogWrite(LED_PIN, VOLUME/4);  // PWMでLEDを点灯
 
   delay(100);
}
