// https://leetcode.com/problems/goal-parser-interpretation/submissions/
// Time complexity: O(n) where n is the length of the input string because
// we run through each element of the input string once
// Space complexity: O(n) where n is the length of the input string because
// the output string could have an upper bound of the input string length i.e. one thousand "G"s

string interpret(string command) {
        //vector<string> chars = ["G", "()", "(al)"];
        string temp = "";
        string output = "";
        for(int i = 0; i < command.length(); i++)
        {
            temp += command[i];
            if(temp == "G"){
                output.append("G");
                temp = "";
            }
            else if(temp == "()"){
                output.append("o");
                temp = "";
            }
            else if(temp == "(al)"){
                output.append("al");
                temp = "";
            }
        }
        return output;
    }