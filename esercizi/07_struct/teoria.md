# Struct e dati composti

## Cosa impari

Una `struct` raggruppa campi collegati: `struct Punto { double x; double y; };`. Crea un oggetto con `Punto p{1.0, 2.0};` e accedi ai campi con `p.x`. I membri di una struct sono pubblici per impostazione predefinita.

Puoi usare `std::vector<Studente>` per una raccolta di record e passare un record a una funzione con `const Studente&` per leggerlo senza copiarlo. Se un oggetto deve far rispettare regole quando cambia, una classe con dati privati può essere più adatta (prossimo modulo).

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Crea struct Studente con nome (una parola) e voto. Leggi n tra 1 e 100, poi n studenti con voti tra 0 e 30. Stampa nome e voto dello studente con voto maggiore; a parità scegli il primo.

Input di prova:

```text
3 Anna 24 Luca 29 Sara 29
```

Output atteso:

```text
Luca 29
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
