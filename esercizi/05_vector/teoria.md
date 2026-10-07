# Sequenze con std::vector

## Cosa impari

`std::vector<T>` (include `<vector>`) contiene una sequenza di elementi del tipo T. `std::vector<int> numeri{3, 7, 2};` crea tre elementi. `push_back` aggiunge un elemento, `size()` conta gli elementi ed `empty()` controlla se la sequenza è vuota.

Gli indici partono da zero: l'ultimo è `size() - 1`, soltanto se il vector non è vuoto. `v[i]` non controlla il limite; `v.at(i)` lo controlla e può lanciare un'eccezione. `for (int valore : v)` visita tutti gli elementi. Usa `const auto&` per leggere elementi complessi senza copie. Evita di conservare riferimenti agli elementi mentre aggiungi dati: una riallocazione può invalidarli.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Leggi n tra 1 e 100, poi n interi tra -1000 e 1000 in un vector. Calcola minimo, massimo e media decimale. Inizializza minimo e massimo dal primo elemento.

Input di prova:

```text
4 2 8 -2 4
```

Output atteso:

```text
Minimo: -2
Massimo: 8
Media: 3
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
