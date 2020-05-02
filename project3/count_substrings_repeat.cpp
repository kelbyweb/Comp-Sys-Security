//
// CPP program to find the occurrences of
// character x in the infinite repeated string
// upto length n
#include <iostream>
#include <vector>


using namespace std;
  
int countOccurences(char *str,
                    string substring)
{
    char *p;
  
    // split the string by spaces in a
    vector<string> a;
  
    p = strtok(str, " ");
    while (p != NULL)
    {
        a.push_back(p);
        p = strtok(NULL, " ");
    }
  
    // search for pattern in a
    int c = 0;
    for (int i = 0; i < a.size(); i++)
  
        // if match found increase count
        if (substring == a[i])
            c++;
    return c;
}
  
// Driver code
int main()
{
    // contents of cipher.txt
    char str[] = "EV KLFGZXSH KMLTWDDUAZWNZTBERSSIXYZWGKTUEHPNZEHPOXTSWZBXVNDUTU FXGTL NXYWYXALJIZSWNGXLPZKUVYUVNGNNGJ PZFVDNKXCLOIYUTYAFYXZEMHXKWGLGAJJUVVIVOLHPOIFHHFBTY TZKZWGMKAIVNAVJYUEHGOHZGO X GXRAGYEZBEZWNVJKWZISINKVCGETUHYXINAJAFWQGXTSSH AZJZXXSSPPFCKGPNZGYAZCVHHRSSWKYMAIHKULVWHLXHGFMMJDFVSZUYNXTWHOLGEZUAZWOHYLXYCUSAFNGG UUKVWHSSHJDUCUKBHSWNGXLPZGFSTAGHKGPNZKLWYX LIKMSHNKULOAXZYVNKULLNSZWGZUGHAPGNAVJGFDEWYZVANKULOAULX EIVDGXJPTUZKMSLCFCEWNUPXTATNKGETUAUPKAXYWLVV KXCRHPOIFGXRAGYEZBEZWGHWGBGMLLNFXGTL NAUCFNXJDTIDVCDUJLM CJLWZBXZAFMGSQZCGUOFNGGYKUVVJZCFAXRFQGXJVH AJULOAXZSLTOMLGET GYIGNAVJFN LKXZLPZGFDEWYZVANKUKJDKGXZWZBT WVLGBXHFQGZGHFVPFWXGYXICLJFZNLJFQA DFOFSESCLL FXGTL NAUCFJGCAXUTUWKRTTLRZSPOFN LWUHXGPOGXGLGYSIQZULOAYZSZZNZELOFVJLWSIJLWJCYMEIOD WZISPIVFXTATNS DGHS DKUULOZULOAULX EIVDSUFWJLXQVUSAFWM WIIEWQZVLPKTVDSUFMXJQXZSTAIBTUEYGK";
    
    // use inputs substring
    string substring;
    cout << "Enter the substring you want to count the frequency of: ";
    cin >> substring;
    
    // output # of occurences of substring
    cout << "\n" << substring << " is repeated " << countOccurences(str, substring)
    << " times." << endl;

    return 0;
}
  
