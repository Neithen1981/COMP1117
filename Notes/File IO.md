# File IO

```
#include <fstream>
```

```
ifstream testmarks; //create an input file stream
testmarks.open("data.txt"); //connect to this file

int mark;
testmarks >> mark;
```

### Streams
upstream: keyboard, file, etc. ---stream--- downstream: program

## Input
Error Checking:
```
testmarks.fail() 
//true if fail
//<cstdlib>
```

use this to keep the memory for debugging after running
```
exit(l)
```

```
testmarks >> mark;
```
The expression also has a boolean value. *detect the end of the file*

close a file:
```
testmarks.close();
```


## Output
```
ofstream result;
result.open("myresult.txt");
//not exist: a new file will be created
//already exist: the original content will be erased

if (result.fail())
	{cout << "warning" << endl; exit(l);}

result << 10 << endl;

result.clode();
```

If just want to append:
```
result.open("myresult.txt", ios::app);
```

### Filename as input
```
char filename[size];
cin >> filename;
ifstream testmarks;
testmarks.open(filename);
```
