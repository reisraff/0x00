# ROP DET GADGETS

### Compiling

```bash
gcc -o program program.c -m32 -w
```

### Run this over a bruteforce

```bash
for i in {1..20000}; do echo "Try: $i" && python exploit.py | ./program && break; echo 'Failed'; sleep .0001; done
```
