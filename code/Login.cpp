#include "Login.h"

Login::Login()
{

}

Login::~Login()
{
}

QString Login::username()
{
    return m_Username;
}

QString Login::password()
{
    return m_Password;
}

bool Login::remember()
{
    return m_Remember;
}
