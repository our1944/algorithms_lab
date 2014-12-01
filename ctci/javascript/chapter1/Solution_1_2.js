
var assert = require('assert');

function reverseStr(word) {
  return word.split("").reverse().join("");
}


assert.equal(reverseStr('apple'), 'elppa');
assert.equal(reverseStr('peach'), 'hcaep');
