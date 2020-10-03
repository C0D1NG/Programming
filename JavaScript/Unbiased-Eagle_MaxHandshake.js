'use strict';

const getMaxNumberOfHandShakes = (person) => {
	// Calculating max no of handshakes possible
	const maxNoOfHandShakes = person * (person - 1) * 0.5;
	return maxNoOfHandShakes;
};

const maxNoOfHandShakes = getMaxNumberOfHandShakes(100);

console.log(maxNoOfHandShakes);
