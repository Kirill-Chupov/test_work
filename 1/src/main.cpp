class Foo {
public:
    Foo(int j) {
        i_ = new int[j];
    }
    virtual ~Foo() { delete[] i_; }
private:
    int* i_ = nullptr;
};

class Bar: public Foo {
public:
    Bar(int j, int size)
        : Foo{size} {
        i_ = new char[j];
    }
    ~Bar() { delete[] i_; }
private:
    char* i_ = nullptr;
};


int main() {
    Foo* f= new Foo(100);
    Foo* b= new Bar(200, 100);
    delete f;
    f=b;
    delete b;
}
