#include <vector>
#include <memory>

extern int *values;
extern const int VALUES_SIZE;

class MyBlah {};

class Adapter {
public:
    Adapter(){
        Init();
    }

private:
    std::vector<std::unique_ptr<MyBlah>> collection_;
private:
    void Init() {
        for (int i = 0; i < VALUES_SIZE; ++i) {
            collection_.push_back(std::make_unique<MyBlah>());
        }
    }
};
