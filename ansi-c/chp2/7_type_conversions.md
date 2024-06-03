# Type conversions

* if either operand is `long double`, convert the other to `long double`
* if either operand is `double`, convert the other to `double`
* if either operand is `float`, convert the other to `float`
* convert `char` and `short` to `int`
* if either operand is `long`, convert the other to `long`
* explicit type conversions can be forced
```
#include <math.h>

/*sqrt expects double*/
int n = 9;
sqrt((double) n)
```
