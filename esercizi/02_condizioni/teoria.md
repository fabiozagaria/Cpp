# Condizioni e operatori

## Cosa impari

`if` esegue un blocco quando una condizione è vera; `else` gestisce il caso alternativo. Con `else if` scegli tra più casi. Gli operatori di confronto sono `==`, `!=`, `<`, `<=`, `>` e `>=`. `=` assegna: non è un confronto.

Combina condizioni con `&&` (entrambe vere), `||` (almeno una vera), `!` (negazione). Gli operatori `&&` e `||` valutano il secondo operando solo se necessario. `%` calcola il resto tra interi: `n % 2 == 0` identifica i numeri pari. Usa le parentesi graffe anche per blocchi brevi.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Leggi un voto intero da 0 a 30. Stampa Insufficiente per 0–17, Sufficiente per 18–23, Buono per 24–27, Ottimo per 28–30. Rifiuta valori fuori intervallo o non numerici.

Input di prova:

```text
27
```

Output atteso:

```text
Buono
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
