Vorgespräch:
    - Stromkreislauf:
        - Widerstand/Strom Messen
        - Leistung
    - Temperaturabhängige Widerstände:
        - nahezu linearen Zusammenhang des Widerstandes mit der Temperatur
        - Heißleiter oder Kaltleiter?
        - wie Temperatur messen?  Konstantstromquelle + Spannungsmessgerät 
    - Programmierstruktur:
	    - if
        - for
        - while
    - Datentypen:
        integer, bool, float
    - Reglungen:
        Zweipunkt-, Proportional-, Integralreglung
während der Strom konstant bleibt.
    
Raspberry Pi:
    - Aufnahme von Messdaten:
        - zeige: Kanäle auslesen:
            - mit AA Baterie probieren lassen: Kanal 2 = Spannung(Analogeingang 2)  
            - Kanal 3: innerer 1kΩ
        - Aufgabe 1.1: Widerstand am von Kanal 2 bestimmen
        - Aufgabe 1.2: Temperaturkalibrierung des PT-1000
        - Aufgabe 1.3: Abkühlkurve (Mittagszeit)
            - ca. 1h Daten aufnehmen
    - Heizregelungen:
        - zeige: manueller Lampentest
            - 4,999999 V ist höchste Leistung
        - Aufgaben:
            - Regelparameter variieren
            - Konstanten in output schreiben    
            - Aufgabe 2.1: Heizrampe 
            - Aufgabe 2.2: Zweipunkt-Regelung,
            - Aufgabe 2.3: Proportional-Regelung
            - Aufgabe 2.4: PI-Regelung
                - Integral- und Proportionalteil mitschreiben
                - ggf. Integralzeit beschränken

Netzteil erklären: 
    - CC vs CV: Constant Current/Constant Voltage
        - mit Halogenlampe: max 12V

LabView:
    - Einführung:
        - erst in NI MAX: 
            - output: Ansteuerung des Netzteils: Halogenlampe, Faktor
            - input: Frequenzgenerator: 
                - 5 x 0,2Hz sieht gut aus, 
                - 5 x 2Hz ist langsamer, unstabil beim Wackeln des NI Fensters: Sampling Problem, Moiré-Effekt:
        - in LabView beides nachbauen lassen
            - output: Programmende --> output=0
                - habe mir gestern die Finger verbrannt
            - input: erst ohne, dann mit Mittelwert
        - Thermometer einbauen:
            - Faktor schätzen lassen, dann Faktor implimentieren
    - Aufgabe 3.1: Heizrampe 
    - Aufgabe 3.2: Zweipunkt-Regelung,
    - Aufgabe 3.3: Proportional-Regelung
    - Aufgabe 3.4: Widerstands Kennlinie
        - Abbruchbedingung bei 3W: Implimentation erklären lassen und mit Lampe ausprobiren
        - großer Widerstand: CV begrengt die Spannung früh

Svens Spezial: Auswertung mit Python-Notebook






