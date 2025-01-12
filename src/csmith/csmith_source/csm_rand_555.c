/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.4.0
 * Git version: 0ec6f1b
 * Options:   (none)
 * Seed:      22287570
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3[3][3] = {{5L,5L,5L},{(-1L),0x4F3D4E67L,(-1L)},{5L,5L,5L}};
static int32_t g_5 = 1L;
static int32_t g_8 = 0L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_3
 * writes: g_5 g_8
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[1][1];
    int32_t **l_4 = &l_2;
    (*l_4) = l_2;
    for (g_5 = 0; (g_5 > 22); g_5 = safe_add_func_uint8_t_u_u(g_5, 1))
    { /* block id: 4 */
        for (g_8 = 0; (g_8 <= 2); g_8 += 1)
        { /* block id: 7 */
            return (*l_2);
        }
    }
    return (*l_2);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
XXX total OOB instances added: 0
********************* end of statistics **********************/

