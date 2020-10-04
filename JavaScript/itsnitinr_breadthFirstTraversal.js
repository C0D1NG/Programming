function breadthFirstSearch(startVertex) {
  const result = [];
  const visited = {};
  const queue = [startVertex];
  let currentVertex;

  // Starting vertex will be visited by default
  visited[startVertex] = true;

  // Iterate until queue is not empty
  while (queue.length) {
    // Add to result
    currentVertex = queue.shift();
    result.push(currentVertex);

    // Add each unvisited neighbour of the vertex to queue
    this.adjacencyList[currentVertex].forEach((neighbour) => {
      if (!visited[neighbour]) {
        visited[neighbour] = true;
        queue.push(neighbour);
      }
    });
  }

  return result;
}
