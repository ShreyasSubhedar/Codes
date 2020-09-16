
## Function 1 - torch.tensor
"""
It returns A torch.Tensor a multi-dimensional matrix containing elements of a single data type.
"""

# Import torch and other required modules
import torch

# Example 1 
w =  torch.randn(10)
x = torch.randn(10)
b = torch.rand(1)
print(w)
print(x)
print(b)

# Example 2 - 

torch.tensor([[1., -1.,45,45,23,234,425], [1., -1.,423235,4232325,223233,23124,42235]])

"""## Function 2 - torch.sigmoid

It returns the sigmoid neuron of given tensor, sigmoid neuron is a popular model of classification in Deep Learning.
"""

# Example 1 
w =  torch.randn(10)
x = torch.randn(10)
b = torch.rand(1)
perceptron = x@w.t()+b        #perceptron model
print(perceptron)
print("Sigmoid for the given perceptron")
print(torch.sigmoid(perceptron))
# Example 2 - 

percetron = torch.tensor([0.0])
print(torch.sigmoid(perceptron))

"""Sigmoid function is widely use for traning the model and parameter, it is heavily used for DNN.

## Function 3 - torch.sin
Returns a new tensor with the sine of the elements of input.
"""

# Example 1 - working

torch.sin(torch.tensor([90.0]))
# Example 2 - working
torch.sin(torch.tensor([1.,0,-1]))*2*3.14/360

"""## Function 4 - torch.take

It is function which extract the tensor from given tensor based on the indices provide.
It take ndim tensor as input and treated as 1 dimentional tensor while indexing.
"""

# Example 1 - working
src = torch.tensor([[4, 3, 5],[6, 7, 8]])
torch.take(src, torch.tensor([0, 2, 5]))
# Example 2 - working
src = torch.tensor([[4, 3, 5],[6, 7, 8],[23,34,34],[1.0,1223,231]])
torch.take(src, torch.tensor([1,2, 2, 5]))

"""## Function 5 - torch.flatten

Flattens a contiguous range of dims in a tensor, means  it converts the n dimentional tensor into 1 tensor.
"""

# Example 1 - working
w= torch.randn(10,10)
print(w)
torch.flatten(w)
# Example 2 - working
isFailed = torch.tensor([[True,False],[True,False],[False,True],[False,True],[True,False]])
print(isFailed)
torch.flatten(isFailed)

"""## Reference Links
Provide links to your references and other interesting articles about tensors
* Official documentation for `torch.Tensor`: https://pytorch.org/docs/stable/tensors.html
"""
