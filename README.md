# SSIDとPWDをGITHUBのコードに載せたくないのでそれらをEEPROMに記憶させて見せなくする方法

* textファイルに書かれたssidとpwdをEEPROMに書き込む
　　- ssidとpwdを記載した.textファイルを作成。ssid改行pwd
　　- "/write_from_txtfile_to_eeprom/data"に①ファイルを保存
　　- ArduinoAPIツール/ESP32SketchDataUploadを押す
　　（シリアルモニタは閉じておく）
　　- "write_from_txtfile_to_eeprom.ino"を実行
　　　これでESP32のEEPROMにssidとpwdが保存される

* 使い方
　　- "read_ssid.ino"のように使う
