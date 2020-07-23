
# Borrowed from piazza 6.823 lab2

import os

def ffmt(f):
    return str(round(f, 4) * 100) + '%'

results = []

for d in os.listdir('.'):
    if not os.path.isdir(d) or not d.startswith('results_'):
        continue
    name = d[len('results_'):]
    s = 0.0
    n = 0
    mi = 1.0
    ma = 0.0
    for f in os.listdir('./' + d):
        with open('./' + d + '/' + f, 'r') as fil:
            tc, ti, nc, ni = [float(x) for i, x in enumerate(fil.readline().split()) if i % 2 == 1 and i <= 7]
            acc = (tc + nc) / (tc + ti + nc + ni)
            s += acc
            n += 1
            mi = min(mi, acc)
            ma = max(ma, acc)
    avg = s / n
    results.append((name, avg, mi, ma))

name_width = max([len(r[0]) for r in results])
fmt = '{:4} {:>' + str(name_width) + '}   {:6}  {:6}  {:6}'
print(fmt.format('rank', 'name', 'avg', 'min', 'max'))
r = 0
i = 0
prev_a = None
for n, a, mi, ma in sorted(results, key=lambda r: -r[1]):
    i += 1
    if a != prev_a:
        prev_a = a
        r = i
    print(fmt.format(r, n, ffmt(a), ffmt(mi), ffmt(ma)))