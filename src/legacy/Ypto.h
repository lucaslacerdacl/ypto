class Ypto {
private:
    int a;
    int b;
    int c;
public:
    Ypto (int a1 = 0, int b1 = 0, int c1 = 0) : a(a1), b(b1), c(c1) {};
    int produto() const {
        return (a*b*c);
    };
    int soma() const {
        return (a+b+c);
    };
    int getA() const {
        return a;
    };
    int getB() const {
        return b;
    }
    int getC() const {
        return c;
    };
    void setA(int a1) {
        a = a1;
    }
    void setB(int b1) {
        b = b1;
    }
    void setC(int c1) {
        c = c1;
    }

};