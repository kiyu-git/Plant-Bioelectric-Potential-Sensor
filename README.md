[日本語](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor) | [English](/README-en.md)

# Plant Bioelectric Potential Sensor

植物生体電位測定器

![Plant-Bioelectric-Potential-Sensor](/images/PlantBioelectricSensor_2.0.jpeg)

## Overview

開発した植物生体電位測定器の回路図等をまとめています。

なお、このリポジトリは、『[植物生体電位測定をオープンにするプロジェクト](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing)』の一部です。

[こちら](https://kiyu-shop.booth.pm/items/4141049)からプロジェクトへの寄付、PCB 基板およびパーツのセットの購入ができます。
継続的なプロジェクト維持のため、ぜひ寄付をお願いいたします。

![Plant-Bioelectric-Potential-Sensor-schematic](./schematic.png)
<img src="./images/植物電位素材_2300-03.jpg"  width="45%"/> <img src="./images/植物電位素材_ユーロブロックピン配置.png"  width="45%"/>

## Revision history

### v1.0.0

- 最初のモデル

### v1.1.0

- 部品の番号を振り直し
- [リンク](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/1f7dd3a86559b1f9ea93b5415610122e70b9b8db)

### v1.1.1

- 信号処理モジュール
  - 回路図を清書
  - 一部の抵抗の値を変更

### v2.0

- Arduino シールド規格に合わせ、拡張性を高めた。
- 回路構成の大幅な変更をおこなった。

## Requirement

植物生体電位測定器の組み立てに必要な部品一覧

**測定基板**

Coming Soon...

しばらくの間は、回路図から読み取ってください

<!-- | Value / Type | Part                | device name | Note                                                                   |
| ---- | -------------------------- | ------------ | ---------------------------------------------------------------------- |
| R1   | 半固定抵抗                 | 50k          |                                                                        |

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
| U1   | 3.5mm ステレオミニジャック | MJ-354W-SG   | [参考](https://akizukidenshi.com/catalog/g/gC-15403/)                  | -->

**測定用ケーブル**

| Device Name              | Value / Type | Need | Note                              |
| ------------------------ | ------------ | ---- | --------------------------------- |
| ユーロブロックターミナル |              | 1    |                                   |
| 導線                     | ~ 50cm       | 3    | 赤青黒の 3 色があるとわかりやすい |
| みの虫クリップ           | small        | 3    | 赤青黒の 3 色があるとわかりやすい |
| 釘                       |              | 1    | 導電性のもの                      |
| 電極パッド               |              | 2    | 心電パッドなどを流用              |

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

※ 共同研究や、案件依頼・相談も受け付けております。twitter DM または website よりご連絡ください。
