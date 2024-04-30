import copy 
intial_state = [[1], [2, 3], []]
final_state = [[], [], [1, 2, 3]]

open = []
closed = []

def generate_children(state, childrens):
    for i in state:
        if i:   
            appender = i[-1]
            for j in range(0, len(state)):
                
                state_copy = copy.deepcopy(state)
                state_copy[state_copy.index(i)].remove(appender)
                state_copy[j].append(appender)
                
                #* this one is for eleminating the elements which are same 
                #* as of the initial_state
                if(state_copy != state):
                    childrens.append(state_copy)

    return childrens
            
open = []
closed = []

open.append(intial_state)
counts = 0

while open:
    counts += 1
    state = open.pop(-1)
    print(state, " ")
    if(state == final_state):
        print("Goal reached")
        break
    if state not in closed:
        generate_children(state, open)
    closed.append(state)

print(counts)