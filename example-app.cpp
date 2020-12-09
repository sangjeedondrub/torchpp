#include <torch/torch.h>
#include <iostream>

using namespace std;

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;
}
