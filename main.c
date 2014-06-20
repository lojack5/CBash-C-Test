#include "stdio.h"
#define CBASH_SHORT_NAMES
#include "cbash.h"

#pragma comment(lib, "CBash.lib")

int main()
{
    printf("Hello World!\n");
    cb_collection_t *collection = CreateCollection("C:\\Games\\Oblivion", eIsOblivion);
    printf("Collection: %d\n", collection);
    return 0;
}