Katas Provided By: Substratum, https://github.com/dnwiebe/Scala_Katas

#### Note

# Babysitter

A babysitter has the following pay schedule:

* $10/hr to look after children before their bedtime
* $6/hr to house-sit after bedtime
* $8/hr after midnight when work causes her to lose sleep.

Write a method or function that will accept an arrival time, a departure time, and 
a bedtime, and return the babysitter's earnings for the evening in dollars.

A partial hour is always charged as a whole hour; therefore arrival and departure
times will always be integral.  Represent all times as integers on a 12-hour 
clock--not as Dates or as OffsetDateTimes or anything more complicated.
The earliest the babysitter can arrive is 5pm; the latest she can stay is 4am.
Bedtime must never be after midnight.

Dollars in this kata will also always be integral; hence, represent them as 
integers--not as Doubles or BigDecimals or anything more complicated.

The first run at this kata should not include testing or handling for any error
conditions, such as arrival times less than 1 or greater than 12 or bedtimes after
midnight.


# Closest to Zero

Test-drive a method or function to accept a list of integers and return the one that 
is closest to zero.

It should be an error for the list to be empty.

If two different numbers tie for distance from zero (for example, 2 and -2), always 
return the positive one.


# Pricing

A store has the following pricing policy:

1. Buy less than $100 worth of merchandise and pay the full price.
1. Buy $100 or more, but less than $1000, and get 10% off.
1. Buy $1000 or more, and get 15% off.

According to the laws governing the store, the following taxes apply:

* Food: no tax.
* Alcohol: 7.5% sales tax + 8% "sin" tax.
* All other merchandise: 7.5% sales tax.

Discounts are calculated on sticker prices; taxes are calculated on discounted prices.

Using TDD, write a method that will accept purchased items of food, alcohol, and other, and will
return the price the customer should be charged.


# Triangles

Using TDD, write a method or function that accepts three numbers as the lengths of three line segments.
Determine computationally which of the following cases are true:

The three segments
  1. Can be joined into an equilateral triangle. (example: 3, 3, 3)
  1. Can be joined into an isosceles triangle. (example: 5, 5, 3);
  1. Can be joined into a right triangle. (example: 3, 4, 5);
  1. Can only be joined into a triangle that is not one of the preceding cases. (example: 2, 3, 4)
  1. Cannot be made into a triangle. (example: 2, 3, 5) [Warning: might look isosceles at first glance.]

The order in which the segments are supplied must not affect the result.


# Word Wrap

Test-drive a function to accept a string and a line length, and return a version of 
the original string, possibly with newline characters inserted, such that no line in 
the resulting string is longer than the supplied line length.

Wherever possible, newlines should be inserted between words; they should be placed
inside words only when those words are themselves longer than the permitted line 
length.

For the initial cut of this kata:

* Assume that the input will contain only spaces to separate words: no tabs, 
no newlines, no form feeds; and hyphens, commas, periods, etc. are considered to be 
part of the words they're embedded in.
* Assume that words will be separated by only one space: no multiple consecutive spaces.



# Translating Names

Test-drive a function that will accept a camel-cased name
either `beginningWithALowercaseCharacter` or `WithAnUppercaseOne`,
and produce a snake-cased version of that name, like
`beginning_with_a_lowercase_character` or `with_an_uppercase_one`.

