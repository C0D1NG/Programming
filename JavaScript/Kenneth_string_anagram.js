'use strict';

const form = str =>
  str
    .toLowerCase()
    .replace(/[^a-z0-9]/gi, '')
    .split('')
    .sort()
    .join('');

const isAnagram = (firstString, secondString) => {
  return form(firstString) === form(secondString);
};

// test outputs
isAnagram('binary', 'brainy'); // true
isAnagram('rice', 'ice'); // false
isAnagram('adobe', 'abode'); // true
isAnagram('restful', 'fluster'); // true
isAnagram('scene', ''); // false
