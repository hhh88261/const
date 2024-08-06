class DNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    # 리스트의 끝에 노드 추가
    def append(self, data):
        new_node = DNode(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node
        new_node.prev = last_node

    # 리스트 출력 (정방향)
    def print_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" <-> ")
            current_node = current_node.next
        print("None")

# 양방향 연결 리스트 생성
dll = DoublyLinkedList()

# 노드 추가
dll.append(1)
dll.append(2)
dll.append(3)

# 리스트 출력
dll.print_list()

