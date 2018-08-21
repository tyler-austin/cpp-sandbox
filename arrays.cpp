#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
  high_resolution_clock::time_point start = high_resolution_clock::now();
  cout << endl;

  vector<int> test_scores{100, 98, 89};

  cout << "Test Scores using array syntax:" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << endl;
  cout << "Test Scores using vector syntax:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << endl;
  cout << "There are " << test_scores.size() << " scores in the vector" << endl;

  cout << endl;
  cout << "Enter 3 test scores: ";
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  cout << endl;
  cout << "Updated test scores:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << endl;
  cout << "Enter a test score to add to the vector: ";
  int score_to_add{0};
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << endl;
  cout << "Enter one more test score to add to the vector: ";
  cin >> score_to_add;
  test_scores.push_back(score_to_add);

  cout << endl;
  cout << "Test Scores are now:" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;

  cout << endl;
  cout << "There are now " << test_scores.size() << " scores in the vector" << endl;

  // cout << "This should cause an exception!!" << test_scores.at(10) << endl;

  vector<vector<int>> movie_ratings{
      {1, 2, 3, 4},
      {1, 2, 4, 4},
      {1, 3, 4, 5},
  };

  cout << endl;
  cout << "Here are the movie ratings for reviewer #1 using array syntax:" << endl;
  cout << movie_ratings[0][0] << endl;
  cout << movie_ratings[0][1] << endl;
  cout << movie_ratings[0][2] << endl;
  cout << movie_ratings[0][3] << endl;

  cout << endl;
  cout << "Here are the movie ratings for reviewer #1 using vector syntax:" << endl;
  cout << movie_ratings.at(0).at(0) << endl;
  cout << movie_ratings.at(0).at(1) << endl;
  cout << movie_ratings.at(0).at(2) << endl;
  cout << movie_ratings.at(0).at(3) << endl;

  // Clock
  high_resolution_clock::time_point stop = high_resolution_clock::now();
  duration<double> time_span = duration_cast<duration<double>>(stop - start);
  cout << endl;
  cout << "Execution Time: " << time_span.count() << " seconds" << endl;

  return 0;
}