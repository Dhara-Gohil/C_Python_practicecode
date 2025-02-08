import os

# In-memory storage for tasks
TASKS = []

def load_tasks():
    """Load tasks from in-memory storage."""
    return TASKS

def save_tasks(tasks):
    """Save tasks to in-memory storage."""
    global TASKS
    TASKS = tasks

def show_tasks(tasks):
    """Display all tasks."""
    if not tasks:
        print("\nYour to-do list is empty!\n")
    else:
        print("\nYour To-Do List:")
        for idx, task in enumerate(tasks, 1):
            print(f"{idx}. {task}")
        print()

def add_task(tasks):
    """Add a new task."""
    task = input("Enter the new task: ").strip()
    if task:
        tasks.append(task)
        save_tasks(tasks)
        print(f"Task '{task}' added!\n")
    else:
        print("Task cannot be empty.\n")

def remove_task(tasks):
    """Remove an existing task."""
    if not tasks:
        print("\nYour to-do list is empty!\n")
        return
    show_tasks(tasks)
    try:
        task_num = int(input("Enter the task number to remove: "))
        if 1 <= task_num <= len(tasks):
            removed_task = tasks.pop(task_num - 1)
            save_tasks(tasks)
            print(f"Task '{removed_task}' removed!\n")
        else:
            print("Invalid task number.\n")
    except ValueError:
        print("Please enter a valid number.\n")

def main():
    tasks = load_tasks()

    while True:
        print("To-Do List App")
        print("1. View Tasks")
        print("2. Add Task")
        print("3. Remove Task")
        print("4. Exit")

        try:
            choice = input("Choose an option (1-4): ").strip()
        except (EOFError, OSError):
            print("\nInput error detected. Exiting the program.")
            break

        if choice == "1":
            show_tasks(tasks)
        elif choice == "2":
            add_task(tasks)
        elif choice == "3":
            remove_task(tasks)
        elif choice == "4":
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Please select 1, 2, 3, or 4.\n")

if __name__ == "__main__":
    main()
