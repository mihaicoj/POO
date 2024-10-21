#include <iostream>
#include <string>




//Partea 1 
//Avantajele programarii orientate pe obiecte fata de programarea procedurala are urmatoarele avantaje:
//1. Incapsularea care protejeaza datele prin ascunderea detaliilor de implementare si ofera un acces controlat prin metode publice.
//2. Polimorfism care ofera flexibilitatea codului permitand tratarea obiectelor de diferite tipuri intr-un mod unificat.
//3. Modularitatea semnifica ca codul este mai usor de gestionas si extins fiinda obiectele grupeaza date si comportamente intr-un singur loc.
//4. Mostenirea care permite reutilizarea codului prin definirea de clase noi bazate pe clase existente. Reduce duplicarea codului.



#include <iostream>

class Person {
private:
    std::string name;  // variabilă privată

public:
    // Metodă publică pentru a seta numele
    void setName(std::string n) {
        name = n;
    }

    // Metodă publică pentru a obține numele
    std::string getName() {
        return name;
    }
};

int main() {
    Person person;
    
    // Setăm numele folosind metoda publică
    person.setName("Alice");
    
    // Afișăm numele folosind metoda publică
    std::cout << "Name: " << person.getName() << std::endl;

    return 0;
}
