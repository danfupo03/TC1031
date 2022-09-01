![Tec de Monterrey](images/logotecmty.png)
# Act 1.1 - Iterative, Recursive Functions and their Complexity Analysis

## <span style="color: rgb(26, 99, 169);">What I have to do?</span>
In this working repository you will find the file "activity.h". In this file you must develop the implementation of the problem presented in this activity. At the top of the file, place your data in comments. For example:
```
// =========================================================
// File: activity.h
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
Implement, <span style="text-decoration-line: underline;">individually</span>, the different versions of a sum of **1 to n** and call three functions:

<table style="height: 10px; width: 0%; border-collapse: collapse; border-top-style: solid; border-right-style: solid; border-bottom-style: solid; border-left-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 30%; height: 10px; background-color: rgb(25, 99, 169);" rowspan="5"><span style="font-size: 18pt; color: rgb(255, 255, 255);">sumaIterativa</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Description</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">
Calculate the sum of 1 to n with an iterative method.</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Input</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">A positive integer (n)</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Output</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">The sum of 1 to n</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Precondition</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">n is a positive integer</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Postcondition</span></td>
<td style="width: 0px; height: 10px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Nothing</span></td>
</tr>
</tbody>
</table>

<br>

<table style="height: 10px; width: 0%; border-collapse: collapse; border-top-style: solid; border-right-style: solid; border-bottom-style: solid; border-left-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 30%; height: 10px; background-color: rgb(25, 99, 169);" rowspan="5"><span style="font-size: 18pt; color: rgb(255, 255, 255);">sumaRecursiva</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Description</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">
Calculate the sum of 1 to n with a recursive method.
</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Input</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">A positive integer (n)</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Output</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">The sum of 1 to n</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Precondition</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">n is a positive integer</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Postcondition</span></td>
<td style="width: 0px; height: 10px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Nothing</span></td>
</tr>
</tbody>
</table>

<br>

<table style="height: 10px; width: 0%; border-collapse: collapse; border-top-style: solid; border-right-style: solid; border-bottom-style: solid; border-left-style: solid;" border="1">
<tbody>
<tr style="height: 24px;">
<td style="width: 30%; height: 10px; background-color: rgb(25, 99, 169);" rowspan="5"><span style="font-size: 18pt; color: rgb(255, 255, 255);">sumaDirecta</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Description</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">
Calculate the sum of 1 to n with a direct mathematical method.
</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Input</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">A positive integer (n)</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);">Output</td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);">The sum of 1 to n</td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 0px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Precondition</span></td>
<td style="width: 0px; height: 0px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">n is a positive integer</span></td>
</tr>
<tr style="height: 24px;">
<td style="width: 0px; height: 10px; background-color: rgb(0, 139, 247);"><span style="color: rgb(0, 0, 0);">Postcondition</span></td>
<td style="width: 0px; height: 10px; background-color: rgb(183, 219, 255);"><span style="color: rgb(0, 0, 0);">Nothing</span></td>
</tr>
</tbody>
</table>

<br>All functionalities must be correctly aligned and documented.&nbsp; Remember that all features must successfully pass all tests. As part of the documentation, the complexity of each of them must be included.

To test your implementation, run the command:
```
make
```
This command will compile your code and generate a series of test files called "runTest#", where # is a test number. To run test, you just need to run the correct files. For example, if you want to check if my code meets test number 3, you would run:
```
./runTest3
```
## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **70%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (70%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (55%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (40%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (25%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>
- **10%** - Se respetenan los nombres de las funciones en la aplicación.
- **10%** - Especifican en cada uno de las funcionalidades **la complejidad computacional** como parte de su documentación.

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (*git push*).
