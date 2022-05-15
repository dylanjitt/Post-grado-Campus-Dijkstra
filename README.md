# Post-grado-Campus-Dijkstra
###### By EquipoDinamita!!!
Bienvenido a este repositorio!! creado con el objetivo de encontrar el camino mas rapido desde el postrgado de la UPB en obrajes, hasta el campus ubicado en achocalla.
![Captura de pantalla 2022-05-15 141254](https://user-images.githubusercontent.com/101950765/168487840-f8a05ceb-5982-4677-aea6-1294d77fc1b1.png)

## Definición del problema

Eres estudiante de la UPB, y te asignaron pasar materias en Post grado y en el Campus a la vez???, y necesitas llegar al campus desde obrajes de la manera mas rapida posible?? No te preocupes!!! nosotros tenemos la Solución.

Presentamos "Post Grado-Campus Dijkstra", un algoritmo que se encarga de analizar y hallar el tiempo mas corto para llegar a la universidad a tiempo, e incluso, tambien funciona para otros puntos cercanos, desde la calle de la cato, hasta la plaza humboldt (la plaza favorita de los de la UPB).
![Captura de pantalla 2022-05-15 141335](https://user-images.githubusercontent.com/101950765/168487841-109d3211-e0e0-4049-818f-0d4c018ec47d.png)

## Explicación del algoritmo
Este sistema utiliza el algoritmo dijkstra, el cual fue diseñado con el objetivo de encontrar el camino mas corto entre varios nodos, partiendo de uno en especifico, y llegando a un nodo final, recorriendo todas las posibilidades, hasta dar con las opciones mas cortas, o con menor costo o "peso".
El algoritmo Dijkstra puede ser representado generalmente en dos sistemas:

-la lista de listas
-la matriz

para este programa utilizaremos el sistema de matrices, en el que, cada casilla coincide con dos nodos, a la cual se le asigna un valor con numeros enteros (int), por lo que, si un punto "A" no esta conectado al punto "B", su valor será 0, y tambien en el caso de que el punto coincida consigo mismo. Se deben insertar valores en las casillas que tengan nodos conectados con otros.

Adaptamos este algoritmo en funcion del siguiente mapa:

//insert mapa nodos

Para entender mejor el sistema empleado en nuestra matriz, aqui les dejamos unos puntos de referencia en base al numero asignado para cada nodo:
  0: Post Grado
  1: Av. 14 de septiembre (la calle de la universida Catolica)
  2: Av. Hernando Siles
  3: Av. Hector Ormachea
  4: calle Costanerita
  5: calle 17 de obrajes
  6: Interseccion Costanera
  7: Plaza Hubmoldt
  8: Rotonda / Puente amor de Dios
  9: Universidad Pirvada Boliviana (UPB)

## Proceso de instalación
### paso 1:
Descargue su IDE o editor de codigo favorito, en este caso, nosotros utilizamos Visual Studio Code (VScode), el cual puede descargar desde la MIcrosoft Store, o desde el siguiente link: https://code.visualstudio.com/
![Captura de pantalla 2022-05-15 141614](https://user-images.githubusercontent.com/101950765/168487844-19aecaca-086d-4b1d-bf97-6b59bcbb6587.png)

### paso 2:
Asegurese de que su editor de codigo ejecute las instrucciones en el lenguaje "c++" de manera correcta, en este caso, recomendamos un video que ayudara a la configuracion de Visual Studio Code, para la ejecucion completa de todo lo que ofrece c++: https://www.youtube.com/watch?v=FQOqTvE_L00

### paso 3:
recuerde crear una carpeta especifica para este proyecto, luego, agreguela en el directorio de VScode:

//insertar imagen de add folder.

A continuacion, debe crear un archivo con el nombre in.txt, el cual tiene la funcion de añadir los comandos necesarios (en forma de numeros enteros) para que el programa lea los datos ingresados, y realize las acciones de su preferencia.
#### IMPORTANTE: recuerde guardar el archivo (Ctrl + s) cada vez que haga algun cambio en los datos a ingresar.

### paso 4:
Copiar el contenido del archivo postGradoCampusDijkstra.cpp, y pegarlo en un nuevo archivo ".cpp" de VScode, a coninuacion guardar el archivo en la carpeta designada.
una vez tenga listo su input deseado, presione el boton de "Play" en el programa. 
En la seccion de abajo aparecera una barra de terminal, seleccione la opción "OUTPUT", encontrara la interfaz con todas las opciones propuestas, seleccione la que usted elija insertando su numero en el archivo "int.txt", para insertar mas de una opción, presiones enter y el nuevo numero cada vez que necesite.


### paso 5 (para "crea tu propio ejemplo"):
Dirijase al codigo, y busque la linea 6, encontrara unos valores con las conexiones entre los puntos propuestos (por ejemplo PostGradoCalleCato), los cuales estan con valor 0 por defecto.
#### cambie los valores de los puntos a su gusto, de ser necesario, vea la tabla de referencia.
###### *recomendamos no dejar ningun valor en 0.

## Conclusión
