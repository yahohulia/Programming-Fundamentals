// Task 2
enum Names { Andriy, Dmytro, Oksana, Anastasia, Oleksandr, Kateryna};
struct Student
{
	Names name;
	float yearofstudy;
	bool stipend;
};

int main() {


	Student myStudents[7];
	myStudents[0] = { Anastasia, 2, true };
	myStudents[1] = { Oleksandr, 2, true };
	myStudents[2] = { Kateryna, 4, false };
	myStudents[3] = { Dmytro, 2, false };
	myStudents[4] = { Andriy, 1, true };
	myStudents[5] = { Oksana, 3, true };
	myStudents[6].name = Andriy;
	myStudents[6].yearofstudy = 2;
	myStudents[6].stipend = false;

	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		if (myStudents[i].yearofstudy == 2 && myStudents[i].stipend == false)
		{
			count++;
		}
	}
	float percent = (float)count * 100 / 7;

	return 0;
}
