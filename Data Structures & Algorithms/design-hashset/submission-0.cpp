class MyHashSet {
public:

    bool present[1000001] = {};

    MyHashSet() {

    }

    void add(int key) {
        present[key] = true;
    }

    void remove(int key) {
        present[key] = false;
    }

    bool contains(int key) {
        return present[key];
    }
};