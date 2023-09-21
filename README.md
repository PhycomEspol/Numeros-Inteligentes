<h1 align="center"> Números Inteligentes </h1>
<p align="center">
  <img src="src\numeros_inteligentes.jpeg" width="500px" />
</p>


## Descripción  📋

Este proyecto tiene como objetivo desarrollar un programa que se comunique con Arduino UNO a través de la comunicación serial. Utiliza las capacidades de OpenCV y Arduino para detectar y mostrar la cantidad de dedos mostrados en una matriz de LED controlada por Arduino UNO. Esta aplicación práctica y dinámica nos permite explorar el potencial de estas herramientas de manera efectiva.


## Pre-requisitos 📋

Para instalar y ejecutar este software, necesitas lo siguiente:

1. **Python 3.11.5:** Asegúrate de tener Python 3.11.5 o una versión compatible instalada en tu sistema. Puedes descargarlo desde [el sitio oficial de Python](https://www.python.org/downloads/).

2. **Entorno Virtual (venv):** Se recomienda crear un entorno virtual para este proyecto. Puedes hacerlo ejecutando los siguientes comandos en tu terminal:

   ```bash
   # Crear el entorno virtual venv si no está instalada
   python -m venv venv

   # Activa el entorno virtual (en Windows)
   venv\Scripts\activate

   # Activa el entorno virtual (en macOS y Linux)
   source venv/bin/activate
   
### Instalación de Paquetes desde requirements.txt 📦
Este proyecto depende de varios paquetes que se encuentran especificados en el archivo `requirements.txt`. Para asegurarte de que todas las dependencias necesarias estén instaladas, sigue estos pasos:

1. Abre una terminal y navega hasta el directorio donde se encuentra el archivo `requirements.txt`.

2. Asegúrate de que tu entorno virtual esté activado. Si aún no has creado un entorno virtual, consulta la sección "Pre-requisitos" para obtener instrucciones sobre cómo hacerlo.

3. Ejecuta el siguiente comando para instalar los paquetes desde el archivo `requirements.txt`:

   ```bash
   pip install -r requirements.txt

## Materiales  📦
Agregar la lista de materiales necesario para construir el proyecto. Si desean adjuntar los costos de los materiales se puede adicionar

A continuación se muestra una lista de los materiales requeridos, junto con la cantidad y el precio de cada uno:


  Nombre del Material  | Cantidad  | Precio Unitario (USD)  
|----------------------|-----------|-------------------------
| Matriz de Leds       | 7         | 💲4.00                 |
| Jumpers X 40         | 7         | 💲2.50                 |
| Arduino UNO          | 2         | 💲15                   |


## Total-estimado  💰

El costo total estimado del proyecto se calcula sumando los precios de todos los materiales:

Total Estimado: $21.50 USD 💲

## Esquemas 📊

A continuación, se muestra el esquema de conexión del circuito que debes seguir para conectar los componentes de manera correcta. Esto es esencial para que la aplicación funcione correctamente con Arduino UNO y la matriz de LED. Asegúrate de seguir este esquema detenidamente.

<!-- Inserta una imagen del esquema de conexión aquí -->

## Simulacion-e-Instalacion  🔧

### Simulación en Wokwi

Para facilitar el desarrollo y la prueba de tu proyecto, hemos preparado una simulación en Wokwi que te permitirá probar el funcionamiento de la aplicación antes de implementarla en hardware real.

Puedes acceder a la simulación de tu proyecto en Wokwi a través del siguiente enlace:

[Simulación en Wokwi](https://wokwi.com/projects/376412244520871937)

La simulación te proporcionará un entorno virtual donde podrás interactuar con el proyecto y verificar su funcionamiento. Esto es especialmente útil para realizar pruebas y depuración antes de llevar a cabo la implementación física.

Asegúrate de aprovechar esta herramienta para garantizar que tu proyecto funcione sin problemas antes de pasar a la implementación en hardware real.

### Ejecucion-del-Programa

Para ejecutar el programa y utilizar la aplicación, sigue estos pasos:

1. **Conexión del Arduino:**

   - Conecta tu Arduino UNO a tu PC o laptop mediante un cable USB.

2. **Carga del Código en Arduino:**

   - Asegúrate de haber cargado el código necesario en tu Arduino UNO. Puedes hacerlo utilizando el entorno de desarrollo de Arduino.

3. **Cambio del Puerto en el Código:**

   - Abre el archivo Python que contiene el programa y busca la sección donde se define el puerto de comunicación serial con Arduino. Debería verse algo como esto:

     ```python
     puerto_serial = 'COMX'  # Cambia 'COMX' por el puerto asignado a tu Arduino
     ```

   - Reemplaza `'COMX'` por el puerto correcto asignado a tu Arduino. Puedes encontrar el puerto en el administrador de dispositivos de tu sistema.

4. **Ejecución del Programa:**

   - Abre una terminal y navega hasta el directorio donde se encuentra el archivo Python que contiene tu programa.

   - Ejecuta el programa Python utilizando el siguiente comando:

     ```bash
     python numeros_inteligentes.py
     ```

5. **Interacción con la Aplicación:**

   - Una vez que el programa esté en ejecución y la comunicación con Arduino esté establecida, podrás interactuar con la aplicación por medio de la WebCam Integrada en su computadora.

6. **Finalización del Programa:**

   - Cuando hayas terminado de utilizar la aplicación, puedes presionar la tecla ESC o detener la ejecución del programa según sea necesario.

Siguiendo estos pasos, podrás ejecutar el programa y utilizar la aplicación junto con Arduino UNO. Asegúrate de que el puerto en el código coincida con el puerto asignado a tu Arduino para garantizar una comunicación adecuada.

## Autores ✒️

* **Carlos Galabay** - *Desarrollo del Proyecto* - [CarlosGalabay](https://github.com/CarlosGalabay)


## Video-demostrativo 🎥
<!-- "Deben subir un video del funcionamiento a esta carpeta con el nombre de su proyecto:

https://espolec-my.sharepoint.com/:f:/g/personal/phycom_espol_edu_ec/Ev_QF9sXrLdOnNa4bQGy1gUBHgFZhHeYxoOzzLBM-buHsg?e=SjMYeL

No olvidar decirle a su mentor que ya fue subido el video para que el Dep.Proyectos pueda agregar el link en esta sección
"-->
Puedes encontrar un video demostrativo de este proyecto en [este enlace](https://www.tiktok.com/@phycom_espol/video/7281403942909594885).

## Imagenes 📊

A continuación, se muestran algunas imágenes del proyecto:

![Imagen 1](url_de_la_imagen_1.png)
![Imagen 2](url_de_la_imagen_2.png)

## Informacion-adicional ✒️
---
Esta es la sección que permite agregar más información de contexto al proyecto como alguna web de relevancia, proyectos similares o que hayan usado la misma tecnología.
