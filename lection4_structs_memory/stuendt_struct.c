
typedef struct {
    char nombre[50];
    int edad;
} Estudiante;

int main() {
    Estudiante *e = (Estudiante *) malloc(sizeof(Estudiante));
    if (e == NULL) return 1;

    printf("Nombre: ");
    scanf("%s", e->nombre);
    printf("Edad: ");
    scanf("%d", &e->edad);

    printf("Estudiante: %s, %d años\n", e->nombre, e->edad);
    free(e);
    return 0;
}