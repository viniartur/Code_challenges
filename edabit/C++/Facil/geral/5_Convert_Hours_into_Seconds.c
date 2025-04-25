// Convert Hours into Seconds
// Write a function that converts hours into seconds.

// Examples
// howManySeconds(2) ➞ 7200

// howManySeconds(10) ➞ 36000

// howManySeconds(24) ➞ 86400
// Notes
// 60 seconds in a minute, 60 minutes in an hour
// Don't forget to return your answer.

int howManySeconds(int hours) {
	int value = hours * 60;
	return (value * 60);
}

// basic_tests
// test1
// Test Passed
// test2
// Test Passed
// test3
// Test Passed
// test4
// Test Passed