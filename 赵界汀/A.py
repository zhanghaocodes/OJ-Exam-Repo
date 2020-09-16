def main():
    total_l = int(input())
    journey = list()
    for i in range(total_l):
        L,v,l,r = list(map(int,input().split()))
        journey.append([L,v,l,r])

    for i in journey:
        cnt = 0
        L = i[0]
        v = i[1]
        l = i[2]
        r = i[3]
        for j in range(v,l,v):
            if j%v == 0:
                if j < l or j >r:
                    cnt += 1
        if r%v == 0:
            tmp = v
        else:
            tmp = r%v
        for j in range(r+v-tmp,L+1,v):
            if j%v == 0:
                if j < l or j >r:
                    cnt += 1
        print(cnt)

if __name__ == '__main__':
    main()