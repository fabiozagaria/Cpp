# Funzioni, valore e riferimento

## Cosa impari

Una funzione raggruppa un'operazione: `int doppio(int n) { return n * 2; }`. Il tipo iniziale indica il risultato; `void` indica che non restituisce un valore. Definisci la funzione prima dell'uso oppure dichiarane prima il prototipo. Le variabili locali esistono nel proprio blocco.

Un parametro `int x` riceve una copia: modificarlo non cambia l'originale. `int& x` è un riferimento all'originale: modificarlo cambia la variabile chiamante. `const T&` permette di leggere un oggetto senza copiarlo né modificarlo. Non restituire riferimenti a variabili locali: alla fine della funzione non esistono più.

Il `test.cpp` nella radice del repository mostra proprio la differenza tra copia e riferimento.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Implementa void scambia(int& a, int& b) usando una variabile temporanea. Leggi due interi e stampa i valori dopo lo scambio. Non usare std::swap.

Input di prova:

```text
3 8
```

Output atteso:

```text
8 3
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
