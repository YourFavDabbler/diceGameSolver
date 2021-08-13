"""
Combine all rolled dice using basic arithmetic operators to derive a given number

$ python diceGameReference.py
Try to calculate 42 using these dice: [2, 3, 3, 5, 6, 4]

(2 + 3) + 3) * 5) + 6) - 4) = 42
"""

import random
import itertools

ALLOWED_OPERATIONS = ['*', '/', '+', '-']


def roll_em(numdice):
    return [random.randint(1,6) for dice in range(numdice)]


def format_eq(perm, ops):
    result = "(" + str(perm[0])
    for idx, op in enumerate(ops):
        result += " " + str(op) + " "
        result += str(perm[idx+1])
        result += ")"
    return result


def solve_roll(roll, number):
    for perm in itertools.permutations(roll):
        for ops in itertools.product(ALLOWED_OPERATIONS, repeat=len(roll)-1):
            value = perm[0]
            for idx, di in enumerate(perm[1:]):
                value = eval('%s %s %s' % (float(value), ops[idx], di))
            if value == float(number):
                yield format_eq(perm, ops)


if __name__ == "__main__":
    # input variables
    numdice = 6
    roll = roll_em(numdice)
    number = 42

    print ("Try to calculate"), number, ("using these dice:"), roll
    print
    for solution in solve_roll(roll, number):
        print (solution), "=", (number)
        break  # just take the first one
      

