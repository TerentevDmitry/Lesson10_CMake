# Домашнее задание к занятию «CMake»

### Задание 1

[Простейший проект](10_01).

<details>
# Задача 1. Простейший проект
В этом задании вам нужно создать простейший проект с помощью CMake.

Создайте проект CMake `my_first_cmake_project`, в котором будет исполняемая программа `my_first_cmake_program`. Программа должна спрашивать имя пользователя и приветствовать его.

### Пример работы программы
#### Консоль
```
Введите имя: Виталий
Здравствуйте, Виталий!
```
</details>

### Задание 2

[Проект посложнее](10_02).

<details>
# Задача 2. Проект посложнее
В этом задании нужно создать более сложный проект с помощью CMake.

Вам нужно собрать и запустить программу из [предыдущего домашнего задания](../../06/03) с помощью CMake.

После сборки проверьте, что у вас всё работает корректно.

### Пример работы программы
#### Консоль
```
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
```

#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Этот проект отличается от простейшего только бо́льшим количеством файлов.

Не забудьте добавить пути ко всем файлам исходного кода, заголовочным в том числе, в команду `add_executable`. Пути к файлам разделяются пробелом.

 Для успешной сборки вам нужно следить за расположением заголовочных файлов и файлов исходного кода в вашей директории проекта, за путями в команде `add_executable` и относительными путями при подключении заголовочных файлов с помощью директивы `#include`.

</details>

</details>
