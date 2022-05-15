# Post-grado-Campus-Dijkstra
###### By EquipoDinamita!!!
Bienvenido a este repositorio!! creado con el objetivo de encontrar el camino mas rapido desde el postrgado de la UPB en obrajes, hasta el campus ubicado en achocalla.

![Screenshot_20220515-151021_Picsart](https://user-images.githubusercontent.com/101950765/168493039-f5d08718-d03e-46e0-be60-961fdcb850cd.jpg)


## Definición del problema

Eres estudiante de la UPB, y te asignaron pasar materias en Post grado y en el Campus a la vez???, y necesitas llegar al campus desde obrajes de la manera mas rapida posible?? No te preocupes!!! nosotros tenemos la Solución.

Presentamos "Post Grado-Campus Dijkstra", un algoritmo que se encarga de analizar y hallar el tiempo mas corto para llegar a la universidad a tiempo, e incluso, tambien funciona para otros puntos cercanos, desde la calle de la cato, hasta la plaza humboldt (la plaza favorita de los de la UPB).

![Captura de pantalla 2022-05-15 141335](https://user-images.githubusercontent.com/101950765/168487841-109d3211-e0e0-4049-818f-0d4c018ec47d.png)

## Explicación del algoritmo
Este sistema utiliza el algoritmo dijkstra, el cual fue diseñado con el objetivo de encontrar el camino mas corto entre varios nodos, partiendo de uno en especifico, y llegando a un nodo final, recorriendo todas las posibilidades, hasta dar con las opciones mas cortas, o con menor costo o "peso".
El algoritmo Dijkstra puede ser representado generalmente en dos sistemas:

#### -la lista de listas

#### -la matriz

Para este programa utilizaremos el sistema de matrices, en el que cada casilla coincide con dos nodos, a la cual se le asigna un valor con numeros enteros (int), por lo que, si un punto "A" no esta conectado al punto "B", su valor será 0, y tambien en el caso de que el punto coincida consigo mismo. Se deben insertar valores en las casillas que tengan nodos conectados con otros.

Adaptamos este algoritmo en funcion del siguiente mapa:

//insert mapa nodos

Para entender mejor el sistema empleado en nuestra matriz, aqui les dejamos unos puntos de referencia en base al numero asignado para cada nodo:

  #### 0: Post Grado
  
  #### 1: Av. 14 de septiembre (la calle de la universidad Catolica)
  
  #### 2: Av. Hernando Siles
  
  #### 3: Av. Hector Ormachea
  
  #### 4: calle Costanerita
  
  #### 5: calle 17 de obrajes
  
  #### 6: Intersección Costanera
  
  #### 7: Plaza Humboldt
  
  #### 8: Rotonda / Puente amor de Dios
  
  #### 9: Universidad Privada Boliviana (UPB)
  

## Proceso de instalación
### paso 1:
Descargue su IDE o editor de codigo favorito, en este caso, nosotros utilizamos Visual Studio Code (VScode), el cual puede descargar desde la MIcrosoft Store, o desde el siguiente link: https://code.visualstudio.com/
![Captura de pantalla 2022-05-15 141614](https://user-images.githubusercontent.com/101950765/168487844-19aecaca-086d-4b1d-bf97-6b59bcbb6587.png)

### paso 2:
Asegurese de que su editor de codigo ejecute las instrucciones en el lenguaje "c++" de manera correcta, en este caso, recomendamos un video que ayudara a la configuracion de Visual Studio Code, para la ejecucion completa de todo lo que ofrece c++: https://www.youtube.com/watch?v=FQOqTvE_L00

### paso 3:
recuerde crear una carpeta especifica para este proyecto, luego, agreguela en el directorio de VScode:

![Captura de pantalla 2022-05-15 152617](https://user-images.githubusercontent.com/101950765/168491897-335a6757-9337-4db5-adbf-007eabdb674b.png)

![Captura de pantalla 2022-05-15 152929](https://user-images.githubusercontent.com/101950765/168491912-e2abcc64-614a-4022-bf22-dc624877aa8d.png)

![Captura de pantalla 2022-05-15 152957](https://user-images.githubusercontent.com/101950765/168491914-45fb06b6-8ce9-4a42-80ba-fa08d7e11a59.png)

A continuacion, debe crear un archivo con el nombre in.txt, el cual tiene la funcion de añadir los comandos necesarios (en forma de numeros enteros) para que el programa lea los datos ingresados, y realize las acciones de su preferencia.
#### IMPORTANTE: recuerde guardar el archivo (Ctrl + s) cada vez que haga algun cambio en los datos a ingresar.

![Captura de pantalla 2022-05-15 153200](https://user-images.githubusercontent.com/101950765/168492182-51d3cd9f-c1a9-467b-a1eb-93c3aa6d9282.png)

![Captura de pantalla 2022-05-15 153321](https://user-images.githubusercontent.com/101950765/168492185-967d8b69-7779-42df-bab4-68f62cbd45cb.png)

### paso 4:
Copiar el contenido del archivo "postGradoCampusDijkstra.cpp", y pegarlo en un nuevo archivo ".cpp" de VScode, a coninuacion guardar el archivo en la carpeta designada.
una vez tenga listo su input deseado, presione el boton de "Play" en el programa. 

![Captura de pantalla 2022-05-15 153731](https://user-images.githubusercontent.com/101950765/168492321-c1247159-8172-48fc-becc-32e0c6a30aa9.png)
![Captura de pantalla 2022-05-15 153848](https://user-images.githubusercontent.com/101950765/168492325-7766f93e-7773-482b-9fc1-174a75a78b6f.png)
![Captura de pantalla 2022-05-15 153910](https://user-images.githubusercontent.com/101950765/168492333-ca9c9fe0-b7b3-4a11-af9b-e22c3cba9b7a.png)
![Captura de pantalla 2022-05-15 162012](https://user-images.githubusercontent.com/101950765/168492338-40130fdb-b2ce-44a3-9137-de530bd82327.png)

En la seccion de abajo aparecera una barra de terminal, seleccione la opción "OUTPUT", encontrara la interfaz con todas las opciones propuestas, seleccione la que usted elija insertando su numero en el archivo "int.txt", para insertar mas de una opción, presiones enter y el nuevo numero cada vez que necesite.

![Captura de pantalla 2022-05-15 154510](https://user-images.githubusercontent.com/101950765/168492444-bb38addc-0e65-4021-9158-7e6527e14bcf.png)


### paso 5 (para "crea tu propio ejemplo"):
Dirijase al codigo, y busque la linea 6, encontrara unos valores con las conexiones entre los puntos propuestos (por ejemplo PostGradoCalleCato), los cuales estan con valor 0 por defecto.
#### cambie los valores de los puntos a su gusto, de ser necesario, vea la tabla de referencia.
###### *recomendamos no dejar ningun valor en 0.

![Captura de pantalla 2022-05-15 154612](https://user-images.githubusercontent.com/101950765/168492504-f7f16fcf-ee10-468d-a1a9-ad0be44de42c.png)


## Conclusión

Con este algoritmo logramos demostrar en varias situaciones, el camino mas rapido hacia el campus, atravesando por distintos factores: desde el bloqueo de algunas calles (tales como la costanerita), una trancadera en un punto tan estrategico como la 17 de obrajes, e incluso una situacion tan comun como las trancaderas en hora pico.

Ademas logramos implementar un sistema para que cada usuario pueda crear sus situaciones personalizadas, ya que, en ciertas ocasiones, hay factores externos que pueden cambiar el tiempo de viaje de un punto a otro, y asi, el usuario pueda probar en distintas situaciones a su gusto, y pueda tomar sus previsiones.


## Muchas gracias!!
