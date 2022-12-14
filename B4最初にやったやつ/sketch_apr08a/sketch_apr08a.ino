// 可変抵抗器に接続したピンの番号
const int sensorPin = 0;

// LEDに接続したピンの番号
const int ledPin = 9;

void setup() {
// LEDに接続したピンのモードを出力にセット
pinMode(ledPin, OUTPUT);

// シリアル通信の設定
Serial.begin(9600);
}

void loop() {
// 可変抵抗器に接続したピンの値を読取り
int value = analogRead(sensorPin);

// シリアルモニタに書き込み
Serial.println(value);

// 可変抵抗器の値を元にLEDの明るさを調節
// 0～1023の入力を0～255の範囲にスケーリング
int intensity = map(value, 0, 1023, 0, 255);

// LEDに接続したピンの値をセット
analogWrite(ledPin, intensity);

// 適度な間隔でデータを送信するため、次のループ開始までに100ms待つ
delay(100);
}
