# Functions
execute by calling main() function

## Pre-defined functions
```
#include<cmath>
sqrt()
sin()
etc.
```

## Defining functions
type_return func_name(type_1 par_1, type_2 par_2,...){
	...
}
**define before calling**
can put function header first
```
int square(int a){
	int r;
	r=a*a;
	return r;
}
```

## Function call
### More returns
```
int equal(int x, int y){
	if (x==y)
		return 1; //function may end here
	return 0;
}
```
**once return, the function terminate**
### No return
void

can have no return value or no return statement

## Scopes of Variables
### Local Variables
can only be access in the function
scope from declaration to the end of the block
```
int x, y, z;
if (){
	int x; //different x from the above
}
```
*variables in the inner block will hide the outer variable with identical names*

### Global Variables
declare outside any functions

globally accessible

### Call by Value
values are copied to local variables
```
void swap(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}
//outside the function, x and y will not change
```

### Call by Reference
allow the function to modify the arguments

"go to" the memory address
```
void swap(int& x, int& y){
	int temp = x;
	x = y;
	y = temp;
}
```
