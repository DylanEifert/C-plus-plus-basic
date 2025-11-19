
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int count_correct_characters(string sentence_to_type, string user_input_sentence,
    int sentence_length);

double calculate_accuracy_percent(double correct_characters, double total_characters);

void show_typing_results(string user_input_sentence, int correct_characters, int
    total_characters, double accuracy_percent, float typing_time_seconds);

void show_debug_info(const float* time_pointer, const float* accuracy_pointer);


int main()
{
    string word = "The quick brown fox jumps over the lazy dog";
    string input;
    int charcount = 43;
    int correctcount;
    int count = 0;
    double acuratepercent;
    float totaltime;
    char key;

    cout << "when you are ready enter y or Y to start:";
    cin >> key;
    while(key == 'y' || key == 'Y')
    {
            time_t start = time(0);
            
           

        cout << endl << "input this sentance as fast as you can:\n"
            << "The quick brown fox jumps over the lazy dog\n";

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        std::getline(std::cin, input);


        time_t end = time(0);
        
        totaltime = end - start;

        correctcount = count_correct_characters(word, input, charcount);

        acuratepercent = calculate_accuracy_percent(correctcount, charcount);




        show_typing_results(input, correctcount, charcount, acuratepercent, totaltime);

        if (acuratepercent == 100)
        {
            cout << endl << "Perfect!" << endl;
        }
        else if (acuratepercent >= 90 && acuratepercent < 100)
        {
            cout << endl << "Excellent speed and precision!" << endl;
        }
        else if (acuratepercent >= 75 && acuratepercent < 90)
        {
            cout << endl << "Good! Just needs more accuracy." << endl;
        }
        else
        {
            cout << endl << "Keep practicing!" << endl;
        }

        double* ptr_acuratepercent = &acuratepercent;
        float* ptr_totaltime = &totaltime;

        cout << "\nshow debug info? (y/n):";
        cin >> key;
        if (key == 'y' || key == 'Y')
        {
            cout << "\ntotaltime @" << ptr_totaltime;
            cout << "\nacuratepercent @" << ptr_acuratepercent << endl;
        }

        cout << endl << "===== CONTINUE? =====" << endl << "(input y for yes):";
        cin >> key;

    }


    cout << endl << "===== CLOSING PROGRAM =====" << endl;
    return 0;
}

int count_correct_characters(string sentence_to_type, string user_input_sentence,
    int sentence_length)
{
    int count = 0;
    int correct_characters = 0;
   
    
    while (sentence_to_type[count] != '\0')
    {
        if (sentence_to_type[count] == user_input_sentence[count])
        {

            correct_characters++;
        }
        count++;
    }

    return correct_characters;

}

double calculate_accuracy_percent(double correct_characters, double total_characters)
{

    double value1;
    double value2;

    value1 = correct_characters / total_characters;
    value2 = value1 * 100;
    


    return value2;


}

void show_typing_results(string user_input_sentence, int correct_characters, int
    total_characters, double accuracy_percent, float typing_time_seconds)
{
    cout << "\nCorrect sentance: The quick brown fox jumps over the lazy dog\n";
    cout << "input sentance: " << user_input_sentence << endl;
    cout << "total characters: " << total_characters << endl;
    cout << "correct characters: " << correct_characters << endl;
    cout << "accuracy percentage: " << accuracy_percent << "%" << endl;
    cout << "time in seconds: " << typing_time_seconds << endl;
    

    

}

void show_debug_info(const float* time_pointer, const float* accuracy_pointer)
{

}