/**
 * A program to fill an array with given value and times
 * 
 * for example:
 * Input: 3, 'a'
 * 
 * Output: ['a', 'a', 'a']
 */

 function fill(times, character){
    return Array.apply(null, Array(times)).fill(character);
}

/**
 * Remove the line below for using in real project
 */
console.log(fill(3, 'a'));
