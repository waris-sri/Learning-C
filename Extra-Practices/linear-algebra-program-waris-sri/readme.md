# Linear Algebra Program

Write the program to provides various functionalities for solving linear algebra problems, including Gaussian Elimination, Gaussian-Jordan Elimination, calculating determinants, Cramer's rule, matrix inversion, vector dot products, and more.

<hr>

## Features

1. Gaussian Elimination
2. Gaussian-Jordan Elimination
3. Determinant calculation (1x1 to 4x4 matrix)
4. Solving a system of equations using Cramer's rule
5. Matrix inversion
6. Dot product of two vectors
7. Cross product of two vectors
8. Magnitude of a vector

<hr>

## Usage

Upon running the program, you'll be prompted to select a method by inputting the corresponding number.

- If it's the first command after run the code, it'll display:

```
Welcome to linear algebra program.
===============================================
1. Gaussian Elimination
2. Gaussian - Jordan Elimination
3. Find determinant
4. Cramer's Rule
5. Inverse of a matrix
6. Dot product
7. Cross product
8. Find magnitude of vector
0. End the program
===============================================
```

- Otherwise, it'll display:

```
What you want to use next?
===============================================
1. Gaussian Elimination
2. Gaussian - Jordan Elimination
3. Find determinant
4. Cramer's Rule
5. Inverse of a matrix
6. Dot product
7. Cross product
8. Find magnitude of vector
0. End the program
===============================================
```

<hr>

### Gaussian Elimination (Option 1)

This option allows you to solve a system of three equations with three unknowns (`x, y, z`). The program will use Gaussian Elimination to transform the matrix, and the result will be printed as both equations and an augmented matrix.

**Sample input:**

```
1st equation: x − 2y + 3z = 9
2nd equation: −x + 3y − z = −6
3rd equation: 2x − 5y + 5z = 17
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 1
===============================================
Please input equation No.1 (x, y, z, total): 1 -2 3 9
Please input equation No.2 (x, y, z, total): -1 3 -1 -6
Please input equation No.3 (x, y, z, total): 2 -5 5 17
===============================================
Here are the equations after using Gaussian Elimination:
x-2.0y+3.0z = 9.0
y+2.0z = 3.0
z = 2.0
===============================================
Here are the augmented matrix after using Gaussian Elimination:
1.0 -2.0 3.0 | 9.0
0.0 1.0 2.0 | 3.0
0.0 0.0 1.0 | 2.0
===============================================
Here are the solution of these equations:
(x,y,z) = (1.0,-1.0,2.0)
===============================================
```

<hr>

### Gaussian-Jordan Elimination (Option 2)

Similar to Gaussian Elimination, but this method further simplifies the augmented matrix to find the final solution using Jordan elimination.

**Sample input:**

```
1st equation : 3x − 9z = 33
2nd equation : 7x − 4y − z = −15
3rd equation : 4x + 6y + 5z = −6
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 2
===============================================
Please input equation No.1 (x, y, z, total): 3 0 -9 33
Please input equation No.2 (x, y, z, total): 7 -4 -1 -15
Please input equation No.3 (x, y, z, total): 4 6 5 -6
===============================================
Here are the equations after using Gaussian - Jordan Elimination:
x = -1.0
y = 3.0
z = -4.0
===============================================
Here are the solution of these equations:
(x,y,z) = (-1.0,3.0,-4.0)
===============================================
```

<hr>

### Determinant Calculation (Option 3)

This option computes the determinant of a matrix, with sizes ranging from 1x1 to 4x4.

**Sample input:**

```
1st equation : x + 2z = 6
2nd equation : −3x + 4y + 6z = 30
3rd equation : −x − 2y + 3z = 8
```

**Display in program and sample output:**

```
1 0 2 6
-3 4 6 30
-1 -2 3 8
===============================================
Please input the method that you want to use: 3
===============================================
Please input size of matrix (1-4): 3
Please input number in index [0][0]: 1
Please input number in index [0][1]: 2
Please input number in index [0][2]: 3
Please input number in index [1][0]: 4
Please input number in index [1][1]: 5
Please input number in index [1][2]: 6
Please input number in index [2][0]: 7
Please input number in index [2][1]: -8
Please input number in index [2][2]: 9
1.00 2.00 3.00
4.00 5.00 6.00
7.00 -8.00 9.00
===============================================
Determinant of this matrix: -96.00
===============================================
```

<hr>

### Cramer's Rule (Option 4)

This method solves the system of equations using Cramer's rule, providing the determinant of each variable and the solution for `x`, `y`, and `z`.

**Sample input:**

```
1st equation : x + 2z = 6
2nd equation : −3x + 4y + 6z = 30
3rd equation : −x − 2y + 3z = 8
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 4
===============================================
Please input equation No.1 (x, y, z, total): 1 0 2 6
Please input equation No.2 (x, y, z, total): -3 4 6 30
Please input equation No.3 (x, y, z, total): -1 -2 3 8
===============================================
Here are the equations:
x+2.0z = 6.0
-3.0x+4.0y+6.0z = 30.0
-1.0x-2.0y+3.0z = 8.0
===============================================
Here are the determinant of each variable:
|A| = 44.0
|x| = -40.0
|y| = 72.0
|z| = 152.0
===============================================
Here are the solution of these equations:
(x,y,z) = (-0.9,1.6,3.5)
===============================================
```

<hr>

### Matrix Inversion (Option 5)

Calculates the inverse of a matrix and displays the cofactor, adjoint, and final inverse matrix.

**Sample input:**

```
1st equation : 2x + 4y + 6z = 22
2nd equation : 3x + 8y + 5z = 27
3rd equation : -x + y + 2z = 2
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 5
===============================================
Please input equation No.1 (x, y, z, total): 2 4 6 22
Please input equation No.2 (x, y, z, total): 3 8 5 27
Please input equation No.3 (x, y, z, total): -1 1 2 2
===============================================
Here are the equations:
2.0x+4.0y+6.0z = 22.0
3.0x+8.0y+5.0z = 27.0
-1.0x+y+2.0z = 2.0
Here are the determinant of A:
|A| = 44.0
===============================================
Here are the cofactor of A:
11.0 -11.0 11.0
-2.0 10.0 -6.0
-28.0 8.0 4.0
===============================================
Here are the adjoint of A:
11.0 -2.0 -28.0
-11.0 10.0 8.0
11.0 -6.0 4.0
===============================================
Here are the solution of these equations:
(x,y,z) = (3.0,1.0,2.0)
===============================================
```

<hr>

### Dot Product (Option 6)

Calculates the dot product of two vectors in 3D space.

**Sample input:**

```
1st vector : (1,2,3)
2nd vector : (4,5,6)
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 6
===============================================
Please input first vector (i,j,k): 1 2 3
Please input second vector (i,j,k): 4 5 6
===============================================
Dot product of these vectors: 32.00
===============================================
```

<hr>

### Cross Product (Option 7)

Calculates the cross product of two vectors in 3D space.

**Sample input:**

```
1st vector : (1,3,2)
2nd vector : (8,5,4)
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 7
===============================================
Please input first vector (i,j,k): 1 3 2
Please input second vector (i,j,k): 8 5 4
===============================================
Cross product of these vectors:
2.0i+12.0j-19.0k
(2.0, 12.0, -19.0)
===============================================
```

<hr>

### Magnitude Calculation (Option 8)

Calculates the magnitude (distance) between two points in 3D space.

**Sample input:**

```
1st point : (5,8,1)
2nd point : (-1,-2,-3)
```

**Display in program and sample output:**

```
===============================================
Please input the method that you want to use: 8
===============================================
Please input first point (x,y,z): 5 8 1
Please input second point (x,y,z): -1 -2 -3
===============================================
Here is the vector: <6.0, 10.0, 4.0>
Magnitude of these vectors: 12.33
===============================================
```

<hr>

### End the Program (Option 0)

End the program after select option 0.

**Display in program:**

```
===============================================
Please input the method that you want to use: 0
===============================================
Thank you for using linear algebra program!
===============================================
```

<hr>
