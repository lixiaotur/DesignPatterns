#include "Target.h"
#include "Adapter.h"
#include "Adaptee.h"

/*����Ϊ��һ����Ľӿڱ任�ɿͻ������ڴ���һ�ֽӿڣ�
�Ӷ�ʹԭ����ӿڲ�ƥ����޷���һ�������������ܹ���һ������*/

int main()
{
    Adaptee adaptee;
    Target *t = new Adapter(&adaptee);
    t->operate();

    return 0;
}
