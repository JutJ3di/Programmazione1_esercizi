Si implementi un programma per la gestione di un garage. Il garage ha 20 posti che possono
ospitare autoveicoli, ogni posizione è identificata da un numero tra 0 a 19. Il garage può accettare
solo automobili e motociclette. Si implementi la classe Garage ricorrendo ad una rappresentazione
mediante vettore allocato staticamente. La classe Garage offre le seguenti funzionalità:
- Immissione di un nuovo veicolo nel garage , se possibile, ritorna il numero di posto
assegnato o un valore negativo se l’immissione non è possibile. Lancia una eccezione
(classe definita dallo studente) nel caso si tenti di inserire un veicolo diverso da una
automobile o da una motocicletta.
- Estrazione dal garage del veicolo che occupa un determinato posto (il numero è fornito in
ingresso).
- Stampa a video della situazione corrente del garage.
- Stampa su file di tipo testo della situazione corrente del garage.
Si implementi la gerarchia Veicolo a Motore (classe base), Automobile, Motocicletta. Tutta le
classi della gerarchia devono fornire la funzionalità ToText che ritorna un’unica stringa di caratteri
contenente tutti i dati dell’oggetto separati da un carattere spazio (viene utilizzata per stampare su
file di tipo testo le informazioni relative allo stato dell’oggetto). La classe base ha le seguenti
variabili membro: NomeTipo (stringa di caratteri allocata dinamicamente), Marca (stringa di
caratteri allocata dinamicamente). Si forniscano per la classe tutte le funzionalità necessarie ad una
corretta gestione dell’estensione dinamica, la funzione get per NomeTipo, l’overloading degli
operatori << e >>. La classe Automobile aggiunge la variabile membro Alimentazione (stringa di
caratteri allocata dinamicamente), la classe Motocicletta aggiunge la variabile membro Tipo (stringa
di caratteri allocata dinamicamente). Anche Automobile e Motocicletta forniscono le funzionalità
necessarie ad una corretta gestione dell’estensione dinamica e l’overloading degli operatori << e
>>.
Si realizzi un programma di test che istanzi un garage ed implementi un menù che consenta
all’utente di scegliere tra l’inserimento di una automobile o di una moto, l’estrazione di un veicolo,
la stampa della situazione corrente del garage a video, la memorizzazione della situazione corrente
su file.
