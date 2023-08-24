interface vehical {
    string name;
    string color;

    void drive();
    void honk();
}

abstract class car implements interface {
    void drive() {

    }
}

class car implements interface {
    void drive() {

    }

    void honk() {

    }
}

class bus implements interface {
    void drive() {

    }

    void honk() {

    }
}

class truck implements interface {
    void drive() {

    }

    void honk() {

    }
}

vehical v1 = new car()
vehical v2 = new truck()
vehical v3 = new bus()


class washing_depot {
    void wash(vehical v) {
        v.drive()
    }
}


