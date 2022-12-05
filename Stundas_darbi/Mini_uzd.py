brilles = ['Oskar', 'Estere', 'Reini', 'Rozit']

inp = input('Kadu loop? ')

def forl():
    print('For loop: ')
    for x in brilles:
        print('Labrit,', x,'!')

def whilel():
    print('While loop: ')
    i = 0
    while i < len(brilles):
        print('Labrit, ',brilles[i],'!')
        i = i + 1


        
if inp == 'for':
    forl()

elif inp == 'while':
    whilel()






