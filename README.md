# ShinonomeFONTread (SPIFFS)
This is the Arduino library for reading Shinonome 16x16 font. (For ESP8266) 

Beta ver1.33

これはShift_JISコードからフリーの東雲フォント(16x16)をESP-WROOM-02(ESP8266)で読み込むためのライブラリです。  
予め、SPIFFSファイルシステムやOTAでフォントファイルをフラッシュにアップロードしておく必要があります。  
UTF-8 → Shift_JIS変換ライブラリと変換テーブルが必要です。  
また、SPIFFSファイルシステムライブラリも必要です。

【更新履歴】  
●Beta ver 1.33  
whileループにyield();を追加しました。

●Beta ver 1.31  
当てはまらない文字コードは全角スペースにするはずだったが、全角スペースアドレスが誤っていたので修正。  
Ascii 制御コード(0x00～0x1F)は半角スペースに変換。

●Beta ver 1.3  
SjisToShinonome16FontRead_ALL　という関数を追加し、文字列を一括で変換できるようにしました。  
また、SPIFFSファイルopen、closeを使う個所を１か所にしたため、読み込みが早くなりました。  
JIS第２水準のアドレス変換が誤っていたのを修正しました。


Licence:  
  MITライセンス  
  東雲フォントは/efont/さんが保守開発を行い、ライセンスはPublic Domainです。  
  Fs.h はLGPL ver2.1

詳しくはブログ参照：  
https://www.mgo-tec.com
