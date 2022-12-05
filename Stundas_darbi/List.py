brilles = ['Oskars', 'Estere', 'Reinis', 'Rozits']
nebrilles = ['Andris', 'Kristers', 'Ernests']

print(brilles)

print('Cilveku skaits: ', len(brilles))
print('So datu tips: ', type(brilles))
print('Treshais shaja sarakstaa ir: ', brilles[2])

#Ja tu velies no otra gala printet tad
print('No otra gala pirmais ir: ', brilles[-1])

#check if true
print('Vai Reinis ir shaja list?')
if 'Reinis' in brilles:
    print('Ja, Reinis ir shajaa list')

#pievienot jaunu vertibu
brilles.insert(4, 'Skapars')
print('addition: ', brilles[-1])

#izmanot .extend lai pievienotu citu list
brilles.extend(nebrilles)
print('Extended: ', brilles)




"""

    List is a collection which is ordered and changeable. Allows duplicate members.
    Tuple is a collection which is ordered and unchangeable. Allows duplicate members.
    Set is a collection which is unordered, unchangeable*, and unindexed. No duplicate members.
    Dictionary is a collection which is ordered** and changeable. No duplicate members.

"""