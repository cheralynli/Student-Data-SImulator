#pragma once
#include <map>
#include <string>
#include <set>
#include <vector>

namespace grade_school {

class school {
    private:
    std::map<int,std::set<std::string>> roster_;
    public:
    void add(const std::string& x,int y);
    std::vector<std::string> grade(int z) const;
    std::map<int, std::vector<std::string>> roster() const;
    
};

}  // namespace grade_school
