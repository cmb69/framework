
extern zend_class_entry *ice_i18n_plural_two_ce;

ZEPHIR_INIT_CLASS(Ice_I18n_Plural_Two);

PHP_METHOD(Ice_I18n_Plural_Two, getCategory);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ice_i18n_plural_two_getcategory, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ice_i18n_plural_two_getcategory, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, count)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(ice_i18n_plural_two_method_entry) {
	PHP_ME(Ice_I18n_Plural_Two, getCategory, arginfo_ice_i18n_plural_two_getcategory, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
