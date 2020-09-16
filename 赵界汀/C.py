def main():
    '''
    Accepted
    '''
    n,m = list(map(int,input().split()))
    songs = list()
    reduce = list()
    for i in range(n):
        a,b = list(map(int,input().split()))
        songs.append([a,b])
        tmp = a-b
        reduce.append(tmp)
    sum = 0
    min = 0
    cnt = 0
    reduce.sort()
    reduce = reduce[::-1]
    for song in songs:
        sum += song[0]
        min += song[1]
    if min > m:
        print(-1)
    else:
        while(sum > m):
            sum -= reduce[cnt]
            cnt += 1
        print(cnt)

if __name__ == '__main__':
    main()