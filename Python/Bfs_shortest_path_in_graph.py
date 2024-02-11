
""" Explain the implementation of the breadth-first search (BFS) algorithm for finding the shortest path in a graph.
Provide a step-by-step breakdown of the code, including the data structures used, the purpose of each section, 
 and how the algorithm ensures the shortest path is found. Additionally, discuss how the example graph
 is defined and utilized to find the shortest path from the 'A' (start) node to the 'G' (end) node. """



from collections import deque

def bfs(graph, start, end):
    # Initialize the queue with the starting node
    queue = deque([start])
    
    # Keep track of visited nodes and their levels
    visited = set()
    level = {start: 0}
    
    # Keep track of the parent node for path reconstruction
    path = {start: None}

    while queue:
        # Dequeue the current node
        node = queue.popleft()

        # Skip if the node has already been visited
        if node in visited:
            continue

        # Check if the destination node is reached
        if node == end:
            # Reconstruct and print the path
            print_path(path, start, end)
            return level[node]

        # Mark the current node as visited
        visited.add(node)

        # Explore neighbors and update levels and paths
        for child in graph.get(node, []):
            if child not in level:
                level[child] = level[node] + 1
                path[child] = node
                queue.append(child)

    # If the destination node is not reachable
    return -1

def print_path(path, start, end):
    # Reconstruct and print the path from start to end
    current = end
    path_list = []

    while current is not None:
        path_list.insert(0, current)
        current = path[current]

    print(" -> ".join(path_list))

# Example usage:
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': ['G'],
    'G': []
}

start_node = 'A'
end_node = 'G'

result = bfs(graph, start_node, end_node)
print("Shortest path length:", result)

