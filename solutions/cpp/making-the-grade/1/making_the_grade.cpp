#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> new_arr;
    for(int i=0; i < student_scores.size(); i++){
        new_arr.emplace_back(static_cast<int>(student_scores.at(i)));
    }
    return new_arr;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count = 0;
    for(int i = 0; i < student_scores.size(); i++) {
        if(student_scores.at(i) <= 40) {
            count++;
        }
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int range = highest_score - 40;
    int sigma = range/4;
    std::array<int, 4> lower_bounds;
    lower_bounds[0] = 41;
    for(int i=1; i < 4; i++) {
        lower_bounds[i] = lower_bounds[i-1] + sigma;
    }
    return lower_bounds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> dict;
    for(int i = 0; i < student_names.size(); i++) {
        dict.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return dict;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100){
            return student_names[i];
        }
    }
    return "";
}
