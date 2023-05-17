typedef struct histograma Histograma;

Histograma *init();
void liberta(Histograma *h);
int insere(Histograma *h, char *p);
int maisFrequente(Histograma *h, char *p);