// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct A
{
    // Default are public:
    int ia;
    int ib;
    int ic;
};

class B
{
    // Default are private -> set to public
  public:
    int ia;
    int ib;
    int ic;
};

// The only difference between struct and class is that struct are default to public
// while class are default to private

int main(int argc, char **argv)
{

    A a = {1, 2, 3};
    A *pa = &a;
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic);
    B b = {4, 5, 6};
    printf("ia is %d, ib is %d, ic is %d\n", b.ia, b.ib, b.ic);
    return 0;
}
