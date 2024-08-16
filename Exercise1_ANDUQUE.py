class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        print(f'AREA = {self.width * self.length} cm')


widthh = int(input("what is the width of the rectangle in cm:"))
lengthh = int(input("what is the length of the rectangle in cm:"))

rec= Rectangle(lengthh,widthh)

rec.area()
