import copy
def go_up(state):
    up_copy = copy.deepcopy(state)
    for i in range(3):
        for j in range(3):
            if state[i][j]==0 and i>0:
                temp = up_copy[i][j]
                up_copy[i][j] = up_copy[i-1][j]
                up_copy[i-1][j] = temp
                return up_copy

def go_down(state):
    down_copy = copy.deepcopy(state)
    for i in range(3):
        for j in range(3):
            if state[i][j]==0 and i<2:
                temp = down_copy[i][j]
                down_copy[i][j] = down_copy[i+1][j]
                down_copy[i+1][j] = temp
                return down_copy

def go_right(state):
    rgh_copy = copy.deepcopy(state)
    for i in range(3):
        for j in range(3):
            if state[i][j]==0 and j<2:
                temp = rgh_copy[i][j]
                rgh_copy[i][j] = rgh_copy[i][j+1]
                rgh_copy[i][j+1] = temp
                return rgh_copy

def go_left(state):
    lft_copy = copy.deepcopy(state)
    for i in range(3):
        for j in range(3):
            if state[i][j]==0 and j>0:
                temp = lft_copy[i][j]
                lft_copy[i][j] = lft_copy[i][j-1]
                lft_copy[i][j-1] = temp
                return lft_copy

def eight_puzzle(state):
    visited = []
    queue = [state]
    print("goal_state: ",goal_state)
    while queue:
        new_state = queue.pop(0)
        if new_state == goal_state:
            return new_state
        
        print(new_state,'\n')
        moves = [go_up(new_state), go_right(new_state), go_left(new_state), go_down(new_state)]
        for it in moves:
            if it is not None and it not in visited:
                queue.append(it)
                visited.append(new_state)
        # queue.append(new_state)
    return None
# oppoosite = {
#     'D' : 'U',
#     'R' : 'L',
#     'L' : 'R',
#     'U' : 'D'
# }
init_state = [[1,2,3],[8,0,4],[7,6,5]]
goal_state = [[2,8,1],[0,4,3],[7,6,5]]

# anew_copy = copy.copy(init_state)
# print(go_left(init_state))
# print(go_right(init_state))
# print(go_up(init_state))
# print(go_down(init_state))

reached_state = eight_puzzle(init_state)
print(reached_state)





