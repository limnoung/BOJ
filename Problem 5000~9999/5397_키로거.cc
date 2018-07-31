#include <iostream>
#include <deque>
using namespace std;
int main()
{
	  int T;
	  scanf("%d",&T);
	  getchar();
	  while (T) {
			deque<char> text;
			char c;
			int index = 0;
			T--;
			while ((c = getchar()) != '\n') {
				  if (c == '<') {
						if (index > 0)
							  index--;
				  }
				  else if (c == '>') {
						if (index < text.size())
							  index++;
				  }
				  else if (c == '-') {
						if (text.size() >= 1 && index>0) {
							  text.erase(text.begin() + index - 1);
							  index--;
						}
				  }
				  else {
						text.insert(text.begin() + index, c);
						index++;
				  }
			}
			for (int i = 0; i < text.size(); i++) {
				  printf("%c", text.at(i));
			}
			printf("\n");
	  }
	  
}