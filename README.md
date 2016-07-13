# ShinonomeFONTread
This is the Arduino library for reading Shinonome 16x16 font. (For ESP8266) 

Beta ver1.3

これはShift_JISコードからフリーの東雲フォント(16x16)をESP-WROOM-02(ESP8266)で読み込むためのライブラリです。

予め、SPIFFSファイルシステムやOTAでフォントファイルをフラッシュにアップロードしておく必要があります。

UTF-8 → Shift_JIS変換ライブラリと変換テーブルが必要です。

また、SPIFFSファイルシステムライブラリも必要です。

【更新履歴】

●Beta ver 1.3

SjisToShinonome16FontRead_ALL　という関数を追加し、文字列を一括で変換できるようにしました。

また、SPIFFSファイルopen、closeを使う個所を１か所にしたため、読み込みが早くなりました。


Licence:

  MITライセンス

  東雲フォントは/efont/さんが保守開発を行い、ライセンスはPublic Domainです。

  Fs.h はLGPL ver2.1

詳しくはブログ参照：

https://www.mgo-tec.com
