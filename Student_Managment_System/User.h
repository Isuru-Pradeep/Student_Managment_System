#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	String^ password;
	String^ actor;
};

public ref class Student:public User {
public:
	String^ course;
	Student(String^ s) {
		email = s;

	}
	Student() {}
};
