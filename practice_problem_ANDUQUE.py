grades = [26,49,98,87,62,75]
even_grades = []

def grade_checker():
    for grade in grades:
        if grade%2 == 0:
            even_grades.append(grade)
            
        
grade_checker()
print(even_grades)
print(sum(even_grades))

