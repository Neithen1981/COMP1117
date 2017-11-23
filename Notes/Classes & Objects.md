# Classes & Objects

## Ideas

struct: create a scheme to store data

extend to class: member functions

recall string

## Define a Class

```
class CPoint{
	public:
		int x;
		int y;

		void set_val(int x1, int y1)
		{x = x1; y = y1;}
};
```

public: can be accessed by other functions

private: can only be accessed by members of the class

## Constructors

use the same name as the class, no return type, must be public
```
CPoint(int x1, int y1) {x = x1; y = y1;}
```

*if no constructor is defined, default: constructor with no arguments and do nothing*

may have more than one constructors
```
CPoint(int x1, int y1) {x = x1; y = y1;}
CPoint() {x = 0; y = 0;}
```

copy constructor: default in the compiler
```
CPoint p(1, 2);
CPoint q(p);
```

## Destructors

aotomatically called when the object passes out of its scope
```
~CPoint(){/* code */}
```
*if no destructor is defined, default: constructor with no arguments and do nothing*

## Operators

Example: 

* ordinary version
define a member functiom
```
bool equal(Counter& RHS){
    return (value == RHS.value);
}
```
call it in main
```
if (a.equal(b)){/* code */}
```

* use operator
```
bool operator == (Counter& RHS){
    return (value == RHS.value);
}
```
call it in main
```
if (a == b){/* code */}
```

## Friend Function

pre-declare a function in class so that it can access private members
```
friend func_type func_name();
```

## Better Organization

### 'class_name.h': declaration of the class

```
class clock{
    int h, m, s;

    clock(int hour; int minute; int second);
    void print_time();
}
```
### 'class_name.cpp': member functions

```
#include <iostream>
#include "clock.h"
using namespace std;

clock::clock(int hour; int minute; int second){
    h = hour; m = minute; s = second;
}

void clock::print_time(){
    cout << h << "/" << m << "/" << s << endl;
}
```

### 'main.cpp'

```
#include <iostream>
#include "clock.h"
using namespace std;

int main(){
    /* code */
    return 0;
}

