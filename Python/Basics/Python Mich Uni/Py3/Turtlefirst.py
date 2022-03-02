import turtle as t
new_window=t.Screen()
new_window.bgcolor("light green")


alex=t.Turtle()
alex.color("blue")
alex.forward(100)
for i in range(1,37,1):
    alex.left(170)
    alex.forward(200)
alex.forward(300)
alex.pensize(3)
for i in range(40):
    alex.right(110)
    alex.forward(100)
    
new_window.exitonclick()
