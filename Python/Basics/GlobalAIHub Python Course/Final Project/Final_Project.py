class cooking():
    def __init__(self, name):
        self.name=name
    def cook(self):
        print("Cooked! ",self.name)
    def prepare(self):
        print("Ready for the client: ",self.name)

class recipe1(cooking):# chicken
    def __init__(self,name):
        super().__init__(name) # inheritance
    def salt(self):
        print(f"{self.name} is salted")
    def butcher(self):
        print(f"{self.name} is butchered")

class recipe2(cooking):# Soup
    def __init__(self,name):
        super().__init__(name) # inheritance
    def mix_it(self):
        print(f"Yummy, {self.name} is mixed now!")

class recipe3(cooking):# Shavurma
    def __init__(self,name):
        super().__init__(name) # inheritance
    def wrap_it(self):
        print("{} is wrapped".format(self.name))
    def add_piper(self):
        print("Piper is added to {}".format(self.name))

def cook_all(): # Today's menu is shavurma.
    # So we will cook chicken at first
    # And then, shavurma.
    # And, shavurma needs chicken
    print("\n")
    dinner=cooking("Any recipe")
    dinner.cook()
    dinner.prepare()
    print("\n")
    dinner2=recipe1("chicken")
    dinner2.butcher()
    dinner2.salt()
    dinner2.cook()
    dinner2.prepare()
    print("\n")
    dinner3=recipe3("shavurma")
    dinner3.add_piper()
    dinner3.wrap_it() 
    print("No need to cook the shavurma, because the chicken is already cooked.")
    dinner3.prepare()
    print("\n")
    dinner4=recipe2("chicken soup")
    dinner2.butcher()
    dinner4.mix_it() # Mixing with the chicken.
    dinner4.cook()
    dinner4.prepare()
    print("\n")
    
def main():
    cook_all()
if __name__ == "__main__":
    main()
