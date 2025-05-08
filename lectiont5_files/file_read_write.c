
typedef struct {
    char nombre[50];
    int edad;
} Estudiante;

int main() {
    FILE *f = fopen("students.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    Estudiante e;
    while (fscanf(f, "%s %d", e.nombre, &e.edad) != EOF) {
        printf("Leído: %s - %d años\n", e.nombre, e.edad);
    }

    fclose(f);
    return 0;
}
