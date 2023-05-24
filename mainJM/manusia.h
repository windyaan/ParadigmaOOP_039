#ifndef MANUSIA_H
#define MANUSIA_H

class manusia {
public:
    std::string name;
    jantung varJantung;

    manusia(std::string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};

#endif