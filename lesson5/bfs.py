mygraph_cyclic = {1:set([2,3]), 2: set([3,4]), 3:set([2,1,4]), 4: set([1,2])}

mygraph_tree_example = {1:[2,3,4], 2:[5,6], 3:[], 4:[7,8], 5:[9,10], 6:[], 7:[11,12], 8:[], 9:[], 10:[], 11:[], 12:[]}

def bfs(graph, start):
    visited = set([start])
    queue = []
    queue.append(start)
    path = []
    while len(queue) > 0:
        vertex = queue.pop(0)
        path.append(vertex)
        print(vertex, graph[vertex])
        for i in graph[vertex]:
            if i not in visited:
                queue.append(i)
                visited.add(i)
    return path


print(bfs(mygraph_tree_example, 1))
