"""
Created on Wed Oct 6 08:25:00 2021
@author: ISH KAPOOR
"""


def cryptoMachine():
    '''
    This function takes input of the message to be encrypted or an decrypted message using this program.
    The input of the mode defines whether the user wants to encrypt or decrypt the message.
    The input message can only contain words given in keys(variable that stores string).
    The input message stored in message(variable) encrypts/decrypts the message twice and returns the output as per the mode defined.
    '''
    # keys ~ Contains almost all the possible symbols generall used in messaging/conversing.
    keys = 'abcdefghijklmnopqrstuvwxyz1234567890 !@#$%^&*()_-+=/.?|<>:;{}[]'
    # values ~ Contains incremented list of values in keys to create a key that encrypts/decrypts the message into.
    values = keys[-1] + keys[0:-1]

    # encryptDict ~ Is a dictionary that stores almost all the key-value pair of keys & values for encryption
    encryptDict = dict(zip(keys, values))
    # decryptDict ~ Is a dictionary that stores almost all the value-key pair of keys & values for decryption
    decryptDict = dict(zip(values, keys))

    message = input("Plaese enter your secret message:\n")
    mode = input("Please enter the mode:\nE(Encode)/D(Decode)\n")

    if mode.upper() == 'E':
        newMessage1 = ''.join(
            [encryptDict[lttr] for lttr in message.lower()])  # Encrypting once
        newMessage = ''.join([encryptDict[nM1] for nM1 in newMessage1.lower()
                              ])  # Encrypting twice
    elif mode.upper() == 'D':
        newMessage1 = ''.join(
            [decryptDict[lttr] for lttr in message.lower()])  # Decrypting once
        newMessage = ''.join([decryptDict[nM1] for nM1 in newMessage1.lower()
                              ])  # Decrypting twice
    else:
        # If the values in input is not matching with the keys
        print("please enter a correct choice!")

    return newMessage


if __name__ == "__main__":

    machine = cryptoMachine()
    print(machine)