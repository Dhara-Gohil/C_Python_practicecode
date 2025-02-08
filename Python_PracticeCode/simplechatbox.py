import random

def chatbot_response(user_input):
    """
    Simple rule-based chatbot that responds to user greetings, farewells, and common questions.
    """
    greetings = ["hello", "hi", "hey", "greetings"]
    farewells = ["bye", "goodbye", "see you", "farewell"]
    questions = {
        "how are you": ["I'm doing well, thank you! How can I assist you today?", "I'm great! What can I help you with?"],
        "what is your name": ["I'm ChatBot, your virtual assistant!", "You can call me ChatBot."],
        "what can you do": ["I can chat with you, answer basic questions, and help you get information."],
        "what is the capital of india": ["The capital of India is New Delhi."],
        "who is the prime minister of india": ["The Prime Minister of India is Narendra Modi."],
        "what is the national animal of india": ["The national animal of India is the Bengal Tiger."],
        "what is the national flower of india": ["The national flower of India is the Lotus."],
        "who is the father of the nation": ["Mahatma Gandhi is known as the Father of the Nation in India."]
    }
    
    user_input = user_input.lower()

    if any(greet in user_input for greet in greetings):
        return random.choice(["Hello!", "Hi there!", "Greetings! How can I assist you?"])

    if any(farewell in user_input for farewell in farewells):
        return random.choice(["Goodbye!", "See you later!", "Farewell! Have a great day!"])

    for question, responses in questions.items():
        if question in user_input:
            return random.choice(responses)

    return "I'm sorry, I didn't understand that. Could you please rephrase?"


def main():
    print("ChatBot: Hello! I'm your friendly chatbot. Type 'exit' to end the conversation.")
    print("\nYou can ask me the following questions:")
    print("1. How are you?")
    print("2. What is your name?")
    print("3. What can you do?")
    print("4. What is the capital of India?")
    print("5. Who is the Prime Minister of India?")
    print("6. What is the national animal of India?")
    print("7. What is the national flower of India?")
    print("8. Who is the Father of the Nation?")
    print("\nType your question or greeting below:")

    try:
        while True:
            user_input = input("You: ")
            if user_input.lower() == 'exit':
                print("ChatBot: Goodbye! Have a nice day!")
                break
            response = chatbot_response(user_input)
            print(f"ChatBot: {response}")
    except (EOFError, OSError):
        print("ChatBot: I can't get input in this environment. Please run this script in your local environment for interaction!")


if __name__ == "__main__":
    main()
