#include "{{cookiecutter.project_slug}}.hpp"

#include <iostream>

namespace {{cookiecutter.project_namespace}} {

void print_{{cookiecutter.project_slug}}_info()
{
	std::cout << "Project Info\n\n";
	std::cout << "  name:      {{cookiecutter.project_slug}}\n";
	std::cout << "  namespace: {{cookiecutter.project_namespace}}\n";
}

} // namespace {{cookiecutter.project_namespace}}
