/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.4.0
 * Git version: 0ec6f1b
 * Options:   (none)
 * Seed:      141276361
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   const uint8_t  f0;
   uint8_t  f1;
   int32_t  f2;
   volatile uint16_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[2][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
static int32_t g_5 = 0xA57B5BF2L;
static const union U1 g_8 = {0x44L};/* VOLATILE GLOBAL g_8 */
static const union U1 g_9 = {251UL};/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static const union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_3 g_8 g_9
 * writes: g_3 g_5
 */
static const union U1  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[0][3];
    int32_t **l_4 = &l_2;
    (*l_4) = l_2;
    (**l_4) |= g_5;
    for (g_5 = (-7); (g_5 == 6); g_5 = safe_add_func_int64_t_s_s(g_5, 1))
    { /* block id: 5 */
        if (g_5)
            break;
        return g_8;
    }
    return g_9;
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 2

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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
   level: 2, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 80
XXX percentage an existing variable is used: 20
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
XXX total OOB instances added: 0
********************* end of statistics **********************/

