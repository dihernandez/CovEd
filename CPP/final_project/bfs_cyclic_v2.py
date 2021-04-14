mygraph_cyclic = {1:set([2,3]), 2: set([3,4]), 3:set([2,1,4]), 4: set([1,2])}

mygraph_tree_example = {0:[1], 1:[2,3,4], 2:[5,6], 3:[], 4:[7,8], 5:[9,10], 6:[], 7:[11,12], 8:[], 9:[], 10:[], 11:[], 12:[]} 

def solve(start, graph, n):
    queue = []
    queue.append(start)
    visited = [False for i in range(n)]
    visited[start] = True
    prev = [None for i in range(n)]

    while queue:
        node = queue.pop(0)
        neighbours = graph[node]
        for next in neighbours:
            if not visited[next]:
                queue.append(next)
                visited[next] = True
                prev[next] = node
    return prev
   

def reconstruct_path(start, end, prev):
    path = [end]
    while path[-1] != start:
        path.append(prev[path[-1]])
    path.reverse()
    return path

def bfs(start, end, graph, n):
    prev = solve(start, graph, n)
    print("printing prev", prev)
    return reconstruct_path(start, end, prev)

print(bfs(1,4,mygraph_tree_example, 13))
print(bfs(4,3,mygraph_cyclic,5)) 
