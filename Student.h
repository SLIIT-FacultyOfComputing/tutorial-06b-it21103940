class Student {
  private:
    int studentId;
    char studentName[20];
  public:
  void assignDetails(int sId, const char sName[20]);
  void display();
};
