# Classi e incapsulamento

## Cosa impari

Una classe combina stato (dati) e comportamento (metodi). `private` protegge i dati dall'accesso esterno; `public` espone le operazioni disponibili. I membri di una class sono privati per impostazione predefinita. Il costruttore ha lo stesso nome della classe e inizializza l'oggetto: `Contatore() : valore_(0) {}`.

Un metodo come `int valore() const` promette di non modificare l'oggetto. L'incapsulamento permette di mantenere regole, ad esempio impedire un saldo negativo. Puoi restituire `bool` per indicare se un'operazione è riuscita. Mantieni i calcoli monetari in centesimi interi per evitare approssimazioni dei decimali.

## Esempio guidato

Apri [esempio.cpp](esempio.cpp), prevedi l'output e poi compilalo. Modifica un valore e osserva cosa cambia.

## Ora applica la teoria

Apri [esercizio.cpp](esercizio.cpp).

Implementa un Salvadanaio con saldo privato iniziale zero e metodi bool deposita(int), bool preleva(int), int saldo() const. Accetta solo importi positivi fino a 100000 centesimi e mantieni il saldo entro 100000. Un prelievo superiore al saldo fallisce senza modificarlo. Nel main prova deposito di 1000, prelievo di 300 e prelievo di 800.

Input di prova:

```text
(nessun input)
```

Output atteso:

```text
Deposito: 1
Prelievo 300: 1
Prelievo 800: 0
Saldo: 700
```

Prova anche i casi limite indicati nei commenti. Dopo il tentativo, confronta [la soluzione](soluzioni/esercizio.cpp) e spiega a parole le differenze.
