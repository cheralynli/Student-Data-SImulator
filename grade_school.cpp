#include "grade_school.h"
#include <map>
#include <string>
#include <set>
#include <vector>

namespace grade_school {

void school::add(const std::string& x,int y){
    roster_[y].insert(x);
}
std::vector<std::string> school::grade(int z) const{
    std::vector<std::string> results;
    auto it = roster_.find(z);
    if(it!=roster_.end()){
        results.assign(it->second.begin(),it ->second.end());
    }
    return results;
}
std::map<int, std::vector<std::string>> school::roster() const{
    std::map<int, std::vector<std::string>> whole_grade;
    for(const auto& [grade,name]: roster_){
        whole_grade[grade].assign(name.begin(),name.end());
    }
    return whole_grade;
}

}  // namespace grade_school
