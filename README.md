# Riemann
A program that approximates the definite integral of a relation using Riemann Sum approximations.

## Usage
The input to the program is provided in the file `c.in` and requires three lines of input. It should be structured in the format:

```
<NUM OF POINTS> <TYPE> <SUBINTERVALS>
<a> <b> ... <z>
<f(a)> <f(b)> ... <f(z)>
```

### Example Input
```
6 trapezoidal 5
2 5 9 12 15 20
10 15 12 20 25 30
```

### Example Output
```
344.5
```

## Types of Approximations
- `left` - Left Riemann Sum
- `right` - Right Riemann Sum
- `midpoint` - Midpoint Riemann Sum
- `trapezoidal` - Trapezoidal Rule

## Compilation & Execution
To compile and run the program:
```sh
 g++ -o riemann riemann.cpp
 ./riemann
```

Ensure `c.in` contains the appropriate input before execution. The output will be written to `c.out`. 
