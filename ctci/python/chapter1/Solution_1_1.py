
def isUnique(word):
    unique = []
    for char in word:
        if char not in unique:
          unique.append(char)
        else:
          return False
    return True

word = input("enter a word:")
print(isUnique(word))

