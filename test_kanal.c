#include "utilities.h"

/*
 * Hilfreiche Funktionen:
 * 
 * * * start()
 * Initialisiert die Hardware
 * 
 * * * ende()
 * Schaltet die Lampe und die Hardware aus
 * 
 * * * time_ms()
 * Gibt aktuelle Laufzeit des Programms in ms zurück
 * output:  int
 * 
 * * * wait_ms(time)
 * Lässt das Programm pausieren
 * input: int time: Pause in ms 
 *
 * * * get_volt(canal) 
 * Gibt die gemesse Spannung in Volt für einen bestimmten 
 * Kanal aus, braucht ca. 0,2 Sekunden
 * input: int canal: Kanalnummer
 * output: float 
 * 
 * * * set_lamp(power)
 * Stellt die Leitung der Lampe ein
 * input: float power: Leistung
 * 
 * * * clear()
 * Bereinigt den Terminal
 * 
 * * * temp_sensor2(resistance)
 * Berechnet die Temperatur in C° für den Temperatursensor 2
 * input: float resistance: der aktuelle Widerstand
 * output: float: Temperatur
 */

int  main()
{
	start();
	int c, ch_num = 4;

 	while (time_ms() < 10*1000)
	{	
		for (c = 0; c < ch_num; c++)
		{
			printf("Kanal %i: %f Volt \n", c, get_volt(c));
		}
		printf("\33[%dA", ch_num);
	}
	
	ende();
	return 0;
}
