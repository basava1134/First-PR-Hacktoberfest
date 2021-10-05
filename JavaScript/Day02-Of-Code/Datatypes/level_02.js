// 1.using console.log() print the following sentence
var quote = 'There is no exercise better for the heart then reaching down and lifting people up';
console.log(quote);

// use console.log() to print the following quote

var newQuote = 'Love is not patronizing and charity is not about pity, it is about love. charity and love are the same-- with charity you give love, so do not just give money but reach out your hands instead';
console.log(newQuote);

// 3.) Check if typeof '10' is exactly equal to 10. If not make it exactly equal.
console.log(typeof('10') == typeof(10))

// 4.) Check if parseFloat('9.8') is equal to 10 if not make it exactly equal with 10.

var  num_01 = '9.8';
console.log(parseFloat(num_01));
var num_02 = Number(10)
console.log(num_02)

// check if 'on' is found in both python and jargon
var techno = 'python , jargon';
console.log(techno.search('on'));

// I hope this course is not full of jargon. Check if jargon is in the sentence.

var newJar = 'I hope this course is not full of jargon';
console.log(newJar.includes('jargon'));
// 7. Generate a random number between 0 and 100 inclusively.

console.log(Math.floor((Math.random() * 100) + 1))

// 8.) Generate a random number between 50 and 100 inclusively.

console.log(Math.floor((Math.random() * 50) + 50))

// 9.) Generate a random number between 0 and 255 inclusively.

console.log(Math.floor((Math.random() * 250) + 5))
// 10.) Access the 'JavaScript' string characters using a random number.


// 11. Use console.log() and escape characters to print the following pattern.

console.log('1\t1\t1\t1\t1\n');
console.log('2\t1\t2\t4\t8\n');
console.log('3\t1\t3\t9\t27\n');
console.log('4\t1\t4\t16\t64\n');
console.log('5\t1\t5\t25\t125');

// 12. Use substr to slice out the phrase because because because in the following sentence:'You cannot end a sentence with because because because is a conjunction'

var sent = 'You cannot end a sentence with because because because is a conjunction';
console.log(sent.substr(30,24));