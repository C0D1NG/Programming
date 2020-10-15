'use strict';

const swap = (a, i, j) => {
  let tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
};

const max_heapify = (a, i, length) => {
  while (true) {
    let left = i * 2 + 1;
    let right = i * 2 + 2;
    let largest = i;

    if (left < length && a[left] > a[largest]) {
      largest = left;
    }

    if (right < length && a[right] > a[largest]) {
      largest = right;
    }

    if (i == largest) {
      break;
    }

    swap(a, i, largest);
    i = largest;
  }
};

const heapify = (a, length) => {
  for (let i = Math.floor(length / 2); i >= 0; i--) {
    max_heapify(a, i, length);
  }
};

const heapsort = a => {
  heapify(a, a.length);
  for (let i = a.length - 1; i > 0; i--) {
    swap(a, i, 0);
    max_heapify(a, 0, i - 1);
  }
};

// this mutates input
let input = [6, 15, 4, 9, 13, 5, 1, 10, 8, 2, 3, 11, 7, 12, 14];
heapsort(input);
