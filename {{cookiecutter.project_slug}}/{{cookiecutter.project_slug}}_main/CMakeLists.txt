add_executable ("{{cookiecutter.project_slug}}")

target_sources("{{cookiecutter.project_slug}}" PRIVATE
    "src/{{cookiecutter.project_slug}}_main.cpp")

target_link_libraries("{{cookiecutter.project_slug}}"
    "GSL"
	"{{cookiecutter.project_slug}}_lib")
