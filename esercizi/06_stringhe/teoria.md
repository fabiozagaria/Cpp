# Stringhe e lettura di righe

## Cosa impari

`std::string` (include `<string>`) rappresenta testo. Puoi concatenare con `+`, contare i caratteri con `size()` e visitare i caratteri con un ciclo. `std::cin >> parola` si ferma agli spazi; `std::getline(std::cin, riga)` legge una riga intera, anche vuota.

Se usi getline dopo una lettura con `>>`, resta il carattere di fine riga: puoi rimuoverlo con `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')` includendo `<limits>`. Le stringhe memorizzano byte: size() non conta necessariamente le lettere visibili di testo UTF-8. In questi esercizi lavoriamo solo con caratteri ASCII.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Leggi una riga, anche vuota. Conta le vocali ASCII a/e/i/o/u sia minuscole sia maiuscole e stampa il totale. Spazi e altri caratteri non sono vocali.

Input di prova:

```text
Ciao mondo
```

Output atteso:

```text
Vocali: 5
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
