# Arduino Examples

## Basic

植物生体電位の増幅後の値、実際の値を測定し、シリアル通信で送信するプログラム

## Advanced

### upload_SORACOM

LTE モジュールと IoT クラウドサービス を利用したウェブ上でのデータ可視化の例。

SORACOM が販売している Arduino 用 LTE シールド LTE-M Shield for Arduino を植物生体電位測定器 と組み合わせ、SORACOM Harvest にデータを送信。

なお、LTE-M Shield for Arduino はアナログ入力ピン A1 を使用しており、起動すると植物生体電位を測定できない。 そのため、Reset ピンとデジタル入出力ピン D7 を接続し、A1 の値を読み取った後に、LTE モジュールを起動、データがアップロードできたら Reset し、A1 を解放している。
