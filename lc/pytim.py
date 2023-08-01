import time

start_time = time.time()
for i in range(100000000):
    pass
end_time = time.time()
duration = (end_time - start_time) * 1000
print(duration)