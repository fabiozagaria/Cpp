# Percorso C++ per studiare in autonomia

Il percorso parte dalle basi e usa **C++17**. Ogni file `.cpp` è un programma indipendente con il proprio `main`: compila un file alla volta.

## Come studiare

1. Leggi `teoria.md` nella cartella del modulo.
2. Leggi `esempio.cpp`, prevedi cosa farà e poi eseguilo.
3. Completa i TODO di `esercizio.cpp`: contiene consegna, suggerimenti e casi di prova. Lo scheletro compila ma non svolge ancora l'esercizio.
4. Confronta l'output con quello atteso e prova i casi limite.
5. Solo dopo apri `soluzioni/esercizio.cpp`. Se ti blocchi, leggi una parte, chiudi la soluzione e riprova.
6. Passa al modulo successivo quando sai spiegare il tuo codice e modificarlo senza copiare.

## Ordine consigliato

1. [Variabili, tipi e input/output](01_variabili_input_output/teoria.md)
2. [Condizioni e operatori](02_condizioni/teoria.md)
3. [Cicli e accumulatori](03_cicli/teoria.md)
4. [Funzioni, valore e riferimento](04_funzioni_riferimenti/teoria.md)
5. [Sequenze con std::vector](05_vector/teoria.md)
6. [Stringhe e lettura di righe](06_stringhe/teoria.md)
7. [Struct e dati composti](07_struct/teoria.md)
8. [Classi e incapsulamento](08_classi/teoria.md)

## Compilazione ed esecuzione

Installa un compilatore che supporti C++17, per esempio GCC/g++ o Clang. Un editor da solo non è un compilatore. Apri un terminale nella radice del repository.

Su Linux/macOS (con g++ disponibile):

```sh
g++ -std=c++17 -Wall -Wextra -Wpedantic esercizi/01_variabili_input_output/esempio.cpp -o /tmp/cpp-esempio
/tmp/cpp-esempio
```

Su Windows PowerShell, con MinGW/g++ installato e presente nel PATH:

```powershell
g++ -std=c++17 -Wall -Wextra -Wpedantic esercizi/01_variabili_input_output/esempio.cpp -o esempio.exe
.\esempio.exe
```

Per allenarti sostituisci `esempio.cpp` con `esercizio.cpp` e poi cambia il nome della cartella. Digita i valori di input separati da spazi oppure Invio. Per le stringhe scrivi una riga intera. Per la classe Salvadanaio non serve input.

Leggi il primo messaggio del compilatore e correggilo prima degli altri. Gli avvisi spesso segnalano errori: non ignorarli. Se i dati non rispettano la consegna, le soluzioni terminano con codice 1; i messaggi di errore possono variare e non fanno parte dell'output atteso.

## Piccole sfide dopo gli esercizi

- Rettangolo: calcola anche il costo di una recinzione dato il prezzo al metro.
- Voti: conta quanti voti sono sufficienti usando un ciclo.
- Vector: calcola quanti elementi superano la media.
- Stringhe: conta separatamente ciascuna vocale.
- Studenti: calcola la media della classe.
- Salvadanaio: aggiungi un menu ripetuto con deposito, prelievo e uscita.
