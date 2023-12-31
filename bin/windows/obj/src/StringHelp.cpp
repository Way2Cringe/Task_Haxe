// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringHelp
#include <StringHelp.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9a49a17076bfe7f4_9_isFloat,"StringHelp","isFloat",0x77415536,"StringHelp.isFloat","StringHelp.hx",9,0xde4af9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_9a49a17076bfe7f4_19_isInt,"StringHelp","isInt",0x4417a209,"StringHelp.isInt","StringHelp.hx",19,0xde4af9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_9a49a17076bfe7f4_27_isBool,"StringHelp","isBool",0x4bf665d0,"StringHelp.isBool","StringHelp.hx",27,0xde4af9ac)
HX_LOCAL_STACK_FRAME(_hx_pos_9a49a17076bfe7f4_31_toBool,"StringHelp","toBool",0x64490be1,"StringHelp.toBool","StringHelp.hx",31,0xde4af9ac)

void StringHelp_obj::__construct() { }

Dynamic StringHelp_obj::__CreateEmpty() { return new StringHelp_obj; }

void *StringHelp_obj::_hx_vtable = 0;

Dynamic StringHelp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringHelp_obj > _hx_result = new StringHelp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringHelp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x057beb12;
}

bool StringHelp_obj::isFloat(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_9a49a17076bfe7f4_9_isFloat)
HXLINE(  10)		 ::EReg r =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\-?[0-9]+\\.+[0-9]+$",bb,08,9c,8a),HX_("",00,00,00,00));
HXLINE(  11)		return r->match(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringHelp_obj,isFloat,return )

bool StringHelp_obj::isInt(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_9a49a17076bfe7f4_19_isInt)
HXLINE(  20)		 ::EReg r =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\-?[0-9]+$",85,84,86,9c),HX_("",00,00,00,00));
HXLINE(  21)		return r->match(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringHelp_obj,isInt,return )

bool StringHelp_obj::isBool(::String value){
            	HX_STACKFRAME(&_hx_pos_9a49a17076bfe7f4_27_isBool)
HXDLIN(  27)		if ((value.toLowerCase() != HX_("true",4e,a7,03,4d))) {
HXDLIN(  27)			return (value.toLowerCase() == HX_("false",a3,35,4f,fb));
            		}
            		else {
HXDLIN(  27)			return true;
            		}
HXDLIN(  27)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringHelp_obj,isBool,return )

bool StringHelp_obj::toBool(::String value){
            	HX_STACKFRAME(&_hx_pos_9a49a17076bfe7f4_31_toBool)
HXDLIN(  31)		return (value.toLowerCase() == HX_("true",4e,a7,03,4d));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringHelp_obj,toBool,return )


StringHelp_obj::StringHelp_obj()
{
}

bool StringHelp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isInt") ) { outValue = isInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isBool") ) { outValue = isBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toBool") ) { outValue = toBool_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFloat") ) { outValue = isFloat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringHelp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringHelp_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringHelp_obj::__mClass;

static ::String StringHelp_obj_sStaticFields[] = {
	HX_("isFloat",52,69,1c,9f),
	HX_("isInt",25,37,4e,c1),
	HX_("isBool",34,49,82,5e),
	HX_("toBool",45,ef,d4,76),
	::String(null())
};

void StringHelp_obj::__register()
{
	StringHelp_obj _hx_dummy;
	StringHelp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StringHelp",52,c8,b8,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringHelp_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringHelp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringHelp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringHelp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringHelp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

