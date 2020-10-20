/* First we must understand containers. A container is an object that contains a collection of other objecst(its elements)
 Examples of containers are c++ arrays, vectors, lists, stacks, queues, sets, maps, etc.
 Iterators are objects that point to elements inside containers.
 Not all iterators are created equal. Some containers may support random acess such as vectors (where the iterator doesn't have to move sequentially.
 Essentially just a pointer), while others like lists,maps, sets, etc are only bidirectional (meaning they can only move forwards or backwards but not randomly). 
 Benefits of iterators are convenience- don't have to keep track of the size of the containor, allow for greater code reusability, allow for dynamic additon
 and subtraction of elements from containers.
 Iterators look like the following:
 data_type::iterator
*/