#  Sistema de Gestión de Parqueadero - parkiing Motel

###  Integrantes
* **[cristian Perez]**
* **[Nicolas Restrepo]**

---

##  Desarrollos Innovadores (Objetivo: 5.0)
[cite_start]Para este proyecto, hemos implementado funcionalidades que superan los requisitos mínimos[cite: 44, 45]:

### 1. Interfaz Visual con Colores ANSI
* [cite_start]**¿Para qué?**: Para facilitar la lectura del mapa de disponibilidad[cite: 22, 23].
* [cite_start]**¿Por qué?**: Permite identificar instantáneamente espacios libres (Verde) y ocupados (Rojo), mejorando la experiencia de usuario[cite: 77].
* [cite_start]**¿Cómo?**: Se integraron códigos de escape ANSI en la función `mostrarMapa` para pintar la matriz de 20x20[cite: 37].

### 2. Generación de Tickets de Salida (.txt)
* [cite_start]**¿Para qué?**: Para automatizar el cobro y entregar un comprobante físico al usuario[cite: 21].
* **¿Por qué?**: Simula un entorno real de parqueadero donde la información de pago debe persistir fuera del programa.
* **¿Cómo?**: Se utilizó la librería `fstream` para crear archivos dinámicos nombrados según la placa del vehículo.

### 3. Validación de Espacios y Rutas
* [cite_start]**¿Para qué?**: Para asegurar que los vehículos solo se parqueen en lugares accesibles por las vías[cite: 18, 19].
* **¿Cómo?**: La lógica de ingreso valida las coordenadas ingresadas antes de ocupar el nodo de la matriz.