#ifndef ADC_H
#define ADC_H

// Diese Beispiel zeigt die Anwendung des ADC eines ATmega169
// unter Verwendung der internen Referenzspannung von nominell 1,1V.
// Zur Anpassung an andere AVR und/oder andere Referenzspannungen
// siehe Erläuterungen in diesem Tutorial und im Datenblatt

/* ADC initialisieren */
void ADC_Init(void);

/* ADC Einzelmessung */
uint16_t ADC_Read( uint8_t channel );

/* ADC Mehrfachmessung mit Mittelwertbbildung */
/* beachte: Wertebereich der Summenvariablen */
uint16_t ADC_Read_Avg( uint8_t channel, uint8_t nsamples );

#endif // ADC_H