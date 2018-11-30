# NX

The abbreviation NX stands for non-execute or non-executable segment. It means that the application, when loaded in memory,
does not allow any of its segments to be both writable and executable. The idea here is that writable memory should never be executed (as it can be manipulated) and vice versa.
Having NX enabled would be good.
