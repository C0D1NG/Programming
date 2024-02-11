def dfs(graph, current, end, visited, path):
    # Mark the current node as visited
    visited.add(current)

    # Add the current node to the path
    path.append(current)

    # Check if the destination node is reached
    if current == end:
        return path

    # Explore neighbors in DFS fashion
    for neighbor in graph.get(current, []):
        if neighbor not in visited:
            # Recursively call DFS on the unvisited neighbor
            result = dfs(graph, neighbor, end, visited, path.copy())
            
            # If a path is found, return it
            if result:
                return result

    # If destination node is not reachable from the current node
    return None

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

visited_nodes = set()
path_result = dfs(graph, start_node, end_node, visited_nodes, [])

if path_result:
    print("Path found:", " -> ".join(path_result))
else:
    print("Path not found.")


# Output :
#     Path found: A -> B -> D -> E -> F -> G
