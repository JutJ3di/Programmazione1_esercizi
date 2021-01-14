Si realizzi la gerarchia Attivita (classe base), Processo (classe derivata). La classe Attivita ha le
variabili menbro:
? PID (intero),
? Descrizione (stringa di caratteri allocata dinamicamente),
? Started (boolean).
La classe Processo aggiunge le variabili membro:
? NomeImmagine (stringa di caratteri allocata dinamicamente)
? Stato (carattere). Lo stato può essere R (in esecuzione), P (Pronto), W (In attesa).
Si implementino per le classi della gerarchia le funzionalità necessarie ad una corretta gestione
dell’estensione dinamica, l’overloading degli operatori >> e <<, le funzioni set e get. Si implementi
per entrambe le classi la funzionalità Attiva che implementata dalla classe Attività pone a true la
variabile membro Started e implementata dalla classe Processo pone a true la variabile membro
Started e a R la variabile membro Stato solo se lo stato corrente è P.
Si realizzi quindi una coda di processi ricorrendo ad una implementazione mediante lista a
puntatori. la cui funzione di inserimento effettua un normale inserimento in coda FIFO, mentre la
funzione di estrazione elimina dalla coda il primo dei processi pronti. Si gestiscano ovviamente i
casi coda piena, coda vuota e assenza di processi pronti. La funzione di inserimento lancia una
eccezione (classe definita dallo studente) nel caso si tenti di inserire in coda un PID già presente. Si
implementino inoltre le funzionalità
? GetP che restituisce il numero dei processi pronti presenti nella coda,
? Schedule che fornito in ingresso un PID consente di attivare il processo corrispondente (se
possibile) e comporta la rimozione immediata dalla coda
? Show che stampa a video l’elenco dei processi in coda
? Store che stampa tale elenco su file di tipo testo.
Si realizzi un programma di test che consenta all’utente di operare sulla coda attraverso un menù,
consentendo le operazioni di inserimento, attivazione, rimozione, show e stampa.
