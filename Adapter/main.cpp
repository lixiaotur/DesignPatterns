#include "Target.h"
#include "Adapter.h"
#include "Adaptee.h"

/*定义为将一个类的接口变换成客户端所期待的一种接口，
从而使原本因接口不匹配而无法在一起工作的两个类能够在一起工作。*/

int main()
{
    Adaptee adaptee;
    Target *t = new Adapter(&adaptee);
    t->operate();

    return 0;
}
