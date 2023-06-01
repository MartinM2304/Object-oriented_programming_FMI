### Задача 1:
Реализирайте структурата от данни **Vector**. 
Структурата трябва да осигурява достъп до произволен елемент, както и добавяне и премахване на елемент на произволна позиция.

Реализирайте следните член-функции:
  1. pushBack(..)
  2. pushAt(..)
  3. popBack(..)
  4. popAt(..)
  5. operator[]
  6. empty(..)
  7. clear(..)
  8. swap(..)

Реализирайте и други подходящи функции.


### Задача 2:
Релизирайте структурата от данни опашка. Опашката трябва да работи с **произволни типове**. След като е добавен един елемент в края на опашката, той ще може да бъде извлечен (премахнат) единствено след като бъдат премахнати всички елементи преди него в реда, в който са добавени.

```c++
int main()
{
	quene<int> q;
	q.enqueue(3);
	q.enqueue(5);
	q.enqueue(10);

	cout << q.dequeue() << endl; //3
	cout << q.dequeue() << endl; //5
	cout << q.dequeue() << endl; //10

	cout << q.isEmpty() << endl; //1	
}
```

### Задача 3:
Реализирайте структура от данни Stack. Имплементирайте я, чрез масив. 

### Задача 4:
 Създайте **шаблонна** опашка с k приоритета. При взимане на елемент от опашката трябва да се връща най-отдавна добавения елемент от тези с най-висок приоритет.
 
```c++
int main()
{
	kPriorityQueue<char> q(4); // 4 priorities - 0, 1, 2 и 3.
	
	q.enqueue('A',0): //adds A with lowest priority: 0
	q.enqueue('B',3);
	q.enqueue('C',2);
	q.enqueue('D',2);
	q.enqueue('E',1);
	
	//q.enqueue('F', 5); //error! No such priority!
	
	q.dequeue(); // B
	q.dequeue(); // C
	q.dequeue(); // D
	q.dequeue(); // E
	q.dequeue(); // A
}
 ```

## Useful information
- [std::vector](https://www.cplusplus.com/reference/vector/vector/?kw=vector)
- [std::queue](https://www.cplusplus.com/reference/queue/queue/?kw=queue)
- [std::queue](https://en.cppreference.com/w/cpp/container/stack)
