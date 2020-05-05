#include <iostream>

class Person{
  public:
    int age{};
    explicit Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge){
    if (initialAge < 0) {
        age = 0;
        std::cout << "Age is not valid, setting age to 0.\n";
    } else {
        age = initialAge;
    }
}

void Person::amIOld(){
    if (age < 13) {
        std::cout << "You are young.\n";
    } else if (age >= 13 && age < 18) {
        std::cout << "You are a teenager.\n";
    } else {
        std::cout << "You are old.\n";
    }
}

void Person::yearPasses(){
    age++;
}


// code below is boilerplate from the exercise
int main(){
    int t;
    int age;
    std::cin >> t;
    for(int i=0; i < t; i++) {
        std::cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();
        std::cout << '\n';
    }
    return 0;
}