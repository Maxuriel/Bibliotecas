# Bibliotecas
Instruciones para el uso de las bibliotecas de la actividad I7 Windows 10 Powershell 11


&nbsp;
*Bibiloteca estática "ftrig"*


&nbsp;
1. Clonar el repositorio en VS y abrir la terminal.


&nbsp;
2. Para utilizar la biblioteca ftrig necesitas tener un codigo en el que se llamen las funciones de éste.


&nbsp;
Ejemplo para utilizar las bibliotecas:

![How to use this library](https://user-images.githubusercontent.com/110647400/185806984-670e558a-1582-46fe-9401-f2528347b2c5.png)


&nbsp;
3. Ejecuta el siguiente comando en la terminal de VS para enlazar tu codigo con la biblioteca y crear un ejecutable: 

g++ main.cc -o app\testlib -I .\lib\include -L .\lib\static -lftrig

*primero se introduce la ubicacion y nombre del archivo donde se utilizaran las funciones, seguido por la bandera -o y la ubicacion con el nombre deseado
para el ejecutable, se sigue con la bandera -I seguido por la ubicacion de la cabecera de la libreria que queremos utilizar, continuamos con la bandera
-L y ubicacion de donde se encuentra la libreria que queremos utilizar, al final pondremos la bandera -l junto con el nombre de la libreria*


&nbsp;
4. Después, para ejecutar la aplicacion se introduce el comando: 

./app/testlib.exe

ubicacion del ejecutable y nombre del mismo


&nbsp;
5. Si utilizo el codigo main de ejemplo deberia de mostrarse lo siguiente en la terminal:


&nbsp;
Ingrese el valor del cual desea saber su funcion trigonometrica

-3.1

seno(a) = -0.0415808

coseno(b) = -0.999135

tangente(c) = 0.0416167

secante(d) = nan

cosecante(e) = nan

cotangente(f) = -1.25875


&nbsp;
*Nota: Las funciones inversas dan resultados como "nan" en algunos casos ya que funcionan solo con números diferentes a enteros o reales*



&nbsp;
*Bibiloteca dinámica "ftrig"*


&nbsp;
1. Clonar el repositorio en VS y abrir la terminal.


&nbsp;
2. Para utilizar la biblioteca ftrig necesitas tener un codigo en el que se llamen las funciones de éste.


&nbsp;
3. Ejecuta el siguiente comando en la terminal de VS para enlazar tu codigo con la biblioteca y crear un ejecutable: 

g++ main.cc -o app\testdll -I .\lib\include -L .\lib\dll -lftrig

*primero se introduce la ubicacion y nombre del archivo donde se utilizaran las funciones, seguido por la bandera -o y la ubicacion con el nombre deseado
para el ejecutable, se sigue con la bandera -I seguido por la ubicacion de la cabecera de la libreria que queremos utilizar, continuamos con la bandera
-L y ubicacion de donde se encuentra la libreria que queremos utilizar, al final pondremos la bandera -l junto con el nombre de la libreria*


&nbsp;
4. Después, para ejecutar la aplicacion se introduce el comando: 

./app/testdll.exe

ubicacion del ejecutable y nombre del mismo


La salida debería ser igual a la de la biblioteca estática después de que el usuario haya ingresado un número


![d2e345db-ee07-40d8-8a88-f8bda85f22e5](https://user-images.githubusercontent.com/109250047/182996997-689d5de0-ef61-4282-b7e5-e85f22585291.jpg)


Comandos que se usaron para enlazar las bibliotecas con el main y crear unejecutable:


g++ main.cc -o app\testlib -I .\lib\include -L .\lib\static -lftrig


g++ main.cc -o app\testdll -I .\lib\include -L .\lib\dynamic -lftrig
