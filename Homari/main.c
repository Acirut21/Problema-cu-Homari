#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcția pentru a găsi valoarea maximă dintre două valori întregi
long max(long a, long b) {
    if (a > b)// Returnează valoarea maximă dintre a și b
        return a;
    else return b;
}

// Funcția pentru a calcula valoarea maximă a homarilor care pot fi capturati, folosind programarea dinamică
long max_valoare_homari(long dimensiuni[], long valori[], long n, long capacitate) {
    // Vector pentru a stoca valorile maxime posibile pentru fiecare capacitate de la 0 la capacitate
    long dp[capacitate + 1];

    // Inițializarea vectorului dp cu 0
    for (long i = 0; i <= capacitate; i++) {
        dp[i] = 0;
    }

    // Iterăm prin fiecare homar
    for (long i = 0; i < n; i++) {
        // Iterăm prin capacități de la capacitate în jos, pentru a evita suprascrierea datelor din dp
        for (long j = capacitate; j >= dimensiuni[i]; j--) {
            // Actualizăm dp[j] dacă includerea homarului i oferă o valoare mai mare
            dp[j] = max(dp[j], dp[j - dimensiuni[i]] + valori[i]);
        }
    }

    // Returnăm valoarea maximă posibilă pentru capacitatea plasei
    return dp[capacitate];
}

int main() {
    long n, capacitate;

    srand(time(0));
    // Citirea numărului de homari de la utilizator
    printf("Introduceți numărul de homari: \n");
    //scanf("%d", &n);
    n = 1000 + rand() % 9000;
    printf("%ld\n",n);
    // Citirea capacității maxime a plasei de la utilizator
    printf("Introduceți capacitatea plasei: \n");
    //scanf("%d", &capacitate);
    capacitate = 1000 + rand() % (100000000 - 1000 + 1);
    printf("%ld\n",capacitate);

    // Alocarea dinamică a memoriei pentru array-urile dimensiuni și valori
    long *dimensiuni = (long *)malloc(n * sizeof(long));
    long *valori = (long *)malloc(n * sizeof(long));

    // Verificarea alocării corecte a memoriei
    if (dimensiuni == NULL || valori == NULL) {
        printf("Eroare la alocarea memoriei.\n");
        return 1; // Ieșire cu cod de eroare
    }

    // Citirea dimensiunilor și valorilor pentru fiecare homar de la utilizator
    for (long i = 0; i < n; i++) {
        printf("\nHomarul %ld: ",i+1);
        printf("\nIntroduceți dimensiunea: ");
        //scanf("%d", &dimensiuni[i]);
        dimensiuni[i] = 1000 + rand() % (100000000 - 1000 + 1);
        printf("%ld\n", dimensiuni[i]);
        printf("Introduceți valoarea: ");
        //scanf("%d", &valori[i]);
        valori[i] = 1000 + rand() % (100000000 - 1000 + 1);
        printf("%ld\n", valori[i]);
        printf("\n");
    }

    int poate_captura = 0;
    for (int i = 0; i < n; i++) {
        if (dimensiuni[i] <= capacitate) {
            poate_captura = 1; //Verificarea daca poate fi capturat
            break;
        }
    }

    if(!poate_captura) {
        printf("Capacitatea plasei este prea mică pentru a captura orice homar.\n");
        return 0;
    }
    else{
        // Calcularea valorii maxime a capturii folosind funcția max_valoare_homari
        long valoare_maxima = max_valoare_homari(dimensiuni, valori, n, capacitate);
        printf("Valoarea maximă a capturii este: %ld\n", valoare_maxima);
    }


    // Eliberarea memoriei alocate dinamic pentru array-urile dimensiuni și valori
    free(dimensiuni);
    free(valori);

    return 0;
}
