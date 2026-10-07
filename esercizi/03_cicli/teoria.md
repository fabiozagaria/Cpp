# Cicli e accumulatori

## Cosa impari

`for` è adatto quando conosci il numero di ripetizioni: `for (int i = 0; i < n; ++i)`. Le tre parti inizializzano, verificano e aggiornano il contatore. `while` ripete finché la condizione è vera; `do...while` esegue il corpo almeno una volta.

Un accumulatore conserva un risultato parziale: inizializza una somma a zero e aggiornala nel ciclo. `break` termina il ciclo; `continue` passa all'iterazione successiva. Attenzione ai limiti (`<` rispetto a `<=`) e ai cicli infiniti: qualcosa deve avvicinare la condizione alla fine.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Leggi n tra 1 e 1000. Con un ciclo calcola la somma degli interi da 1 a n inclusi. Non usare la formula matematica nella soluzione; usala per controllare il risultato.

Input di prova:

```text
5
```

Output atteso:

```text
Somma: 15
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
