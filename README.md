## Install

1. Clone the repository
```bash
git clone https://github.com/PHBasin/piscine-test.git
```

2. Save the test script as an alias using the command below
```bash
cd piscine-test
```
```
alias ptest="bash $(echo $(pwd)/test.sh)"
```
or
```bash
echo "alias ptest=\"bash $(echo $(pwd)/test.sh)\"" >> ~/.zshrc
```

## How to use

1. Go to your exercises folder
```bash
cd ~/my-project/C00
```

2. Set the folder name as a parameter of the command
```bash
ptest C00
```
