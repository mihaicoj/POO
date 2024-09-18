class Carte:
    def __init__(self, titlu, autor, isbn):
        self.titlu = titlu
        self.autor = autor
        self.isbn = isbn

    def __str__(self):
        return f"Titlu: {self.titlu}, Autor: {self.autor}, ISBN: {self.isbn}"

class Biblioteca:
    def __init__(self):
        self.carti = []

    def adauga_carte(self, carte):
        self.carti.append(carte)
        print(f'Cartea "{carte.titlu}" adaugata in biblioteca.')

    def sterge_carte(self, isbn):
        for carte in self.carti:
            if carte.isbn == isbn:
                self.carti.remove(carte)
                print(f'Cartea "{carte.titlu}" a fost stearsa din biblioteca.')
                return

    def afiseaza_carti(self):
            print("Cărțile disponibile în bibliotecă:")
            for carte in self.carti:
                print(carte)

if __name__ == "__main__":
    carte1 = Carte("Amintiri din copilarie", "Ion Creanga", "233")
    carte2 = Carte("Ion", "Liviu Rebreanu", "299")
    carte3 = Carte("Enigma Otiliei", "George Calinescu", "9911")
    
    biblioteca = Biblioteca()
    biblioteca.adauga_carte(carte1)
    biblioteca.adauga_carte(carte2)
    biblioteca.adauga_carte(carte3)
    
    biblioteca.afiseaza_carti()
    
    biblioteca.sterge_carte("233")
    
    biblioteca.afiseaza_carti()

    biblioteca.sterge_carte("299")

    biblioteca.afiseaza_carti()