/*                 TEMPLATES   (FOR DIFFERENT DATATYPES(INT, FLOAT) OF CLASS )
                CLASS --------------> OBJECTS
             TEMPLATE --------------> CLASS
                 |-> (PARAMETERIZED CLASSES)
                 

                 WHY USE TEMPLATES ?
                 -> DRY(DO NOT REPEAT YOURSELF)  
                 -> GENERIC PROGRAMMING (GENERAL)

          ____SYNTAX FOR TEMPLATES
          |    template <class T>
          |    class vector 
          |    {
          |        T*arr;    // T can be int, float, char etc...
TEMPLATE->|        public:
    OR    |            vector(T*arr)
MANY CLASSES|          {
          |              // code
          |            }
          |___  }
                int main(){
                    vector <int> myvec(ptr);
                    vector <float> myfvec(ptr1);
                }
                 */