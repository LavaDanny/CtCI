string = "aabcccccaaa"

ans = ""
count = 0

while(string != None):
    if(len(string) == 1):
        count += 1
        ans = ans + string[0]
        ans = ans + str(count)
        string = None
    elif(string[0] == string[1]):
        count += 1
        string = string[1:]
    else:
        count += 1
        ans = ans + string[0]
        ans = ans + str(count)
        string = string[1:]
        count = 0

print(ans)
