from collections import defaultdict

jug1, jug2, jug3, aim = 5,7,11,8

visited = defaultdict(lambda: False)

def waterJugSolver(amt1, amt2, amt3):
    if (amt1 == aim and amt2 == 0 and amt3 == 0) or (amt2 == aim and amt1 == 0 and amt3 == 0) or (amt3 == aim and amt1 == 0 and amt2 == 0):
        print(amt1, amt2, amt3)
        return True

    if visited[(amt1, amt2, amt3)] == False:
        print(amt1, amt2, amt3)

        visited[(amt1, amt2, amt3)] = True

        return (
            waterJugSolver(0, amt2, amt3) 
            or waterJugSolver(amt1, 0, amt3) 
            or waterJugSolver(amt1, amt2, 0) 
            or waterJugSolver(jug1, amt2, amt3) 
            or waterJugSolver(amt1, jug2, amt3) 
            or waterJugSolver(amt1, amt2, jug3) 
            or waterJugSolver(amt1 - min(amt1, (jug2-amt2)), amt2 + min(amt1, (jug2-amt2)), amt3) 
            or waterJugSolver(amt1 - min(amt1, (jug3-amt3)), amt2, amt3 + min(amt1, (jug3-amt3))) 
            or waterJugSolver(amt1 + min(amt2, (jug1-amt1)), amt2 - min(amt2, (jug1-amt1)), amt3) 
            or waterJugSolver(amt1, amt2 - min(amt2, (jug3-amt3)), amt3 + min(amt2, (jug3-amt3))) 
            or waterJugSolver(amt1 + min(amt3, (jug1-amt1)), amt2, amt3 - min(amt3, (jug1-amt1))) 
            or waterJugSolver(amt1, amt2 + min(amt3, (jug2-amt2)), amt3 - min(amt3, (jug2-amt2)))
        )

    else:
        return False

print("Steps: ")

waterJugSolver(0, 0, 0)