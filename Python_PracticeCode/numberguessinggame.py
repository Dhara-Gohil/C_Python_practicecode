import random

def number_guessing_game():
    print("Welcome to the Number Guessing Game!")
    print("I have selected a number between 1 and 100. Can you guess it?")

    number_to_guess = random.randint(1, 100)
    attempts = 0

    while True:
        try:
            guess = int(input("Enter your guess: "))
            attempts += 1

            if guess < number_to_guess:
                print("Too low! Try again.")
            elif guess > number_to_guess:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number in {attempts} attempts.")
                play_again = input("Do you want to play again? (yes/no): ").strip().lower()
                if play_again == 'yes':
                    number_guessing_game()
                else:
                    print("Thanks for playing! Goodbye!")
                break
        except ValueError:
            print("Please enter a valid number.")
        except (EOFError, OSError):
            print("Input is not supported in this environment. Please run this script locally.")
            break

if __name__ == "__main__":
    number_guessing_game()
