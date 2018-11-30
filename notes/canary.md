# Canary

A Canary is a certain value put on the stack (memory where function local variables are also stored) and validated before that function is left again.
Leaving a function means that the "previous" address (i.e. the location in the application right before the function was called) is retrieved from this stack
and jumped to (well, the part right after that address - we do not want an endless loop do we?). If the canary value is not correct,
then the stack might have been overwritten / corrupted (for instance by writing more stuff in the local variable than allowed - called buffer overflow)
so the application is immediately stopped.
