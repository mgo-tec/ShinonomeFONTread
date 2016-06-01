# ShinonomeFONTread
This is the Arduino library for reading Shinonome 16x16 font. (For ESP8266) 

ver1.0

これはShift_JISコードからフリーの東雲フォント(16x16)をESP-WROOM-02(ESP8266)で読み込むためのライブラリです。

予め、SPIFFSファイルシステムやOTAでフォントファイルをフラッシュにアップロードしておく必要があります。

UTF-8 → Shift_JIS変換ライブラリと変換テーブルが必要です。

また、SPIFFSファイルシステムも必要です。（その中にFs.hライブラリがある為）

Licence:

  MITライセンス

  東雲フォントは/efont/さんが保守開発を行い、ライセンスはPublic Domainです。

  Fs.h はLGPL ver2.1

詳しくはブログ参照：

https://www.mgo-tec.com/blog-entry-ssd1306-shinonome.html
