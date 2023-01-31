ector<int> gradingStudents(vector<int> grades) {
    for(int i=0; i<grades.size(); i++){
           if(grades[i]>=38){
               int rem = grades[i]%5;
                if(rem>=3){
                    grades[i] = grades[i] + (5 - rem);
                    
                    }
           }
    }
    return grades;
}
