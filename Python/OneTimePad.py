import string
import random

key = ''
encrypted_text = []
binary_key = []
option = None

def bin_to_str(binary):
    binary = str(binary)
    character = ''
    char = ''
    tam = len(binary)
    k = 1
    for j in binary:
        if j != ' ':
            character += j
            if k == tam:
                char += chr(int(character, 2))
        else:
            char += chr(int(character, 2))
            character = ''
        k += 1        
    return char

def str_to_bin(string):
    binary = ''
    for i in string:
        binary += bin(ord(i))[2::] + ' '
    return binary


def layout_pattern(name):
    print("\n+==================================================================+")
    print("  ",name,"\n+==================================================================+")

def menu():
    layout_pattern("ONE-TIME PAD")
    print("\n  1 - Encryption\n  2 - Decrypt\n  0 - Exit\n")    

def key_generator(tam):
    return ''.join(random.choice(string.ascii_letters) for x in range(tam))

def select_option(opcao):
    if opcao == 1:
        layout_pattern("You chose: Encrypt")   
        encrypt()    
    if opcao == 2:
        layout_pattern("You chose: Decrypt")
        decrypt()
    if opcao == 0:
        exit(0)

def encrypts(key, text):
    keys_bits = key.split(' ')
    text_bits = text.split(' ')
    del(keys_bits[-1])
    del(text_bits[-1])
    result = []

    for i in range(len(text_bits)):
        result.append(str(bin(int(text_bits[i],2) ^ int(keys_bits[i],2))[2::]))
    return result

def encrypt():
    global key, binary_key, encrypted_text
    plain_text = str(input("  Enter the text to be encrypted: "))        
    binary_text = str_to_bin(plain_text)
    key = key_generator(len(plain_text))
    binary_key = str_to_bin(key)
    encrypted_text = encrypts(binary_key, binary_text)
    binary_key = binary_key.split(' ')
    del(binary_key[-1])    
    print("\n  Encrypted message: ", "".join(map(str, encrypted_text)))    

def decrypt():
    global key, binary_key, encrypted_text
    plain_text = []
    decrypted_text = []    
    if(key != ''):
      for i in range(len(encrypted_text)):
        decrypted_text.append(bin( int(binary_key[i],2) ^ int(encrypted_text[i],2) )[2::])
      print("\n\n  Decrypted message: ", end="")
      for j in range(len(decrypted_text)):
        plain_text.append(bin_to_str( decrypted_text[j]))
        print(plain_text[j], end="" )
      print("\n")        
    else:
        print("\n  There are no keys in the memory")

def options_select():
  menu()    
  option = int(input("  Select an option: "))
  select_option(option)

def main():
    options_select()
    while(option != 0): 
      options_select()

main()
