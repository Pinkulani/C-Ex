from random import randint

class RandomList():
    def __init__(self):
        pass

    def FillList(self):
        randlist = [""]
        
        for x in range(0,1000):
            x = randint(1,100)
            randlist.append(x)

    def PrintList(self):
        print(randlist)

p = RandomList()
p.FillList()
p.PrintList()