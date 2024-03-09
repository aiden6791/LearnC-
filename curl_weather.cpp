#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

int main() {
    CURL* curl = curl_easy_init();

    string key = "";
    string city = "";
    string country = "";

    if(curl) {
        string url = "http://api.openweathermap.org/data/2.5/weather?q=" + string(city) + "," + string(country) + "&appid=" + string(key);
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        string response;

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, "");
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        CURLcode res = curl_easy_perform(curl);

        if(res != CURLE_OK) {
            printf("curl_easy_perform() failed : ", curl_easy_strerror(res));
        }  else {
            cout << endl;
        }
        curl_easy_cleanup(curl);
    }
    return 0;
}
