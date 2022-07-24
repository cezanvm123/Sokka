from Flags import *
from VirtualBoard.VirtualBoard import *


def setup (): 
    print("setup")

    
    global isVirtual 
    if isVirtual : 
        VirtualBoard() 
        


setup()