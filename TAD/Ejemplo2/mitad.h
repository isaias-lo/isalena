#ifndef mitad_h
#define mitad_h

typedef struct {
    int numero;
} MiTAD;

void inicializar(MiTAD *t, int valor);
void sumar(MiTAD *t, int otro);
int obtener(MiTAD *t);

#endif