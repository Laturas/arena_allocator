#include "include_list"
#include "arenas.h"

int main(int argc, char* argv[]) {
    u64 gigabyte = 1073741824;
    arena temparena = aalloc(gigabyte);

    char* hello_str = apush(temparena, "Hello!\n", 8);

    char long_str[70] = "This is a string created with Kate's cool little arena allocator! :D\n";
    char* str_pt_2 = apush(temparena, long_str, sizeof(long_str));

    printf(hello_str);
    printf(str_pt_2);
    fflush(stdout);

    afree(temparena);
}