
var assert = require('assert');

function reverseStr(word) {
  var str = '';
  for (var i= word.length -1;i >=0;  i--) {
    str += word[i];
  }
  return str;
}


assert.equal(reverseStr('apple'), 'elppa');
assert.equal(reverseStr('peach'), 'hcaep');
