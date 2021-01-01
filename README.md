# SSIDとPWDをコードに載せたくないのでそれらをEEPROMに記憶させて見せなくする方法

## 1. ssidとpwdをEEPROMに書き込む
  1. ssidとpwdを記載した.textファイルを作成。書き方は「ssid改行pwd」
  2. "/write_from_txtfile_to_eeprom/data"に上記ファイルを保存
  3. ArduinoIDEのツール/ESP32Sketch Data Uploadを押す (シリアルモニタは閉じておく)
  4. "write_from_txtfile_to_eeprom.ino"を実行
  
  これでESP32のEEPROMにssidとpwdが保存される

## 2. EEPROMに書き込んだssid、pwdの使い方
　5. "read_ssid.ino"のように使う
