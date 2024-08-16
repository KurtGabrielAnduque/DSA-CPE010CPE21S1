class Shape:
    def __init__(self,height,base,length,width,side):
        self.height = height
        self.base = base
        self.length = length
        self.width = width
        self.side = side
        
class Triangle (Shape):
    def __init__(self, height, base):      
      
        self.base1 = base
        self.height1 = height
        
    def area1(self):
            print(f'AREA of Triangle = {(self.base1 * self.height1)/2}')


class Square (Shape):
    def __init__(self,side):
        self.side1 = side
        
    def area2(self):
       print(f'AREA of square= {self.side1 ** 2} cm')
        
        
class Rectangle(Shape):
     def __init__(self,length,width):
         
         self.length1 = length
         self.width1 = width

     def area3(self):
        print(f'AREA of rectangle = {self.length1 * self.width1} cm')
        
        
        


widthh = int(input("what is the width of the rectangle in cm: "))
lengthh = int(input("what is the length of the rectangle in cm: "))
heightt = int(input("What is the height of the triangle in cm: "))
basee = int(input("What is the base of the triangle in cm: "))
side = int(input("What is the side of the square in cm: "))

rec1= Triangle(lengthh,widthh)
rec2 = Square(side)
rec3 = Rectangle(lengthh,widthh)


print('\n')
print('\n')
rec1.area1()
rec2.area2()
rec3.area3()


            