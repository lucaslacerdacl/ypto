# Ypto
> Project created to improve acknowledgment in object oriented programming.

The objective of this project is to improve the Ypto class provided by the documentation in the topic 2.1 in the file "POO - TP2.pdf".

## Getting started

This project contains the legacy and the new implementation.

### Legacy version

Allow to set three variables with the following methods:
```c
setA(int a);
setB(int b);
setC(int c);
 ```

Allow to get three variables with the following methods:
```c
getA(int a);
getB(int b);
getC(int c);
```

Allow to execute the following methods with the three variables:
```c
int sum();
int product();
```

### New version

Allow to set a vector with the following method:
```c
setValues(vector<int> values);
```

Allow to set a new value in the end of the vector with the following method:
```c
setValue(int value);
```

Allow to update a value in the specify position of the vector with the following method:
```c
updateValue(int position, int value);
```

Allow to get the vector values with the following method:
```c
vector<int> getValues();
```

Allow to get the vector value in specify position with the following method:
```c
int getValue(int position);
```

Allow to execute the following methods with the vector:
```c
int sum();
int product();
```

#### Exceptions
```c
EmptyVectorException();
PostionException();
```

## Developing

### Built With
 - iostream
 - vector
 - exception

### Setting up Example

To run the example file, use the code bellow:

```shell
git clone https://github.com/LucasLacerdaCL/ypto.git
cd ypto/src
g++ main.cpp -o main
./main
```

## Licensing

Released under the MIT license.