[日本語](/) | [English](/README-en.md)

# Plant Bioelectric Potential Sensor

Plant Bioelectric Potential Sensor

![Plant-Bioelectric-Potential-Sensor](/images/Plant-Bioelectric-Potential-Sensor.JPG)

## Overview

This repository contains the circuit diagram and other information on the developed plant bioelectric potential sensor. The plant biopotential analyzer consists of a power supply/ADC module and a signal processing module.
Signal processing diagrams and design principles are summarized [here (Japanese)](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g15184a93673_0_74).

This repository is part of the ["Open Plant Bioelectric Potential Measurement Project (Japanese)"](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing).

You can donate to the project or purchase a set of PCB substrates and parts [here](https://kiyu-shop.booth.pm/items/4141049).

Donations are highly appreciated to help sustain the project.

**Power supply・ADC module**

- [circuit](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Power%20and%20ADC%20Module/images)
- [Eagle porject file](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Power%20and%20ADC%20Module/Eagle)

**Signal processing module**

- [circuit](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Signal%20Processing%20Module/images)
- [Eagle project file](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Signal%20Processing%20Module/Eagle)

<img src="./Power and ADC Module/images/circuit_power_module.png"  width="45%"/> <img src="./Signal Processing Module/images/circuit_sp_module.png"  width="45%"/>
<img src="./images/device_PCB.JPG"  width="45%"/> <img src="./images/device_modules.JPG"  width="45%"/>
<img src="./images/device_combine.jpeg"  width="45%"/> <img src="./images/device_with_box.JPG"  width="45%"/>

## Requirement

List of parts required for assembly of Plant Bioelectric Potential Sensor.

※ The part numbers differ depending on the version. If the LED on the board of the signal processing module is printed as LED2, please refer to [here](./archive/v1.0/README.md).

| Mearuement Module |       |                                   |                                                       |
| ----------------- | ----- | --------------------------------- | ----------------------------------------------------- |
| Part              | Value | Note                              | URL                                                   |
| C1                | 0.1u  |                                   |                                                       |
| C2                | 47p   |                                   |                                                       |
| C3                | 47p   |                                   |                                                       |
| C4                | 0.1u  |                                   |                                                       |
| C5                | 0.1u  |                                   |                                                       |
| IC1               |       | LM324                             | [ref.](https://akizukidenshi.com/catalog/g/gI-14055/) |
| IC2               |       | LT1167                            | [ref.](https://akizukidenshi.com/catalog/g/gI-02789/) |
| JP1               |       | 5 pinheader                       |                                                       |
| LED               |       | 3mm LED（red）                    |                                                       |
| R1                | 50k   | semi-fixed resistance             |                                                       |
| R2                | 10k   |                                   |                                                       |
| R3                | 1k    |                                   |                                                       |
| R4                | 10k   |                                   |                                                       |
| R5                | 10k   |                                   |                                                       |
| R6                | 100k  |                                   |                                                       |
| R7                | 68k   |                                   |                                                       |
| R8                | 10k   |                                   |                                                       |
| R9                | 1k    |                                   |                                                       |
| R10               | 10k   |                                   |                                                       |
| R11               | 10k   |                                   |                                                       |
| R12               | 1k    |                                   |                                                       |
| R13               | 10k   |                                   |                                                       |
| R14               | 100k  |                                   |                                                       |
| R15               | 4.7k  |                                   |                                                       |
| R16               | 50k   | double potentiometer              | [ref.](https://akizukidenshi.com/catalog/g/gP-12578/) |
| U1                |       | 3.5mm stereo mini jack MJ-354W-SG | [ref.](https://akizukidenshi.com/catalog/g/gC-15403/) |

| Power Supply Module |       |                                                                                                                                                    |                                                       |
| ------------------- | ----- | -------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------- |
| Part                | Value | Note                                                                                                                                               | URL                                                   |
| C1                  | 47u   |                                                                                                                                                    |                                                       |
| C2                  | 0.1u  |                                                                                                                                                    |                                                       |
| C3                  | 47u   |                                                                                                                                                    |                                                       |
| C4                  | 47u   |                                                                                                                                                    |                                                       |
| C5                  | 0.1u  |                                                                                                                                                    |                                                       |
| DC1                 |       | IN 5v/ OUT ±5v DC-DC converter（MAU106）                                                                                                           | [参考](https://akizukidenshi.com/catalog/g/gM-04133/) |
| JP1                 |       | 5 pinheader                                                                                                                                        |                                                       |
| JP2                 |       | ※ not need                                                                                                                                         |                                                       |
| MODULE              |       | Arduino Nano, write [this sketch](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/tree/main/Arduino%20Sketch/ADC_Serial_sender_1ch) |                                                       |
| R1                  | 10k   |                                                                                                                                                    |                                                       |
| R2                  | 10k   |                                                                                                                                                    |                                                       |

| Wire |       |                        |     |
| ---- | ----- | ---------------------- | --- |
| Part | Value | note                   | URL |
|      |       | 3.5mm stereo mini plug |     |
|      |       | wire（\*3）            |     |
|      |       | alligator clip（\*3）  |     |

### Box

Designed with 2mm acrylic thickness

## Usage

This repository is a part of ["Open Plant Bioelectric Potential Measurement Project."](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit?usp=sharing)

In combination with the following repositories associated with the project, it is possible to measure plant bioelectric potential.

- Plant Bioelectric Potential Sensor : https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor
- Measurement Application : https://github.com/kiyu-git/-Arduino-Serial-Plot-Recorder
- Analyze Application : https://github.com/kiyu-git/Arduino-Sensor-Data-Viewer
- Automation of lighting : https://github.com/kiyu-git/Arduino-Python-Serial-Control-Example

For more information on measuring plant bioelectric potential, please click [here](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g15184a93673_0_264).

Example of plant bioelectric potential measurement
![Plant-Bioelectric-Potential-Measurement](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/raw/main/images/Plant-Bioelectric-Potential-Mearurement.jpeg)

## Reference

- Forest Symphony: [https://special.ycam.jp/interlab/projects/forestsymphony.html](https://special.ycam.jp/interlab/projects/forestsymphony.html)
- Pulsum-Plantae: [https://github.com/Lessnullvoid/Pulsum-Plantae](https://github.com/Lessnullvoid/Pulsum-Plantae)
- [and more...](https://docs.google.com/presentation/d/1Tm0e-mBNrTchN6YlGpvvomUZfy79yOtrTSNHG-l_jFg/edit#slide=id.g148acf8fd66_1_54)

## Donation

You can donate to the project from [here](https://kiyu-shop.booth.pm/items/4141049).

Donations are highly appreciated to help sustain the project.

## Author

If you have any question, please write [issues](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/issues) or contact from twitter.

twitter: https://twitter.com/kyu_yukirinrin

website: https://untamable.work

## License

[GPL-3.0 license](https://github.com/kiyu-git/Plant-Bioelectric-Potential-Sensor/blob/main/LICENSE)

※ 商用利用を希望される場合は twitter DM または website よりいただけると幸いです。
