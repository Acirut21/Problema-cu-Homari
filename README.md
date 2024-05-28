# Problema-cu-Homari

## Descriere

Problema este axată pe un pescar care explorează o regiune de coastă bogată în homari, 
fiecare având dimensiune și valoare distincte exprimate în centimetri și, respectiv, în monede 
de aur. Pescarul are o plasă cu o capacitate limitată, măsurată în numărul total de centimetri 
pe care o poate conține. Obiectivul este să se dezvolte o strategie care să permită pescarului 
să selecteze homari în așa fel încât să maximizeze valoarea totală a capturii, respectând în 
același timp limita de capacitate a plasei.

Pentru rezolvarea problemei, trebuie să se decidă care homari să fie incluși în plasă și 
care să fie lăsați, astfel încât suma valorilor homarilor selectați să fie cea mai mare posibilă, 
fără a depăși capacitatea totală a plasei. Acest lucru implică alegerea unei combinații optime 
de homari pentru a umple plasa într-un mod eficient, astfel încât să se maximizeze profitul.

Problema este esențială în domeniul optimizării combinatoriale și este rezolvată de 
obicei folosind tehnici de programare dinamică sau algoritmi de căutare euristică, precum și 
altele, în funcție de natura și dimensiunea setului de date. Este un exemplu clasic de problemă 
de optimizare care apare în contextul planificării și luării deciziilor în logistica pescuitului.


## Problema

Un pescar explorează o regiune de coastă bogată în homari, fiecare având propria sa 
dimensiune (în centimetri) și valoare (în monede de aur). Plasa pescarului are o capacitate 
limitată, exprimată în numărul total de centimetri pe care o poate conține. Având o listă 
detaliată cu dimensiunile și valorile homarilor disponibili în acea regiune, sarcina este să se 
elaboreze o strategie prin care pescarul să selecteze homarii în așa fel încât să maximizeze 
valoarea totală a capturii, respectând în același timp limita de capacitate a plasei. Trebuie să 
se decidă care homari să fie incluși în plasă și care să fie lăsați, astfel încât suma valorilor 
homarilor selectați să fie cea mai mare posibilă, fără ca suma dimensiunilor acestora să 
depășească capacitatea plasei.

Imaginați-vă un scenariu în care un pescar are oportunitatea de a alege dintre o selecție 
de homari, fiecare cu o dimensiune și o valoare specificate, pentru a umple plasa sa care are o 
capacitate maximă. Scopul pescarului este de a maximiza valoarea totală a capturii sale fără a 
depăși limita de dimensiune a plasei.

## Exemplu
### Homari disponibili:
- Homarul A: Dimensiune = 4 cm, Valoare = 20 monede de aur
- Homarul B: Dimensiune = 3 cm, Valoare = 15 monede de aur
- Homarul C: Dimensiune = 2 cm, Valoare = 10 monede de aur
- Homarul D: Dimensiune = 5 cm, Valoare = 25 monede de aur

### Capacitatea plasei: 10 cm

Provocarea este de a selecta combinația de homari care maximizează valoarea totală fără a depăși o dimensiune totală de 10 cm.

### Soluție
O posibilă soluție ar implica alegerea homarilor A și C, oferindu-ne o dimensiune totală de 6 cm (4 cm + 2 cm) și o valoare totală de 30 monede de aur (20 + 10). Totuși, o soluție mai bună ar fi să alegem homarii B, C și D, care împreună au o dimensiune totală de 10 cm (3 cm + 2 cm + 5 cm) și oferă o valoare totală mai mare de 50 monede de aur (15 + 10 + 25). Această combinație umple exact capacitatea plasei și maximizează valoarea capturii.

## Utilizare
Pentru a utiliza acest program, compilați și rulați codul sursă disponibil în folderul Homari. Programul va alege o valoare random,**n**,cuprinsa intre 1000 si 10000 care determina numarul de homari dupa o alta valoare care determina capatitatea plasei dupa,**n** Homari cu dimensiuni si valoare date tot random.

## Contribuții
Proiect realizat de **Nicoli Andrei Claudiu** (student CR.1 - FACE).

Contribuțiile sunt binevenite! Dacă aveți sugestii de îmbunătățire a codului sau a documentației, vă rugăm să trimiteți un pull request.

## Licență
Acest proiect este licențiat sub [MIT License](LICENSE).
