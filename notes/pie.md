# PIE

PIE is to support address space layout randomization (ASLR) in executable files.

Before the PIE mode was created, the program's executable could not be placed at a random address in memory,
only position independent code (PIC) dynamic libraries could be relocated to a random offset.
It works very much like what PIC does for dynamic libraries, the difference is that a Procedure Linkage Table (PLT) is not created,
instead PC-relative relocation is used.

After enabling PIE support in gcc/linkers, the body of program is compiled and linked as position-independent code.
A dynamic linker does full relocation processing on the program module, just like dynamic libraries.
Any usage of global data is converted to access via the Global Offsets Table (GOT) and GOT relocations are added.
