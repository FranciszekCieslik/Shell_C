char *lsh_read_line() {
    char *line = NULL;
    size_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1) {
        if (feof(stdin)) {
            // Osiągnięto koniec pliku
            return NULL;
        } else {
            // Wystąpił błąd podczas odczytu linii
            perror("lsh_read_line: getline");
            exit(EXIT_FAILURE);
        }
    }

    return line;
}