EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "sam. 04 avril 2015"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 5FD7AE56
P 7400 2900
F 0 "J1" H 7480 2892 50  0000 L CNN
F 1 "NAPAJANJE" H 7480 2801 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 7400 2900 50  0001 C CNN
F 3 "~" H 7400 2900 50  0001 C CNN
	1    7400 2900
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0101
U 1 1 5FD7B5BD
P 7100 2700
F 0 "#PWR0101" H 7100 2550 50  0001 C CNN
F 1 "VCC" H 7115 2873 50  0000 C CNN
F 2 "" H 7100 2700 50  0001 C CNN
F 3 "" H 7100 2700 50  0001 C CNN
	1    7100 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	7100 2700 7100 2900
Wire Wire Line
	7100 2900 7200 2900
$Comp
L power:GND #PWR0102
U 1 1 5FD7BAD0
P 7100 3250
F 0 "#PWR0102" H 7100 3000 50  0001 C CNN
F 1 "GND" H 7105 3077 50  0000 C CNN
F 2 "" H 7100 3250 50  0001 C CNN
F 3 "" H 7100 3250 50  0001 C CNN
	1    7100 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	7200 3000 7100 3000
Wire Wire Line
	7100 3000 7100 3250
$Comp
L power:GND #PWR0103
U 1 1 5FD7BE02
P 5350 3250
F 0 "#PWR0103" H 5350 3000 50  0001 C CNN
F 1 "GND" H 5355 3077 50  0000 C CNN
F 2 "" H 5350 3250 50  0001 C CNN
F 3 "" H 5350 3250 50  0001 C CNN
	1    5350 3250
	1    0    0    -1  
$EndComp
Wire Wire Line
	5350 3250 5350 3150
Wire Wire Line
	5350 3150 5550 3150
$Comp
L power:VCC #PWR0104
U 1 1 5FD7CBCF
P 6700 3100
F 0 "#PWR0104" H 6700 2950 50  0001 C CNN
F 1 "VCC" H 6715 3273 50  0000 C CNN
F 2 "" H 6700 3100 50  0001 C CNN
F 3 "" H 6700 3100 50  0001 C CNN
	1    6700 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 3150 6700 3150
Wire Wire Line
	6700 3150 6700 3100
$Comp
L power:GND #PWR0105
U 1 1 5FD7D1FA
P 6500 2950
F 0 "#PWR0105" H 6500 2700 50  0001 C CNN
F 1 "GND" H 6505 2777 50  0000 C BNN
F 2 "" H 6500 2950 50  0001 C CNN
F 3 "" H 6500 2950 50  0001 C CNN
	1    6500 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 2950 6500 2950
$Comp
L Connector_Generic:Conn_01x14 J2
U 1 1 5FD7DFB6
P 7850 4350
F 0 "J2" H 7930 4342 50  0000 L CNN
F 1 "ILI9341" H 7930 4251 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x14_P2.54mm_Vertical" H 7850 4350 50  0001 C CNN
F 3 "~" H 7850 4350 50  0001 C CNN
	1    7850 4350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 5FD7FD40
P 7400 5200
F 0 "#PWR0106" H 7400 4950 50  0001 C CNN
F 1 "GND" H 7405 5027 50  0000 C CNN
F 2 "" H 7400 5200 50  0001 C CNN
F 3 "" H 7400 5200 50  0001 C CNN
	1    7400 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6350 3950 7650 3950
Wire Wire Line
	7650 4050 5450 4050
Wire Wire Line
	5450 4050 5450 3850
Wire Wire Line
	5450 3850 5550 3850
Wire Wire Line
	5550 3950 5400 3950
Wire Wire Line
	5400 4150 7650 4150
Wire Wire Line
	5400 3950 5400 4150
Wire Wire Line
	7650 4350 6800 4350
Wire Wire Line
	6800 4350 6800 3650
Wire Wire Line
	6800 3650 6350 3650
Wire Wire Line
	7650 4450 5350 4450
Wire Wire Line
	5350 4450 5350 3650
Wire Wire Line
	5350 3650 5550 3650
Wire Wire Line
	6700 4250 6700 3850
Wire Wire Line
	6700 3850 6350 3850
Wire Wire Line
	6350 3750 6950 3750
Wire Wire Line
	6950 3750 6950 4550
Wire Wire Line
	6950 4550 7650 4550
$Comp
L power:VCC #PWR0107
U 1 1 5FD7F906
P 7500 3550
F 0 "#PWR0107" H 7500 3400 50  0001 C CNN
F 1 "VCC" H 7515 3723 50  0000 C CNN
F 2 "" H 7500 3550 50  0001 C CNN
F 3 "" H 7500 3550 50  0001 C CNN
	1    7500 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	7500 3550 7500 3750
Wire Wire Line
	7650 3750 7500 3750
Text Label 7550 3750 0    50   ~ 0
VCC
Text Label 7550 3850 0    50   ~ 0
GND
Text Label 7550 3950 0    50   ~ 0
CS
Text Label 7550 4050 0    50   ~ 0
RST
Text Label 7550 4150 0    50   ~ 0
DC
Wire Wire Line
	7400 3850 7400 5200
Wire Wire Line
	7650 4250 6700 4250
Text Label 7450 4250 0    50   ~ 0
MOSI
Wire Wire Line
	7400 3850 7650 3850
Text Label 7500 4350 0    50   ~ 0
SCK
Text Label 7500 4450 0    50   ~ 0
LED
Text Label 7500 4550 0    50   ~ 0
MISO
$Comp
L Connector_Generic:Conn_01x03 J3
U 1 1 5FD92275
P 4450 3850
F 0 "J3" H 4368 3525 50  0000 C CNN
F 1 "DHT22" H 4368 3616 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 4450 3850 50  0001 C CNN
F 3 "~" H 4450 3850 50  0001 C CNN
	1    4450 3850
	-1   0    0    1   
$EndComp
Wire Wire Line
	4650 3750 5550 3750
$Comp
L power:GND #PWR0108
U 1 1 5FD94C03
P 4750 4100
F 0 "#PWR0108" H 4750 3850 50  0001 C CNN
F 1 "GND" H 4755 3927 50  0000 C CNN
F 2 "" H 4750 4100 50  0001 C CNN
F 3 "" H 4750 4100 50  0001 C CNN
	1    4750 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 3950 4750 3950
Wire Wire Line
	4750 3950 4750 4100
$Comp
L power:VCC #PWR0109
U 1 1 5FD9582E
P 4750 3500
F 0 "#PWR0109" H 4750 3350 50  0001 C CNN
F 1 "VCC" H 4765 3673 50  0000 C CNN
F 2 "" H 4750 3500 50  0001 C CNN
F 3 "" H 4750 3500 50  0001 C CNN
	1    4750 3500
	1    0    0    -1  
$EndComp
Wire Wire Line
	4750 3500 4750 3850
Wire Wire Line
	4750 3850 4650 3850
$Comp
L Connector_Generic:Conn_01x06 J4
U 1 1 5FD96414
P 6750 1800
F 0 "J4" H 6830 1792 50  0000 L CNN
F 1 "BMP280" H 6830 1701 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 6750 1800 50  0001 C CNN
F 3 "~" H 6750 1800 50  0001 C CNN
	1    6750 1800
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0110
U 1 1 5FD96FD9
P 6250 2200
F 0 "#PWR0110" H 6250 1950 50  0001 C CNN
F 1 "GND" H 6255 2027 50  0000 C CNN
F 2 "" H 6250 2200 50  0001 C CNN
F 3 "" H 6250 2200 50  0001 C CNN
	1    6250 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6550 2100 6250 2100
Wire Wire Line
	6250 2100 6250 2200
Wire Wire Line
	6250 2100 6250 1600
Wire Wire Line
	6250 1600 6550 1600
Connection ~ 6250 2100
$Comp
L power:VCC #PWR0111
U 1 1 5FD98829
P 6400 1500
F 0 "#PWR0111" H 6400 1350 50  0001 C CNN
F 1 "VCC" H 6415 1673 50  0000 C CNN
F 2 "" H 6400 1500 50  0001 C CNN
F 3 "" H 6400 1500 50  0001 C CNN
	1    6400 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 1500 6400 1700
Wire Wire Line
	6400 1700 6550 1700
Wire Wire Line
	5900 1800 6550 1800
$Comp
L arduini_pro_mini_moj:Arduini_Pro_Mini_moj U1
U 1 1 5FD6A88E
P 6050 3350
F 0 "U1" H 5950 2627 50  0000 C CNB
F 1 "Arduini_Pro_Mini_moj" H 5700 4300 50  0001 L BNN
F 2 "moj_jebeni_library_smece_usljivo_svicarsko:arduino_pro_mini_moj" H 5700 4300 50  0001 C CNN
F 3 "" H 5700 4300 50  0001 C CNN
	1    6050 3350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 1800 5900 2650
Wire Wire Line
	6000 2650 6000 1900
Wire Wire Line
	6000 1900 6550 1900
$EndSCHEMATC