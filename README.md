# binaryHeap
Визуализация операций добавления в бинарной куче

Этот код запускает бесконечный цикл для ввода чисел и добавления их в кучу. После каждого добавления числа в кучу, вызывается функция printHeap, которая выводит текущее состояние кучи в виде ASCII-графики. Цикл завершается, когда пользователь вводит число 0.

В функцию printHeap добавлена псевдографика. Каждый узел кучи отображается в виде числа, разделенного пробелами, а связи между узлами отображаются в виде символов "/" и "\". Каждый уровень кучи отображается на отдельной строке, а каждый узел сдвигается вправо на расстояние, пропорциональное ширине узла.

Мы используем setw из заголовочного файла <iomanip> для установки ширины поля вывода. Первый setw устанавливает ширину поля перед цифрой, а второй setw после цифры. Объединение этих двух setw позволяет сместить символы "\" и "/" вместе с цифрами влево и вправо.
