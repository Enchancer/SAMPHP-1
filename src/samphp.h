#pragma once

#pragma warning(disable: 4244)
#pragma warning(disable: 4800)
#pragma warning(disable: 4355)

#include <sampgdk/a_players.h>
#include <sampgdk/a_samp.h>
#include <sampgdk/a_vehicles.h>
#include <sampgdk/a_objects.h>
#include <sampgdk/core.h>
#include <sampgdk/sdk.h>
#include <sampgdk/version.h>
#include <sampgdk/interop.h>
#include "fakeamx/fakeamx.h"


#define SUCCESS 0
#define FAIL 1
#define SAMPHPVERSION	"2.0.2"

typedef unsigned int php_ret;

class samphp
{
public:
    samphp(bool typeError);
    ~samphp();

    static samphp* instance;
    static samphp* init();
    static void unload();
	

	//START taken from facebook/phpembed. Take a look at their license: https://github.com/facebook/phpembed/blob/master/LICENSE
	bool callBool(char *fn, char *argspec = "", ...);
	zval *call(char *fn, char *argspec, va_list ap TSRMLS_DC);
	php_ret parse_args(zval **params,zend_uint *count, char *argspec, va_list ap);
	static void error_wrap(int error, const char * fmt, ...);
	
	//END taken from facebook/phpembed
	static void internal_error(const char *str);

    bool loadGamemode();

	php_ret status;

protected:
	std::string loadedFile;

};

//void samphp_output_handler(const char *str);
int samphp_output_handler(const char *str, unsigned int str_length TSRMLS_DC);
void samphp_error_handler(char *str);

int php_set_ini_entry(char *entry, char *value, int stage);

// Created by: https://github.com/Zeex/sampgdk/blob/master/plugins/unlimitedfs/unlimitedfs.cpp
std::string GetServerCfgOption(const std::string &option);