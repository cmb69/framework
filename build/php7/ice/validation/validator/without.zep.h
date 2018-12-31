
extern zend_class_entry *ice_validation_validator_without_ce;

ZEPHIR_INIT_CLASS(Ice_Validation_Validator_Without);

PHP_METHOD(Ice_Validation_Validator_Without, validate);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ice_validation_validator_without_validate, 0, 2, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ice_validation_validator_without_validate, 0, 2, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, validation, Ice\\Validation, 0)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, field, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, field)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(ice_validation_validator_without_method_entry) {
	PHP_ME(Ice_Validation_Validator_Without, validate, arginfo_ice_validation_validator_without_validate, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
