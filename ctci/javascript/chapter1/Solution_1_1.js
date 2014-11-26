var assert = require('assert');

function isUnique(word) {
  var chars = [];
for (var i = 0; i < word.length; i++) {
if (chars.indexOf(word[i]) > -1) {
return false;
}
chars.push(word[i]);
}
return true;
}
assert.equal(isUnique('apple'), false);
assert.equal(isUnique('true'), true);
assert.equal(isUnique('A'), true);
assert.equal(isUnique(''), true);