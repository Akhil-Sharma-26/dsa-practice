import copy 

initial_state = [
3,
[
    [2,0,3],
    [1,8,4],
    [7,6,5]
]]
final_state = [
    [1,2,3],
    [8,0,4],
    [7,6,5]
]

def heuristic(state):
    heuristic = 0
    for i in range(0, 3):
        for j in range(0, 3):
            if(state[i][j] != final_state[i][j]):
                heuristic += 1
    if(heuristic != 0):
        heuristic -= 1
    return heuristic

def generateChildren(current_state, open):
    # first locate the index of the zero
    # then do all the possible moves.
    Zero_index = []
    for i in range(0, 3):
        for j in range(0, 3):
            if (current_state[i][j] == 0):
                Zero_index = [i, j]
    
    # Got the zero index, but now we have to find all the 
    # possible moves
    zero_row = Zero_index[0]
    zero_col = Zero_index[1]
    
    # up
    swap_row = zero_row - 1
    swap_col = zero_col
    if(swap_row in range(0,3) and swap_col in range(0,3)):
        temp_state = copy.deepcopy(current_state)
        temp_state[zero_row][zero_col] = temp_state[swap_row][swap_col] 
        temp_state[swap_row][swap_col] = 0
        if(temp_state not in closed_queue):
            open.append([heuristic(temp_state), temp_state])
        open.sort()

    # down
    swap_row = zero_row + 1
    swap_col = zero_col    
    if(swap_row in range(0,3) and swap_col in range(0,3)):
        temp_state = copy.deepcopy(current_state)
        temp_state[zero_row][zero_col] = temp_state[swap_row][swap_col] 
        temp_state[swap_row][swap_col] = 0
        if(temp_state not in closed_queue):
            open.append([heuristic(temp_state), temp_state])
        open.sort()

    # left 
    swap_row = zero_row
    swap_col = zero_col - 1    
    if(swap_row in range(0,3) and swap_col in range(0,3)):
        temp_state = copy.deepcopy(current_state)
        temp_state[zero_row][zero_col] = temp_state[swap_row][swap_col] 
        temp_state[swap_row][swap_col] = 0
        if(temp_state not in closed_queue):
            open.append([heuristic(temp_state), temp_state])
        open.sort()

    # right
    swap_row = zero_row
    swap_col = zero_col + 1    
    if(swap_row in range(0,3) and swap_col in range(0,3)):
        temp_state = copy.deepcopy(current_state)
        temp_state[zero_row][zero_col] = temp_state[swap_row][swap_col] 
        temp_state[swap_row][swap_col] = 0
        if(temp_state not in closed_queue):
            open.append([heuristic(temp_state), temp_state])
        open.sort()

open_queue = []
closed_queue = []

open_queue.append(initial_state)

while open_queue:
    current_state = open_queue.pop(0)[1]
    print("Current State: ", current_state)
    if(current_state == final_state):
        print("Goal Reached")
        break;
    else:
        generateChildren(current_state, open_queue)
    closed_queue.append(current_state)

# generateChildren(initial_state)