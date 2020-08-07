# how is this different?

mygraph_tree_example = {1:[2,3,4], 2:[5,6], 3:[], 4:[7,8], 5:[9,10], 6:[], 7:[11,12], 8:[], 9:[], 10:[], 11:[], 12:[]}
def dfs(graph, start):
    visited = set([start])
    stack = []
    stack.append(start)
    path = []
    while len(stack) > 0:
        vertex = stack.pop()
        path.append(vertex)
        print(vertex, graph[vertex])
        for i in graph[vertex]:
            if i not in visited:
                stack.append(i)
                visited.add(i)
    return path


print(dfs(mygraph_tree_example, 1))