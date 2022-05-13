#include <iostream>
#include <string>
using namespace std;
class INDIA{
  public:
  int no_of_states;
  std::string capital;
  int rank_population;
  std::string prime_minister;
};

struct BHARAT{
  int no_of_states;
  std::string capital;
  int rank_population;
  std::string prime_minister;
};

int main()
{
    INDIA india;
    BHARAT bharat;
    india.no_of_states = 10;
    india.capital = "New Delhi";
    india.rank_population = 2;
    india.prime_minister = "Narendra Modi";
    cout<<"Hello World";

    return 0;
}