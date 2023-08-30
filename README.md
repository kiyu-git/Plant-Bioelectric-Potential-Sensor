[日本語](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor) | [English](/README-en.md)

# Plant Bioelectric Potential Sensor

植物生体電位測定器

![Plant-Bioelectric-Potential-Sensor](/images/Plant-Bioelectric-Potential-Sensor.JPG)

## Overview

開発した植物生体電位測定器の回路図等をまとめています。植物生体電位測定器は電源・ADC モジュールと信号処理モジュールから構成されています。
信号処理ダイアグラムや設計方針については[こちら](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g15184a93673_0_74)にまとまっています。

なお、このリポジトリは、『[植物生体電位測定をオープンにするプロジェクト](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing)』の一部です。

[こちら](https://kiyu-shop.booth.pm/items/4141049)からプロジェクトへの寄付、PCB 基板およびパーツのセットの購入ができます。
継続的なプロジェクト維持のため、ぜひ寄付をお願いいたします。

**電源・ADC モジュール**

- [回路図](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Power%20and%20ADC%20Module/images)
- [Eagle ファイル](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Power%20and%20ADC%20Module/Eagle)

**信号処理モジュール**

- [回路図](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Signal%20Processing%20Module/images)
- [Eagle ファイル](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Signal%20Processing%20Module/Eagle)

<img src="./Power and ADC Module/images/circuit_power_module.png"  width="45%"/> <img src="./Signal Processing Module/images/circuit_sp_module.png"  width="45%"/>
<img src="./images/device_PCB.JPG"  width="45%"/> <img src="./images/device_modules.JPG"  width="45%"/>
<img src="./images/device_combine.jpeg"  width="45%"/> <img src="./images/device_with_box.JPG"  width="45%"/>

## Revision history

### v1.0.0

- 最初のモデル
- [リンク](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/archive/v1.0)

### v1.1.0

- 部品の番号を振り直し
- [リンク](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/1f7dd3a86559b1f9ea93b5415610122e70b9b8db)

### v1.1.1

- 信号処理モジュール
  - 回路図を清書
  - 一部の抵抗の値を変更

## Requirement

植物生体電位測定器の組み立てに必要な部品一覧

※ バージョンによって、パーツの番号が異なります。信号処理モジュールの基板の LED が LED2 と印字されている場合は[こちら](./archive/v1.0/README.md)のパーツ番号を参照してください。

**信号処理モジュール**

| Part | device name                | Value / Type | Note                                                                   |
| ---- | -------------------------- | ------------ | ---------------------------------------------------------------------- |
| R1   | 半固定抵抗                 | 50k          |                                                                        |
| R2   | 抵抗                       | 10k          |                                                                        |
| R3   | 抵抗                       | 1k           |                                                                        |
| R4   | 抵抗                       | 10k          |                                                                        |
| R5   | 抵抗                       | 10k          |                                                                        |
| R6   | 抵抗                       | 100k         |                                                                        |
| R7   | 抵抗                       | 68k          |                                                                        |
| R8   | 抵抗                       | 10k          |                                                                        |
| R9   | 抵抗                       | 1k           |                                                                        |
| R10  | 抵抗                       | 10k          |                                                                        |
| R11  | 抵抗                       | 10k          |                                                                        |
| R12  | 抵抗                       | 1k           |                                                                        |
| R13  | 抵抗                       | 10k          |                                                                        |
| R14  | 抵抗                       | 100k         |                                                                        |
| R15  | 抵抗                       | 4.7k         |                                                                        |
| R16  | 2 連可変抵抗               | 100k         | [参考](https://akizukidenshi.com/catalog/g/gP-12578/)                  |
| R16  | ツマミ                     |              |                                                                        |
| C1   | セラミックコンデンサ       | 0.1u         |                                                                        |
| C2   | セラミックコンデンサ       | 47p          |                                                                        |
| C3   | セラミックコンデンサ       | 47p          |                                                                        |
| C4   | セラミックコンデンサ       | 0.1u         |                                                                        |
| C5   | セラミックコンデンサ       | 0.1u         |                                                                        |
| IC1  | オペアンプ                 | LM324        | [参考](https://akizukidenshi.com/catalog/g/gI-14055/)                  |
| IC1  | IC ソケット                | 14P          |                                                                        |
| IC2  | 高精度軽装アンプ           | LT1167       | [参考](https://akizukidenshi.com/catalog/g/gI-02789/)                  |
| IC2  | IC ソケット                | 8P           |                                                                        |
| JP1  | ピンヘッダ（オス）         | 5P           | 背が高いもの推奨 [参考](https://akizukidenshi.com/catalog/g/gC-09056/) |
| LED  | 3mm 赤色 LED               |              |                                                                        |
| U1   | 3.5mm ステレオミニジャック | MJ-354W-SG   | [参考](https://akizukidenshi.com/catalog/g/gC-15403/)                  |

**電源・ADC モジュール**

| Part   | device name             | Value / Type | Note                                                                                                                                  |
| ------ | ----------------------- | ------------ | ------------------------------------------------------------------------------------------------------------------------------------- |
| R1     | 抵抗                    | 10k          |                                                                                                                                       |
| R2     | 抵抗                    | 10k          |                                                                                                                                       |
| C1     | 電解コンデンサ          | 47u          |                                                                                                                                       |
| C2     | セラミックコンデンサ    | 0.1u         |                                                                                                                                       |
| C3     | 電解コンデンサ          | 47u          |                                                                                                                                       |
| C4     | 電解コンデンサ          | 47u          |                                                                                                                                       |
| C5     | セラミックコンデンサ    | 0.1u         |                                                                                                                                       |
| DC1    | DC-DC コンバータ        | MAU106       | [参考](https://akizukidenshi.com/catalog/g/gM-04133/)                                                                                 |
| JP1    | ピンヘッダ（メス）      | 5P           |                                                                                                                                       |
| MODULE | Arduino                 | Nano         | [スケッチ](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Arduino%20Sketch/ADC_Serial_sender_1ch)を書き込む |
| MODULE | ピンヘッダ（メス）      | 15P          |                                                                                                                                       |
| MODULE | ピンヘッダ（メス）      | 15P          |                                                                                                                                       |
| MODULE | Arduino 用 USB ケーブル |              |                                                                                                                                       |

**測定用ケーブル**

| Device Name              | Value / Type | Need | Note                              |
| ------------------------ | ------------ | ---- | --------------------------------- |
| 3.5mm ステレオミニプラグ | MP319        | 1    |                                   |
| 導線                     | ~ 50cm       | 3    | 赤青黒の 3 色があるとわかりやすい |
| みの虫クリップ           | small        | 3    | 赤青黒の 3 色があるとわかりやすい |
| 釘                       |              | 1    | 導電性のもの                      |
| 電極パッド               |              | 2    | 心電パッドなどを流用              |

**アクリルボックス**
| Device Name | Value / Type | Need | Note |
| --- | --- | --- | --- |
| アクリルパーツ | 2mm 厚 | 1 set | 6 面分 |
| ナイロンネジ | M2*5mm | 4 | 6mm でも可 底面パネル固定用 |
| ナイロンネジ | M2*5mm | 4 | 5mm から 12mm で可 上面パネル固定用 |
| スペーサー | M2*6+6mm | 4 | 底面パネルと信号処理モジュールの間 |
| スペーサー | M2*15+6mm | 4 | 信号処理モジュールと電源モジュールの間 |
| スペーサー | M2\*20mm | 4 | 電源モジュールと上面パネルの間 |

## Usage

このリポジトリは、『[植物生体電位測定をオープンにするプロジェクト](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing)』の一部です。

『[植物生体電位測定をオープンにするプロジェクト](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing)』に関連する以下のリポジトリと組み合わせることによって、植物生体電位を測定することが可能です。

- 植物生体電位解析器 : https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor
- 測定アプリケーション : https://github.com/kiyu-git/Arduino-Serial-Plot-Recorder
- 解析アプリケーション : https://github.com/kiyu-git/Arduino-Sensor-Data-Viewer
- 照明スイッチの自動化 : https://github.com/kiyu-git/Arduino-Python-Serial-Control-Example

植物生体電位の測定の詳細については[こちら](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g15184a93673_0_264)を参考にしてください。

植物生体電位測定の例
![Plant-Bioelectric-Potential-Measurement](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/raw/main/images/Plant-Bioelectric-Potential-Mearurement.jpeg)

## Reference

- Forest Symphony: [https://special.ycam.jp/interlab/projects/forestsymphony.html](https://special.ycam.jp/interlab/projects/forestsymphony.html)
- LT1167 DataSheet: https://www.analog.com/media/en/technical-documentation/data-sheets/1167fc.pdf
- [and more...](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g148acf8fd66_1_54)

## Donation

[こちら](https://kiyu-shop.booth.pm/items/4141049)からプロジェクトへの寄付ができます。
継続的なプロジェクト維持のため、ぜひ寄付をお願いいたします。

## Author

質問等は twitter または[Issues](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/issues)より

twitter: https://twitter.com/kyu_yukirinrin

website: https://untamable.work

## License

[GPL-3.0 license](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/blob/main/LICENSE)

※ 商用利用を希望される場合は twitter DM または website よりご連絡いただけると幸いです。
