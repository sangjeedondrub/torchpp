#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor = torch::rand({2, 3});
  torch::Tensor result = tensor.multiply(tensor);

  std::cout << "tensor"  << "\n";
  std::cout << tensor << std::endl;
  std::cout << "tensor multiplied"  << "\n";
  std::cout << result << std::endl;

}
