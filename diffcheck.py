original, new = None, None
with open("gex64.z64", "rb") as f:
    original = f.read()
with open("rom.z64", "rb") as f:
    new = f.read()

diffFound = False

try:
    for i in range(0, 0x1_000_000, 4):
        oB = original[i:i+4]
        nB = new[i:i+4]
        d = 0
        for j in range(4):
            if oB[j] != nB[j]:
                d += 1
        if d == 4:
            print(f"Major Difference at: {hex(i)}")
            diffFound = True
            break
        elif d > 0:
            print(f"Minor Difference at: {hex(i)}")
            diffFound = True
            break

except:
    print("Error diffing! Maybe file sizes are different?")
    diffFound = True

if not diffFound:
    print("No differences found!")