# A Cookiecutter Template for Simple C++ Projects

I use this template to create simple C++ projects. 

It will include the following packages as submodules:

- `Catch2`: the [Catch2](https://github.com/catchorg/Catch2) test framework.
- `GSL`: the [Microsoft Guideline Support
   Library](https://github.com/microsoft/GSL).

It generates a library and an executable target, as well as a test target.

The generated module includes just enough code to test whether building tests
and the application work.

## Usage

In addition to the cookiecutter package your python environment needs to contain
the [GitPython](https://github.com/gitpython-developers/GitPython) package for
the post install scripts.

```
cookiecutter https://github.com/hoelzl/trivial_cpp_project
```
