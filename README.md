# Newton-Raphson Root Finder in C

This project implements the **Newton-Raphson method** for finding roots of fifth-degree polynomials using C.

The Newton-Raphson method is a powerful numerical technique widely used in scientific computing, engineering, and optimization to approximate roots of real-valued functions.

---

## 🚀 Features

✅ Solves polynomials of the form:
f(x) = a₀ + a₁x + a₂x² + a₃x³ + a₄x⁴ + a₅x⁵

✅ Uses:
- Derivative-based iterative refinement (`xₙ₊₁ = xₙ − f(xₙ)/f′(xₙ)`)
- Convergence threshold: |f(x)| < 10⁻⁶
- Maximum 1000 iterations to avoid infinite loops
- Division-by-zero checks to handle flat slopes

✅ Written in clean C, compiled with:
```bash
gcc -O3 -Wall -Wextra -Werror -pedantic -o newton newton.c -lm
```

🏗 How to Build
Compile the program:
```bash
gcc -O3 -Wall -Wextra -Werror -pedantic -o newton newton.c -lm
```
🏃 How to Run
Run the program from the command line:
```bash
./newton a₀ a₁ a₂ a₃ a₄ a₅ x₀
```
Where:
  -  a₀ to a₅ → coefficients of the polynomial (as floating-point numbers)

  -  x₀ → initial guess for the root
Example:
```bash
./newton 1.0 2.0 3.0 4.0 5.0 6.0 1.0
```
📊 Output
The program prints:

  -  The approximated root (with two decimal places) if it converges

  -  nan if the derivative becomes zero (division by zero)

  -  incomplete if no convergence after 1000 iterations
## 🌍 Why This Matters
Finding roots of polynomials is a foundational tool in:

  -  Engineering simulations

  -  Physics modeling

  -  Financial calculations

  -  Machine learning optimization

This project demonstrates both an understanding of numerical methods and the ability to implement them efficiently in C.

## 💡 Future Improvements
Add fallback strategies for poor initial guesses

Generalize to support polynomials of arbitrary degree

Improve robustness against near-zero derivatives

# 🛠 Author
Andreas Hadjitofis

Computer Science Student @ National and Kapodistrian University of Athens
