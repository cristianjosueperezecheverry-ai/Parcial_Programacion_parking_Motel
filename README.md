# Parcial de Programación - Prking Mpotel
**Integrantes:**
* [cite_start]**Cristian Perez** [cite: 55]
* [cite_start]**Nicolas Restrepo** [cite: 55]

---

## Proyecto: Sistema de Parqueadero (20x20)

Este es nuestro proyecto para el parcial. [cite_start]Hicimos un sistema que gestiona un parqueadero de 20x20 usando una matriz[cite: 16, 37]. [cite_start]El código está organizado en tres archivos (`main.cpp`, `parqueadero.cpp` y `parqueadero.h`) para que sea modular y el `main` quede bien cortico[cite: 38, 39, 40].

### Lo que le añadimos para el 5.0:

**1. Mapa con colores (Terminal)**
Para que no fuera solo un montón de texto aburrido, le pusimos colores. [cite_start]Si un espacio está libre se ve en **verde** `[ ]` y si está ocupado se ve en **rojo** `[X]`[cite: 22, 23]. [cite_start]Así el usuario sabe de una dónde hay sitio[cite: 77].

**2. Recibos en archivos de texto (.txt)**
[cite_start]Cuando un carro sale, el programa calcula el cobro y genera un archivo `.txt` automático con la placa del carro[cite: 21]. [cite_start]Ahí dice cuánto tiempo estuvo y el total a pagar, como un recibo real[cite: 79].

**3. Diseño de vías y accesibilidad**
No pusimos los parqueaderos a la loca. [cite_start]Diseñamos el mapa con calles (vías) para que todos los puestos tengan una ruta de entrada y salida clara, tal como pedía el examen[cite: 18, 19].

---

[cite_start]**Nota técnica:** Usamos punteros para el registro de entrada y salida, asegurando que los datos se guarden correctamente en la matriz del parqueadero[cite: 34, 35].