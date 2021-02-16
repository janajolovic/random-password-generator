import string
import random


def Password(number, symbols, e_number):
    letters = string.ascii_letters
    digits = string.digits 
    punctuation = string.punctuation

    if number and symbols:
        characters = letters + digits + punctuation
    elif number: 
        characters = letters + digits
    elif symbols: 
        characters = letters + punctuation
    else:
        characters = letters

    generator = random.choices(characters, k=int(e_number))

    return ''.join(generator)






    