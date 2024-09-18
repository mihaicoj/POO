1. Carte

Clasa Carte reprezintă o carte din bibliotecă. Ea conține următoarele atribute:

	•	titlu: Titlul cărții.
	•	autor: Autorul cărții.
	•	isbn: Codul ISBN (International Standard Book Number) care identifică în mod unic o carte.

Metode:

	•	__init__(self, titlu, autor, isbn): Constructorul care inițializează un obiect carte cu un titlu, autor și ISBN.
	•	__str__(self): Reprezentarea sub formă de șir de caractere a unei cărți, utilizată atunci când o carte este afișată.

2. Biblioteca

Clasa Biblioteca reprezintă o colecție de cărți. Aceasta permite adăugarea, ștergerea și afișarea tuturor cărților din bibliotecă.

Atribute:

	•	carti: O listă care stochează obiecte de tip Carte.

Metode:

	•	__init__(self): Inițializează o listă goală pentru a stoca cărțile din bibliotecă.
	•	adauga_carte(self, carte): Adaugă o carte în listă.
	•	sterge_carte(self, isbn): Șterge o carte din listă pe baza codului ISBN.
	•	afiseaza_carti(self): Afișează toate cărțile disponibile în bibliotecă.
