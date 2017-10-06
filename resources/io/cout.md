# IO

## IO Manipulator

- std::setprecision(int n)

Sets the decimal precision to be used to format floating-point values
on output operations.

Behaves as if member `precision` were called with `n` as argument
on the stream on which it is inserted/extracted as a manipulator
(it can be inserted/extracted on input streams or output streams).
