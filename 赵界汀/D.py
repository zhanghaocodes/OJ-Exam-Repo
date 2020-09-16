def main():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    d = list()
    for i in range(n):
        if a[i] != 0:
            d.append(-b[i]/a[i])
        else:
            d.append(0)
    max = 0
    for div in d:
        tmp = 0
        for index in range(n):
            if div*a[index]+b[index] == 0:
                tmp += 1
        if tmp > max:
            max = tmp
    print(max)

if __name__ == '__main__':
    main()