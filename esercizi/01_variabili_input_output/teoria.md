# Variabili, tipi e input/output

## Cosa impari

Un programma parte da `main()`. `#include <iostream>` rende disponibili `std::cin` e `std::cout`. Una variabile ha un tipo e un valore: `int` per interi, `double` per decimali, `bool` per vero/falso, `std::string` per testo (include `<string>`). Inizializza sempre le variabili. Usa `const` per valori che non devono cambiare.

`std::cin >> valore` legge un dato; `std::cout << valore` lo stampa. `\n` va a capo. La divisione tra interi tronca: `5 / 2` vale 2, mentre `5.0 / 2` vale 2.5. Controlla il successo della lettura con `if (!(std::cin >> valore))`.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Leggi base e altezza di un rettangolo come double, entrambe positive. Stampa area e perimetro. Rifiuta dati non numerici o non positivi.

Input di prova:

```text
3 4
```

Output atteso:

```text
Area: 12
Perimetro: 14
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
