#include <stdio.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    printf("Hello, World (スレッド番号%d）\n", omp_get_thread_num() );
    printf( "\n" );
    return 0;
}