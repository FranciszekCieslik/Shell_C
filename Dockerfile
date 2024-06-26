# Użyj oficjalnego obrazu Ubuntu jako obrazu bazowego
FROM ubuntu:latest

# Skopiuj wszystkie pliki projektu do katalogu /app w kontenerze
COPY . /app

# Ustaw katalog roboczy
WORKDIR /app

# Update the package repository and install gcc
RUN apt-get update && apt-get install -y \
    gcc \
    cmake \
    make \
    build-essential 

# Create build directory
RUN mkdir build

# Change to build directory and run cmake and make
WORKDIR /app/build
RUN cmake ..
RUN cmake --build .

# Run the compiled program
CMD ["./my_c_app"]
