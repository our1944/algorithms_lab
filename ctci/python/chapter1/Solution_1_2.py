def reverseStr(word):
    str = ''
    for i  in range(len(word)-1,-1,-1) :
       str += word[i]
    return str


word = input("enter a word:")
print(reverseStr(word))
~                             