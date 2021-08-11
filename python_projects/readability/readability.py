from cs50 import get_string


def main():
    # prompt the user for text
    text = get_string("Text: ")
    total_letters = letter_counter(text)
    total_words = word_counter(text)
    total_sentences = sentence_counter(text)
    average_letters = get_average_letters(total_letters, total_words)
    average_sentences = get_average_sentences(total_sentences, total_words)
    grade_index = round(0.0588 * average_letters - 0.296 * average_sentences - 15.8)
    
    # get grade 
    if grade_index < 1:
        print("Before Grade 1")
    elif grade_index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {grade_index}")
        
        
def letter_counter(text):
    count_letters = 0
    for i in range(len(text)):
        if text[i].isalpha():
            count_letters += 1
    return count_letters
    

def word_counter(text):
    count_words = 0
    for i in range(len(text)):
        if text[i].isspace():
            count_words += 1
    count_words += 1
    return count_words


def sentence_counter(text):
    count_sentences = 0
    for i in range(len(text)):
        if text[i] in ('.', '!', '?'):
            count_sentences += 1
    return count_sentences
    

def get_average_letters(total_letters, total_words):
    return (total_letters / float(total_words)) * 100
    

def get_average_sentences(total_sentences, total_words):
    return float((total_sentences / total_words)) * 100


if __name__ == "__main__":
    main()
