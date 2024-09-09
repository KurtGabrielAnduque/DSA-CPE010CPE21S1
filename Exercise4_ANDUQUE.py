animals =['cat', 'dog', 'fish']
adjectives=['lover', 'care', 'kind']

animals.reverse()

for animal in animals:
    for adjective in adjectives:
        print(animal[::-1], adjective[::-1])