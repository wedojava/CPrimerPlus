// Output:
// [   Init  ]:    *pp2 = 0x7ffeee402d98,	pp2 = 0x7ffeee402da8,	&p1 = 0x7ffeee402d58,	&n = 0x7ffeee402d54
// [pp2 = &p1]:    *pp2 = 0x0,	p1 = 0x0,	pp2 = 0x7ffeee402d58,	&p1 = 0x7ffeee402d58
// [*pp2 = &n]:    *pp2 = 0x7ffeee402d54,	p1 = 0x7ffeee402d54,	&n = 0x7ffeee402d54
// [ *p1 = 10]:    **pp2 = 10, *p1 = 10, n = 13

#include <stdio.h>
int main(void) {
    const int **pp2;
    int *p1;
    const int n = 13;
    // [   Init  ]:    *pp2 = 0x7ffeea99ed98,▸      pp2 = 0x7ffeea99eda8,▸  &p1 = 0x7ffeea99ed58,▸  &n = 0x7ffeea99ed54
    printf("[   Init  ]:    *pp2 = %p,\tpp2 = %p,\t&p1 = %p,\t&n = %p\n", *pp2, pp2, &p1, &n);

    pp2 = &p1;
    // [pp2 = &p1]:    *pp2 = 0x0,▸ p1 = 0x0,▸      pp2 = 0x7ffee0ec5d58,▸  &p1 = 0x7ffee0ec5d58
    // pp2 的 const 限定符失效, *pp2 指向改变,此时 pp2 的值就是 p1 指针的地址,那么*pp2 的值就是 p1 的值了
    printf("[pp2 = &p1]:    *pp2 = %p,\tp1 = %p,\tpp2 = %p,\t&p1 = %p\n", *pp2, p1, pp2, &p1);

    // 此时 *pp2 == p1, 他们地址相同
    *pp2 = &n;
    // [*pp2 = &n]:    *pp2 = 0x7ffeeb36cd54,▸      p1 = 0x7ffeeb36cd54,▸   &n = 0x7ffeeb36cd54
    // *pp2 指向了 &n, 意味着 p1 指向了 &n
    printf("[*pp2 = &n]:    *pp2 = %p,\tp1 = %p,\t&n = %p\n", *pp2, p1, &n);

    *p1 = 10;
    // [ *p1 = 10]:    **pp2 = 10, *p1 = 10, n = 13
    // p1 指向 &n, 则 *p1 = 10 就是 n = 10 就是 **pp2 = 10
    // gcc 编译结果 13, clang 编译结果 10.
    printf("[ *p1 = 10]:    **pp2 = %d, *p1 = %d, n = %d\n", **pp2, *p1, n);
    return 0;
}
