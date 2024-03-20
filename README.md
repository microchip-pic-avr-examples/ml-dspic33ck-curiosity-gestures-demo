<picture>
    <source media="(prefers-color-scheme: dark)" srcset="images/microchip_logo_white_red.png">
	<source media="(prefers-color-scheme: light)" srcset="images/microchip_logo_black_red.png">
    <img alt="Microchip Logo." src="images/microchip_logo_black_red.png">
</picture> 


## dsPIC33CK DSC ML Gestures Demo

| ![Deployed gesture recognizer](images/gesture-demo3.gif) |
| :--: |
| Deployed gesture recognizer |

## Summary

This repository is a companion to the dsPIC33CK DSC Gesture Recognition with MPLAB ML Model Builder tutorial on the [MPLAB Machine Learning Development Suite User's Guide](https://onlinedocs.microchip.com/oxy/GUID-80D4088D-19D0-41E9-BE8D-7AE3BE021BBF-en-US-3/GUID-E6CBB10A-FFC8-4EF3-8C07-D29B64446EB6.html). It contains the firmware to classify a few different motion gestures on a [dsPIC33CK CURIOSITY DEVELOPMENT BOARD](https://www.microchip.com/en-us/development-tool/DM330030) with the 
[Mikroe IMU2 click board](https://www.mikroe.com/6dof-imu-2-click).

The supported gestures (shown in the video above) are:

- *Wave*
- *Up-down*
- *Wheel*
- *Idle*



## Hardware Used

* dsPIC33CK CURIOSITY DEVELOPMENT BOARD [(DM330030)](https://www.microchip.com/Developmenttools/ProductDetails/DM164151)
* IMU 2 click board (https://www.mikroe.com/6dof-imu-2-click)


## Software Used 

* [MPLAB® X IDE](https://microchip.com/mplab/mplab-x-ide)
* [MPLAB® XC16 Compiler](https://microchip.com/mplab/compilers)
* [MPLAB® Code Configurator](https://www.microchip.com/en-us/tools-resources/configure/mplab-code-configurator)
* [MPLAB® ML Model Builder](https://onlinedocs.microchip.com/v2/keyword-lookup?keyword=MPLAB-ML-Documentation&redirect=true)

* [MPLAB® MPLAB Data Visualizer](https://www.microchip.com/en-us/tools-resources/debug/mplab-data-visualizer)

## Related Documentation
* dSPIC33CK [Product Family Page](https://www.microchip.com/en-us/product/dsPIC33CK256MP508)



## Data Collection
The data used for the development of this application can be found in dataset folder of this repo. It consists of 3-axis IMU recordings taken with the dsPIC33CK CURIOSITY DEVELOPMENT BOARD + IMU 2 click board. For further description of the application setup, see the dsPIC33CK DSC Gesture Recognition with MPLAB ML Model Builder tutorial.


## Data Collection Firmware
A binary build of the data logging firmware used in the data collection for this project can be found in the binaries folder of this repo. To build data logging firmware for different sensor configurations, visit the [dspic33ck-curiosity-imu-data-logger repository.


## Sensor Configuration
The sensor configuration used in this demo is summarized in the table below. These settings can be changed by modifying app_config.h.

| IMU Sensor | Axes | Sampling Rate | Accelerometer Range | |
| --- | --- | --- | --- | --- |
| Bosch BMI160 | Ax, Ay, Az,| 100Hz | 2G |  |


## Firwmare Operation
The firmware can be thought of as running in one of four as reflected by the onboard LEDs and described in the table below:

| State |	LED Behavior |	Description |
| --- | --- | --- |
| Error |	LED3 (RED) LED lit |	Fatal error. (Do you have the correct sensor plugged in?). |
| Buffer Overflow |	LED1 and LED3 (RED) LED lit for 5 seconds	| Processing is not able to keep up with real-time; data buffer has been reset. |
| Recognized Gesture |  LED3 (GREEN) flashing according to gesture class except Idle gesture class LED3(Green) Lit only |	One of the known gestures has been detected. |

In addition, the firmware also prints the classification output for each inference over the UART port. To read the UART port output, use the terminal in MPLAB Data Visualizer, like shown in video above, with the following settings:

- Baudrate 38400
- Data bits 8
- Stop bits 1
- Parity None