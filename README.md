# CMS_v2

CMS stands for Classroom Manage System.
This system is developed by Yuxin Zhou, Nuo Chen, Ke Qin and Yutong Li.
CMS_v2 is only use for SCUT student homework in the 2023-2024 semester.


## Usage

The most simple way to use our Classrooms Manage System is to click the "classManage.exe" in "...\CMS_v2"

All files that are needed for "classManage.exe" have been put into "...\CMS_v2\exefiles"
"...\CMS_v2\code" include all .cpp and .h files and the images for CMS. Images are in "...\CMS_v2\code\qrc"

Add new classroom via administer account before using this manage system.



## Accounts

Administer:

用户名：Zhou
密码： 123456


Other User(用户名、密码):

Chen 123456
Qin 123456
Li 123456



## Functions

1. CMS
	Login: Login to administer/student account using username and password.

	Register: create a new account with username, phone number and password.

	Change Password: Verify your username and phone number. If matched, your password will be changed to new password you entered.
	

2.  Account
	Administer: marked as "SuperUser", is allowed to:
		Add new classroom to the classroom list
		Delete classroom from the classroom list
		Set the schedule
		Inquire the rental status of classrooms

	User: student user, is allowed to:
		Inquire the classroom list
		Inquire the schedule
		Apply to rent classroom
		Return the rented classroom

	We already have 4 accounts, including 1 administer and 3 users. Username and password are shown in: 
	"## Accounts"

	Administer account is set in LoginDialog.cpp, line 119. If you change the password of administer account, please remember to change the password in LoginDialog.cpp as well.


3. classroom
	F3多媒体课室c101
	F3多媒体课室c102
	F3多媒体课室c113
	F3多媒体课室c114
	F3多媒体课室d117
	F3多媒体课室d118
	F3多媒体课室d119
	F3多媒体课室d120

	F3智慧课室a501
	F3智慧课室a502
	F3智慧课室a503
	F3智慧课室b501
	F3智慧课室b502
	F3智慧课室b503


4. filename
	CMS main functions -> (classManage)
	Administer/user -> (SuperUser.cpp  classManage.cpp)
	Login, register and change password -> (login.cpp  regist.cpp ChangePassword.cpp)
	Database operation -> (SqlOperate)

	
## Copyright

Codes released under MIT license. All rights reserved by Yuxin Zhou.