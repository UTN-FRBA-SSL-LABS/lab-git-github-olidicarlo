#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

<<<<<<< HEAD
int sumar(const int a, const int b) {
=======
int sumar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

<<<<<<< HEAD
int restar(const int a, const int b) {
=======
int restar(int a, int b) {
>>>>>>> origin/feature/conflicto-demo
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

<<<<<<< HEAD


// Calcula el producto de a y b y devuelve el resultado 
int multiplicar(const int a, const int b) {
    return a * b;
=======
int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */
>>>>>>> origin/feature/conflicto-demo
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
int esPar(int n) {
    return (n % 2) == 0;
}
