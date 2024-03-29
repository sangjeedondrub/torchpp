# TorchScript and Libtorch


+ [Intro to torchscript](https://pytorch.org/tutorials/beginner/Intro_to_TorchScript_tutorial.html)
+ [Loading torchscript model in C++](https://pytorch.org/tutorials/advanced/cpp_export.html#)
+ [Torch model and ONNX runtime](https://pytorch.org/tutorials/advanced/super_resolution_with_onnxruntime.html)


# Get started

Install `libtorch`


`pytorch' is formly named `libtorch`

```bash
brew install pytorch
```

You might need to unlink `fmt`

```
brew unlink fmt
```


Install `cmake`

```bash
brew install cmake
```

Including `libtorch` head file

```c++
#include <torch/torch.h>
```


# Build and run

```bash
mkdir build
cd $_
cmake ..
make
```


