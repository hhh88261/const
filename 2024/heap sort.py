def heapify(arr, n, i):
    largest = i  # 부모 노드
    left = 2 * i + 1  # 왼쪽 
    right = 2 * i + 2  # 오른쪽 

    if left < n and arr[i] < arr[left]:
        largest = left

    if right < n and arr[largest] < arr[right]:
        largest = right

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]  
        heapify(arr, n, largest)  

def heap_sort(arr):
    n = len(arr)

    # 최대 힙 
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i] 
        heapify(arr, i, 0)  

arr = [64, 34, 25, 12, 22, 11, 90]
heap_sort(arr)
print("힙 정렬 결과:", arr)
