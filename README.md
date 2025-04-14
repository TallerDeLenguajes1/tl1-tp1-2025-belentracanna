[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

##### Gitignore.io

El archivo .gitignore es un archivo de texto que le dice a Git que archivos y directorios debe ignorar en un proyecto. Es conveniente incluirlo por varias razones:

Es conveniente incluirlo, ya que evita el commit de archivos innecesarios: Archivos temporales generados por el sistema operativo, entornos de desarrollo integrado (IDEs), compilaciones, logs, dependencias (como node_modules en JavaScript o venv en Python), archivos de configuracion local con informacion sensible (como contrasenias o claves API) no deberian ser parte del historial de versiones. Incluirlos puede inflar el tamanio del repositorio, generar ruido en los commits y potencialmente exponer informacion sensible.
Mantiene el repositorio limpio y organizado: Al ignorar archivos irrelevantes, el repositorio se mantiene enfocado en el codigo fuente y los archivos esenciales del proyecto, lo que facilita la navegacion y comprension para los colaboradores.
Mejora el rendimiento: Al evitar el seguimiento de una gran cantidad de archivos innecesarios, las operaciones de Git como git status, git add y git commit pueden ser mas rapidas y eficientes.
Previene conflictos innecesarios: Los archivos generados localmente a menudo varian entre diferentes entornos de desarrollo. Ignorarlos evita posibles conflictos de merge que surgirian al intentar combinar estas diferencias.
Seguridad: Permite excluir archivos que contienen informacion sensible, evitando que se suban accidentalmente a repositorios remotos.


Lo ideal es crear y configurar el archivo .gitignore al inicio del proyecto, antes de realizar el primer commit. Esto asegura que los archivos no deseados nunca sean rastreados por Git.

Sin embargo, tambien es comun modificar el archivo .gitignore a medida que el proyecto evoluciona y se identifican nuevos tipos de archivos que deberian ser ignorados. Si accidentalmente ya has anaiadido archivos que deberian ignorarse, necesitaras eliminarlos del seguimiento de Git (sin borrarlos localmente) antes de agregarlos al .gitignore. Puedes hacer esto con el comando git rm --cached <nombre_del_archivo>.



El archivo .gitignore es un archivo de texto plano donde cada linea especifica un patron de archivos o directorios a ignorar. Aqui hay algunas reglas basicas para configurar el archivo:

Cada linea representa un patron a ignorar.
Las lineas en blanco se ignoran.
Las lineas que comienzan con # son comentarios.
Se pueden usar patrones glob para especificar multiples archivos o directorios:
*: Coincide con cero o mas caracteres.
?: Coincide con exactamente un caracter.
[]: Coincide con cualquier caracter dentro de los corchetes.
[^...] o [!...]: Coincide con cualquier caracter que no este dentro de los corchetes.
/: Se utiliza para especificar rutas dentro de directorios. Un / al final del patron indica que solo debe coincidir con un directorio.
Se puede negar un patron precediendolo con un !. Por ejemplo, si tienes *.log para ignorar todos los archivos .log, pero quieres rastrear un archivo especifico llamado important.log, puedes anadir !important.log despues de *.log. El orden de las reglas importa; las reglas posteriores tienen precedencia.
Ejemplos comunes de entradas en un archivo .gitignore:

**Archivos temporales del sistema operativo**
.DS_Store
Thumbs.db

**Archivos generados por IDEs**
.idea/
.vscode/
*.suo
*.ntvs*
*.njsproj
*.sln.docstates

**Archivos de compilacion**
build/
dist/
out/
*.o
*.obj
*.exe
*.dll
*.so
*.dylib
*.pyc

**Logs**
*.log
logs/

**Dependencias**
node_modules/
venv/
env/
packages/

**Archivos de configuracion local**
config.ini
secrets.json
.env

**Archivos temporales de editores de texto**

*~
.#*
*.swp

**Documentos generados**
*.pdf
*.docx
*.xlsx
Herramientas utiles:

**gitignore.io:** Es un sitio web que permite generar archivos .gitignore personalizados segun el lenguaje de programacion, IDE o sistema operativo que estes utilizando.
Repositorios de plantillas de .gitignore en GitHub: **GitHub** mantiene un repositorio con plantillas de .gitignore recomendadas para diferentes lenguajes y frameworks.
Para configurar el archivo .gitignore, simplemente crea un archivo llamado .gitignore en la raiz de tu repositorio Git y editalo con un editor de texto, anadiendo los patrones de archivos y directorios que deseas ignorar. Una vez guardado, Git automaticamente dejara de rastrear los archivos y directorios que coincidan con los patrones definidos. Es importante commitear el archivo .gitignore al repositorio para que las reglas de ignorado sean compartidas con todos los colaboradores del proyecto.
## Segundo Commit y Explicación de Direcciones de Memoria

**g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?**

Los resultados de los apartados 2 y 3 son el mismo porque el puntero `miPuntero` almacena la dirección de memoria de la variable `miVariable`. Por lo tanto:

* **Apartado 2 (La dirección de memoria almacenada por el puntero):** Muestra el valor que contiene la variable puntero, que es la dirección de memoria de otra variable (`miVariable`).
* **Apartado 3 (La dirección de memoria de la variable):** Muestra la ubicación en memoria donde se ha reservado espacio para la variable `miVariable`.

En el **punto 4 (La dirección de memoria del puntero)**, se obtiene la dirección de memoria donde se almacena la propia variable puntero `miPuntero`. Es decir, al igual que cualquier otra variable, el puntero también ocupa un espacio en la memoria y tiene su propia dirección.

El resultado del punto 4 **no es igual** a los resultados de los puntos 2 y 3. Esto se debe a que:

* Los puntos 2 y 3 hacen referencia a la ubicación en memoria de la variable `miVariable`.
* El punto 4 hace referencia a la ubicación en memoria de la variable `miPuntero` en sí misma. Son dos entidades diferentes en la memoria, aunque el puntero esté relacionado con la otra variable al almacenar su dirección.



