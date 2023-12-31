// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_model_ScreenPageModel
#include <model/ScreenPageModel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19020a9e43ca07e6_7_new,"model.ScreenPageModel","new",0x9648cc5b,"model.ScreenPageModel.new","model/ScreenPageModel.hx",7,0xcd794bb6)
namespace model{

void ScreenPageModel_obj::__construct(int id,::String title,::String content){
            	HX_STACKFRAME(&_hx_pos_19020a9e43ca07e6_7_new)
HXLINE(   8)		this->id = id;
HXLINE(   9)		this->title = title;
HXLINE(  10)		this->content = content;
            	}

Dynamic ScreenPageModel_obj::__CreateEmpty() { return new ScreenPageModel_obj; }

void *ScreenPageModel_obj::_hx_vtable = 0;

Dynamic ScreenPageModel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenPageModel_obj > _hx_result = new ScreenPageModel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ScreenPageModel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x256b3c49;
}


ScreenPageModel_obj::ScreenPageModel_obj()
{
}

void ScreenPageModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenPageModel);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_END_CLASS();
}

void ScreenPageModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(content,"content");
}

::hx::Val ScreenPageModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return ::hx::Val( content ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenPageModel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenPageModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("content",39,8d,77,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenPageModel_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ScreenPageModel_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsString,(int)offsetof(ScreenPageModel_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsString,(int)offsetof(ScreenPageModel_obj,content),HX_("content",39,8d,77,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenPageModel_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenPageModel_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("title",98,15,3b,10),
	HX_("content",39,8d,77,19),
	::String(null()) };

::hx::Class ScreenPageModel_obj::__mClass;

void ScreenPageModel_obj::__register()
{
	ScreenPageModel_obj _hx_dummy;
	ScreenPageModel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("model.ScreenPageModel",e9,02,87,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenPageModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenPageModel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenPageModel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenPageModel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace model
