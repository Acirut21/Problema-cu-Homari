import random
import time

# Funcția pentru a găsi valoarea maximă dintre două valori întregi
def max(a, b):
    return a if a > b else b

# Funcția pentru a calcula valoarea maximă a homarilor care pot fi capturați, folosind programarea dinamică
def max_valoare_homari(dimensiuni, valori, n, capacitate):
    # Vector pentru a stoca valorile maxime posibile pentru fiecare capacitate de la 0 la capacitate
    dp = [0] * (capacitate + 1)

    # Iterăm prin fiecare homar
    for i in range(n):
        # Iterăm prin capacități de la capacitate în jos, pentru a evita suprascrierea datelor din dp
        for j in range(capacitate, dimensiuni[i] - 1, -1):
            # Actualizăm dp[j] dacă includerea homarului i oferă o valoare mai mare
            dp[j] = max(dp[j], dp[j - dimensiuni[i]] + valori[i])

    # Returnăm valoarea maximă posibilă pentru capacitatea plasei
    return dp[capacitate]

def main():
    random.seed(time.time())

    # Generarea numărului de homari în mod aleatoriu
    n = 1000 + random.randint(0, 9000)
    print("Numărul de homari:", n)

    # Generarea capacității maxime a plasei în mod aleatoriu
    capacitate = 1000 + random.randint(0, 100000000 - 1000 + 1)
    print("Capacitatea plasei:", capacitate)

    # Generarea dimensiunilor și valorilor aleatoare pentru fiecare homar
    dimensiuni = [1000 + random.randint(0, 100000000 - 1000 + 1) for _ in range(n)]
    valori = [1000 + random.randint(0, 100000000 - 1000 + 1) for _ in range(n)]

    # Verificăm dacă există vreun homar care poate fi capturat cu capacitatea plasei date
    poate_captura = any(dim <= capacitate for dim in dimensiuni)

    if not poate_captura:
        print("Capacitatea plasei este prea mică pentru a captura orice homar.")
    else:
        # Calculăm valoarea maximă a capturii folosind funcția max_valoare_homari
        valoare_maxima = max_valoare_homari(dimensiuni, valori, n, capacitate)
        print(f"Valoarea maximă a capturii este:" ,valoare_maxima)

if __name__ == "__main__":
    main()
