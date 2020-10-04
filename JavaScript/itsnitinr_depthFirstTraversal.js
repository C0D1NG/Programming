// RECURSIVE APPROACH
function depthFirstSearch(startVertex) {
  const result = [];
  const visited = {};
  const adjacencyList = this.adjacencyList;

  // Recursively visit all neighbour vertices
  function dfsRecursive(vertex) {
    // Base case
    if (!vertex) return null;

    // Vertex has been visited and added to result
    visited[vertex] = true;
    result.push(vertex);

    // For each neighbour of the vertex, perform DFS if not visited
    adjacencyList[vertex].forEach((neighbour) => {
      if (!visited[neighbour]) {
        return dfsRecursive(neighbour);
      }
    });
  }

  // Invoke the recursive function and return result
  dfsRecursive(startVertex);
  return result;
}

// ITERATIVE APPROACH
function depthFirstSearch(startVertex) {
  const result = [];
  const visited = {};
  const stack = [startVertex];
  let currentVertex;

  // Starting vertex will be visited by default
  visited[startVertex] = true;

  // Iterate until stack is not empty
  while (stack.length) {
    // Visit the neighbour and add it to result
    currentVertex = stack.pop();
    result.push(currentVertex);

    // For each neighbour, add to stack if not visited
    this.adjacencyList[currentVertex].forEach((neighbour) => {
      if (!visited[neighbour]) {
        visited[neighbour] = true;
        stack.push(neighbour);
      }
    });
  }

  return result;
}
