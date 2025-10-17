Pequeño programa en C para cambiar de uppercase a lowercase usando manipulación de bits

En la tabla ASCII, las letras mayúsculas y minúsculas difieren únicamente en el bit 5 (contando desde 0, de derecha a izquierda).
Las mayúsculas (A-Z) tienen este bit en 0, mientras que las minúsculas (a-z) lo tienen en 1, resultando en una diferencia constante de 32 (2⁵)
entre pares de letras. Esta propiedad del estándar ASCII permite realizar conversiones eficientes mediante operaciones bit a bit: 
para convertir a mayúscula se usa `c & ~(1<<5)` que fuerza el bit 5 a 0; para minúscula se usa `c | (1<<5)` que lo fuerza a 1; 
y para invertir el caso se usa `c ^ (1<<5)` que simplemente invierte el estado del bit 5. 
Estas operaciones son más rápidas que las comparaciones y operaciones aritméticas tradicionales, demostrando cómo el diseño deliberado
de ASCII facilita manipulaciones eficientes de caracteres.
