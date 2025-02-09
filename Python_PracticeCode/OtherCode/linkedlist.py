class Node:
    def _init_(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def _init_(self):
        self.head = None

    def insertAtBegin(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        else:
            new_node.next = self.head
            self.head = new_node

    def insertAtEnd(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        current_node = self.head
        while current_node.next:
            current_node = current_node.next
        current_node.next = new_node

    def insertAfter(self, position, data):
        if self.head is None:
            print("The given previous node must inLinkedList.")
            return
        new_node = Node(data)
        new_node.next = position.next
        position.next = new_node

    def insertBefore(self, position, data):
        if self.head is position:
            new_node = Node(data)
            new_node.next = self.head
            self.head = new_node
            return
        prev = Node(data)
        new_node = self.head
        while new_node is not position:
            prev = new_node
            new_node = new_node.next
        new_node = Node(data)
        new_node.next = prev.next
        prev.next = new_node

    def remove_first_node(self):
        if self.head is None:
            return
        self.head = self.head.next
        return

    def remove_last_node(self):
        if self.head is None:
            return
        current_node = self.head
        while current_node.next.next:
            current_node = current_node.next
        current_node.next = None

    def removeAfter(self, data):
        current = self.head
        while current:
            if current.data == data and current.next:
                current.next = current.next.next
                return
            current = current.next

    def removeBefore(self, data):
        if self.head.next.data == data:
            self.head = self.head.next
            return
        current = self.head
        while current.next and current.next.next:
            if current.next.next.data == data:
                current.next = current.next.next
                return
            current = current.next

    def remove_node(self, data):
        current_node = self.head
        while current_node is not None and current_node.next.data is not data:
            current_node = current_node.next
        if current_node is None:
            return
        else:
            current_node.next = current_node.next.next

    def printLL(self):
        current_node = self.head
        while current_node:
            print(current_node.data)
            current_node = current_node.next


llist = LinkedList()

llist.insertAtBegin('a')
llist.insertAtEnd('b')
llist.insertAtBegin('c')
llist.insertAtEnd('d')
llist.insertAtBegin('e')
llist.insertAtEnd('f')

llist.insertBefore(llist.head.next, 'g')
llist.insertAfter(llist.head.next, 'h')

print("node data")
llist.printLL()

llist.remove_node('d')
llist.removeAfter('c')
llist.removeBefore('b')

llist.remove_first_node()
llist.remove_last_node()

print("after removing data")
llist.printLL()
