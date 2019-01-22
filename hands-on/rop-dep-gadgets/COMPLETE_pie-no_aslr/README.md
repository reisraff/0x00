# ROP DET GADGETS

### Compiling

```bash
gcc -o program program.c -m32 -w
```

### Disable ASLR

```
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```
