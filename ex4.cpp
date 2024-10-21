#include <iostream>

// Declarații înainte pentru a folosi clasele reciproc
class ClassB;

class ClassA {
private:
    int valueA;  // Atribut privat

public:
    // Constructor pentru a seta valoarea atributului privat
    ClassA(int a) : valueA(a) {}

    // Declarație că ClassB este friend cu ClassA
    friend class ClassB;

    // Funcție friend pentru a accesa valoarea din ClassA
    friend void printValueA(ClassA& a);

    // Funcție pentru a afișa valoarea din ClassA
    void showValue() {
        std::cout << "Value in ClassA: " << valueA << std::endl;
    }
};

class ClassB {
private:
    int valueB;  // Atribut privat

public:
    // Constructor pentru a seta valoarea atributului privat
    ClassB(int b) : valueB(b) {}

    // Declarație că ClassA este friend cu ClassB
    friend class ClassA;

    // Funcție care accesează și afișează valoarea din ClassA
    void accessClassA(ClassA& a) {
        std::cout << "Accessing ClassA's value from ClassB: " << a.valueA << std::endl;
    }

    // Funcție pentru a afișa valoarea din ClassB
    void showValue() {
        std::cout << "Value in ClassB: " << valueB << std::endl;
    }
};

// Funcția friend care accesează atributul privat 'valueA'
void printValueA(ClassA& a) {
    std::cout << "Value in ClassA from friend function: " << a.valueA << std::endl;
}

int main() {
    // Creăm obiectele pentru cele două clase
    ClassA objectA(10);
    ClassB objectB(20);

    // Afișăm valorile din fiecare clasă
    objectA.showValue();
    objectB.showValue();

    // ClassB accesează valoarea privată din ClassA
    objectB.accessClassA(objectA);

    // Apelăm funcția friend pentru a afișa valoarea din ClassA
    printValueA(objectA);

    return 0;
}
