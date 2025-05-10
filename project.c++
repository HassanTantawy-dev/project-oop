#include <iostream>
#include <string>
using namespace std;

class creator
{
private:
    int num;
    string message;

public:
    creator(int num, string message)
    {
        this->num = num;
        this->message = message;
        cout << "object number {" << num << "} constructor run {" << message << endl;
    }
    ~creator()
    {
        cout << "object number {" << num << "} ~destructor run {" << message << endl;
    }
};

void test()
{
    creator s6 = {6, "from test"};
    creator s7(7, "from test");
}

int main()
{
    creator s1(1, "from main");
    creator s2(2, "from main");
    test();

    creator *s3 = new creator(3, "from main dynamic allocation");
    delete s3;

    creator s4(4, "from main");
    creator s5(5, "from main");

    return 0;
};