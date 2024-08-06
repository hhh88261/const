class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class SinglyLinkedList:
    def __init__(self):
        self.head = None

    # 리스트의 끝에 노드 추가
    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    # 리스트 출력
    def print_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")


# 단일 연결 리스트 생성
sll = SinglyLinkedList()

# 노드 추가
sll.append(1)
sll.append(2)
sll.append(3)

# 리스트 출력
sll.print_list()
