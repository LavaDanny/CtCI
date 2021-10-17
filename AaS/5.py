# 3 moves can be made to a string, insert a character, remove a character, replace a character
# Check if two strings are one move away from each other


def checkIfOneSwap(text1, text2):
    oneOff = 0
    for x in range(len(text1)):
        if(text1[x] != text2[x]):
            if(oneOff == 0):
                oneOff = 1
            else:
                return False
        
    return True


text1 = input("Input string 1: ")
text2 = input("Input string 2: ")

arr1 = [0] * 128
arr2 = [0] * 128

if(len(text1) == len(text2)):
    test1 = checkIfOneSwap(text1, text2)
    if(test1 == True):
        print("true, test1")
    else:
        print("not test1")

if(len(text1) == len(text2) + 1 or len(text1) == len(text2) - 1):

    for x in text1:
        arr1[int(x)] = arr1[int(x)] + 1
    for y in text2:
        arr2[int(y)] = arr2[int(y)] + 1

    diff = 0
    for z in range(128):
        if(arr1[z] != arr2[z]):
            if(diff == 0 and abs(arr1[z] - arr2[z]) == 1):
                diff = 1
            else:
                print("false")

print("true")

if("a" == "A"):
    print("case doesn't matter")