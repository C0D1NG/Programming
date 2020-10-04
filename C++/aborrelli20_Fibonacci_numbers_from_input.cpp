int main() {
  
int n1 = 0;
int n2 = 1;
int i;
int n;

std::cin >> n;

for(i = 0; i < n; i++){ 
  int nn = n1 + n2;
  std::cout << n2 << "\n";
  n1 = n2;
  n2 = nn;
  
}