import git

print("Cloning GSL...", flush=True, end="")
git.Repo.clone_from("https://github.com/microsoft/GSL.git", "external/gsl")
print("done", flush=True)
print("Cloning Catch2...", flush=True, end="")
git.Repo.clone_from("https://github.com/catchorg/Catch2.git", "external/catch2")
print("done", flush=True)
