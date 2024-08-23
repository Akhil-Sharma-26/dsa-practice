import numpy as np
import time
import pandas as pd

start_time = time.time()
rows,cols = 100,100
matrix = np.random.randint(0, 100, size=(rows,cols))

np.savetxt("hpc_random_file.csv", matrix, delimiter=",")
matrix = pd.read_csv("hpc_random_file.csv", header=None)
print(matrix.head())
print(time.time() - start_time)