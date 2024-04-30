# Depth Limited Search 
#* Similar to the DFS, also uses a stack but the differnnces lies
#* it reduces the size of the tree by the given depth, d.

import copy 
intial_state = [[[2], [1, 3], []], 0]
final_state = [[[], [], [1, 2, 3]], 0]
depth_limit = 6

open = []
closed = []

def generate_children(state, childrens):
    depth = state[1]
    global depth_limit, closed
    if(depth < depth_limit):
        for i in state[0]:
            if i:
                appender = i[-1]
                for j in range(0, len(state[0])):
                    state_copy = copy.deepcopy(state[0])
                    state_copy[state_copy.index(i)].remove(appender)
                    state_copy[j].append(appender)
                    if(state_copy != state[0] and state_copy not in closed):
                        childrens.append([state_copy, depth+1])

open.append(intial_state)

counts = 0

while open:
    counts += 1
    current_state = open.pop(-1)
    print(current_state)
    if(current_state[0] == final_state[0]):
        print("goal reached")
        break
    else:
        generate_children(current_state, open)
    closed.append(current_state[0])

print(counts)