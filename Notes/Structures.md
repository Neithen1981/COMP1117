# Structures

struct: collection of member variables under a single name

### Declaration

```
struct Circle {double radius; int x, y;};

Circle c1, c2;
```

### Initialization & Assignment

```
struct Point {int x, y;};
Point p1 = {1, 2};
Point p2 = p1;
```

### Member Variables
```
p1.x;
```

### Nested Structures

member variables can also be structures
```
struct Quad {
	Point p1, p2, p3, p4;
};
```

initialization & assignment
```
Quad quad1 = {1, 2, 3, 4, 5, 6, 7, 8};
Quad quad2 = {{1, 2}, {}}
```

access
```
quad1.pt1.x;
```

### Functions

call by value or by reference

### Array of Structures

```
pt_list[i].x;
```
