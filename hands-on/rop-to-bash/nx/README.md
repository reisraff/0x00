# ROP RETURN TO LIB C

### Compiling

```bash
gcc -o program program.c -m32 -fstack-protector -no-pie -w
```

### Run the exploit

```bash
python exploit.py pwn
```