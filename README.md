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
