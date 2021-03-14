#include <SPIFFS.h>  // ESP32
//#include "FS.h"  //ESP8266


void setup(void) {
  Serial.begin(115200); // ②Serial設定
  Serial.println ("");

  SPIFFS.begin(); // ③SPIFFS開始

  String wrfile = "/ssid.txt"; // ④読み書きするファイル名を設定(fileは/data直下に置く）
    String writeStr = "This is SPIFFS test!"; // ⑤書き込み文字列を設定
    File fw = SPIFFS.open(wrfile.c_str(), "w");// ⑥ファイルを書き込みモードで開く
    fw.println( writeStr ); // ⑦ファイルに書き込み
    fw.close(); // ⑧ファイルを閉じる
    Serial.print("SPIFFS Write:");  // ⑨書き込み完了をモニタに表示
    Serial.println(writeStr);
    delay(1000);

  File fr = SPIFFS.open(wrfile.c_str(), "r");// ⑩ファイルを読み込みモードで開く
  while (1) {
    String readStr = fr.readStringUntil('\n');// ⑪改行まで１行読み出し
    if (readStr == "")break;
    Serial.println(readStr);
  }
  fr.close(); // ⑫  ファイルを閉じる
}

void loop(void) {
}
