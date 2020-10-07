def edit_distance(string1, string2, firstsize, secondsize):
    
    dptable = [[0 for i in range(secondsize+1)] for i in range(firstsize+1)]
    
    for row in range(firstsize+1):
        for col in range(secondsize+1):
            if row == 0:
                dptable[row][col] = col
            elif col == 0:
                dptable[row][col] = row
            elif string1[row-1] == string2[col-1]:
                dptable[row][col] = dptable[row-1][col-1]
            else:
                dptable[row][col] = (1 + min(dptable[row][col-1],
                                         dptable[row-1][col],
                                         dptable[row-1][col-1]))
                
    return dptable[firstsize][secondsize]

string1 = input().rstrip()
string2 = input().rstrip()

print(edit_distance(string1, string2, len(string1), len(string2)))
