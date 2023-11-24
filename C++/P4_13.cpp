#include <iostream>
using namespace std;

class father {
protected:
    int age;

public:
    father(int x) : age(x) {}

    virtual void iam() {
        cout << "FATHER,age is: " << age << endl;
    }
};

class son : public father {
public:
    son(int x) : father(x) {}

    void iam() override {
        cout << "SON,age is: " << age << endl;
    }
};

class daughter : public father {
public:
    daughter(int x) : father(x) {}

    void iam() override {
        cout << "DAUGHTER,age is: " << age << endl;
    }
};

int main() {
    father fatherObj(45);
    son sonObj(20);
    daughter daughterObj(25);

    father* ptrFather = nullptr;

    // Polymorphism 
    ptrFather = &fatherObj;
    ptrFather->iam();

    ptrFather = &sonObj;
    ptrFather->iam();

    ptrFather = &daughterObj;
    ptrFather->iam();

    return 0;
}
