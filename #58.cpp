#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
        virtual void display() = 0; // DO NOTHING F(X)---> PURE VIRTUAL F(X)
};

class CWHVideo: public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl): CWH(s, r){
        videoLength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
    }
};
class CWHText: public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s, r){
        words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"NO. of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();// DIRECT RUN


    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 2.5;
    CWHText djText(title, rating, words);
    // djText.display();// DIRECT RUN

    CWH* tuts[2];// BASE CLASS TYPE POINTER
    tuts[0] = &djvideo;
    tuts[1] = &djText;
    tuts[0]->display();// POINTER RUN
    tuts[1]->display();// POINTER RUN
    return 0;
}
/*
    RULES FOR VIRTUAL F(X)
1) THEY CANNOT BY STATIC
2) THEY ARE ACCESSED BY OBJECT POINTER
3) VIRTUAL F(X) CAN BE A FRIEND OF ANOTHER CLASS
4) A VIRTUAL F(X) IN A BASE CLASS MIGHT NOT BE USED
5) IF A VIRTUAL F(X) DEFINED IN A BASE CLASS , THERE IS NO NECESSITY OF REDIFINING IT IN THE DERIVED CLASS
*/











