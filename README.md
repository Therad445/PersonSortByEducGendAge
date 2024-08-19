# PersonSorter
This simple C++ program allows the creation of sorted objects by sorting by education, gender, and age. The project demonstrated my basic knowledge of using user data structures, STL containers and sorting algorithms
![2022-03-21_14-39-19](https://user-images.githubusercontent.com/59477654/159255774-c0de1a60-eaab-46ef-9d23-59c2ba343f46.png)
## Description
The project is a program that sorts a list of people (`Person`) according to the following criteria:1. Level of education (`Education`).2. Gender (`Gender`).3. Age (`Age`).
Sorting occurs in descending order of education level, then by gender, and finally by age.
## Project structure
- **main.cpp **: The main program file containing the entry point and usage examples.- **Person.h**: Header file containing the definition of the `Person` structure and enumerations for education levels and gender.- **Person.cpp **: A file with the implementation of the methods of the `Person` structure.
## Data structure
```cppstruct Person {    std::string name;    Education education;    Gender gender;    int age;};```
- **name**: The name of the person (string).- **education**: The level of education (enumeration `Education`).- **gender**: Gender (enumeration of `Gender').- **age**: Age (integer).
### Transfers
```cppenum class Education {    HighSchool,    Bachelor,    Master,    PhD};
enum class Gender {    Male,    Female,    Other};
```
## Usage
To use the program, follow these steps:
1. Clone the repository:
   ```bash   git clone https://github.com/Therad445/PersonSortByEducGendAge.git   ```
2. Compile the program:
``bash g++ main.cpp Person.cpp -o PersonSort ``
3. Run the executable file:
   ```bash   ./PersonSort   ```
## Usage example
An example of a list of people and a call to the sorting function:
```cppstd::vector<Person> people = {    {"Alice", Education::Master, Gender::Female, 30},    {"Bob", Education::Bachelor, Gender::Male, 22}, {"Charlie", Education::PhD, Gender::Other, 35}, // add more people};
sortPeople(people);
for (const auto& person : people) {    std::cout << person.name << " - " << person.age << " years old\n";}
```
## License
This project is distributed under the MIT license. See the [LICENSE](LICENSE) file for more information.
## Author
- [Therad445](https://github.com/Therad445)
