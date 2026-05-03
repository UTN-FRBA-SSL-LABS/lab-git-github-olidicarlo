#include "operaciones.h"

/* ── sumar ───────────────────────────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar ──────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar ─────────────────────────────────────── */

int multiplicar(const int a, const int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}