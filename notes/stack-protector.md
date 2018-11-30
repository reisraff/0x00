# Stack Protector

If you compile with -fstack-protector, then there will be a little more space allocated on the stack and a little more overhead on entry to
and return from a function while the code sets up the checks and then actually checks whether you've overwritten the stack while in the function.

Take a look at canary.md
