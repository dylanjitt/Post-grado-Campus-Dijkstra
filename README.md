# Post-grado-Campus-Dijkstra
este repositorio fue creado con la idea de encontrar el camino, las calles y los transportes mas rapidos, desde el postrgado de la UPB en obrajes, hasta el campus de la misma ubicado en achocalla

## Definicion del problema

Eres estudiante de la UPB, y te asignaron pasar materias en Post grado y en el Campus a la vez???, y necesitas llegar al campus desde obrajes de la manera mas rapida posible?? No te preocupes!!! nosotros tenemos la Solución.

Presentamos "Post Grado-Campus Dijkstra", un algoritmo que se encarga de analizar y hallar el tiempo mas corto para llegar a la universidad a tiempo, e incluso, tambien funciona para otros puntos cercanos, desde la calle de la cato, hasta la plaza humboldt (la plaza favorita de los de la UPB).

## Explicacion del algoritmo
Este sistema utiliza el algoritmo dijkstra, el cual fue diseñado con el objetivo de encontrar el camino mas corto entre varios nodos, partiendo de uno en especifico, y llegando a un nodo final, recorriendo todas las posibilidades, hasta dar con las opciones mas cortas, o con menor costo o "peso".
El algoritmo Dijkstra puede ser representado generalmente en dos sistemas:

-la lista de listas
-la matriz

para este programa utilizaremos el sistema de matrices, en el que, cada casilla coincide con dos nodos, a la cual se le asigna un valor con numeros enteros (int), por lo que, si un punto "A" no esta conectado al punto "B", su valor será 0, y tambien en el caso de que el punto coincida consigo mismo. Se deben insertar valores en las casillas que tengan nodos conectados con otros.

Adaptamos este algoritmo en funcion del siguiente mapa:

//insert mapa nodos

Para entender mejor el sistema empleado en nuestra matriz, aqui les dejamos unos puntos de referencia en base al numero asignado para cada nodo:
-0: Post Grado
-1: Av. 14 de septiembre (la calle de la universida Catolica)
-2: Av. Hernando Siles
-3: Av. Hector Ormachea
-4: calle Costanerita
-5: calle 17 de obrajes
-6: Interseccion Costanera
-7: Plaza Hubmoldt
-8: Rotonda / Puente amor de Dios
-9: Universidad Pirvada Boliviana (UPB)

## Proceso de instalacion
