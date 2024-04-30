# Uniform Cost Search
#* done by maintaining a priority queue, in which priority is
#* decided on the basis of the distance of the node from the root

class prioroityQueue(object):
    def __init__(self):
        self.queue = []

    def isEmpty(self):
        return len(self.queue) == 0
    
    def insert(self, node):
        self.queue.append(node)
        self.queue.sort(key=lambda x: x[1])

    def pop(self, index):
        if self.queue:
            return self.queue.pop(index)
    
    def print(self):
        print(self.queue)
    
    def clear(self):
        self.queue.clear()

global open_queue
open_queue = prioroityQueue()
closed = []

graph = [
    ['S','A',1],
    ['S','B',5],
    ['S','C',15],
    ['A','G',10],
    ['B','G',5],
    ['C','G',5]
]

open_queue.insert(['S', 0])
goal = 'G'

def generateChildren(current_position, children):
    # current_position = current_state[0]
    for i in graph:
        if i[0] == current_position and i not in closed:
            class prioroityQueue(object):
    def __init__(self):
        self.queue = []

    def isEmpty(self):
        return len(self.queue) == 0
    
    def insert(self, node):
        self.queue.append(node)
        self.queue.sort(key=lambda x: x[1])

    def pop(self, index):
        if self.queue:
            return self.queue.pop(index)
    
    def print(self):
        print(self.queue)
    
    def clear(self):
        self.queue.clear()

global open_queuechildren.insert([i[1], i[2]])

cost = 0

while (open_queue.isEmpty() != True):
    open_queue.print()
    current_node = open_queue.pop(0)
    print("Current node: ", current_node)
    cost += current_node[1]
    current_position = current_node[0]
    closed.append(current_node)
    if(current_node[0] == goal):
        print("Goal reached with cost: ", cost)
        break
    else:
        open_queue.clear()
        generateChildren(current_position, open_queue)