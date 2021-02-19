// dll.cpp : Определяет экспортируемые функции для DLL.
//

#include "framework.h"
#include "dll.h"


// Пример экспортированной переменной
DLL_API int ndll=0;
int api(int x) {
    return x * x;
}
// Пример экспортированной функции.
DLL_API int fndll(void)
{
    return 0;
}
// Конструктор для экспортированного класса.
Cdll::Cdll()
{
    return;
}
