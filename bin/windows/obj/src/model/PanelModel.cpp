// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_model_PanelModel
#include <model/PanelModel.h>
#endif
#ifndef INCLUDED_model_TabModel
#include <model/TabModel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ff3dfcfa34f7085_6_new,"model.PanelModel","new",0x19badcbc,"model.PanelModel.new","model/PanelModel.hx",6,0x0c436193)
namespace model{

void PanelModel_obj::__construct(::Array< ::Dynamic> tabs){
            	HX_STACKFRAME(&_hx_pos_4ff3dfcfa34f7085_6_new)
HXDLIN(   6)		this->tabs = tabs;
            	}

Dynamic PanelModel_obj::__CreateEmpty() { return new PanelModel_obj; }

void *PanelModel_obj::_hx_vtable = 0;

Dynamic PanelModel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PanelModel_obj > _hx_result = new PanelModel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PanelModel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f733822;
}


::hx::ObjectPtr< PanelModel_obj > PanelModel_obj::__new(::Array< ::Dynamic> tabs) {
	::hx::ObjectPtr< PanelModel_obj > __this = new PanelModel_obj();
	__this->__construct(tabs);
	return __this;
}

::hx::ObjectPtr< PanelModel_obj > PanelModel_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> tabs) {
	PanelModel_obj *__this = (PanelModel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PanelModel_obj), true, "model.PanelModel"));
	*(void **)__this = PanelModel_obj::_hx_vtable;
	__this->__construct(tabs);
	return __this;
}

PanelModel_obj::PanelModel_obj()
{
}

void PanelModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PanelModel);
	HX_MARK_MEMBER_NAME(tabs,"tabs");
	HX_MARK_END_CLASS();
}

void PanelModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabs,"tabs");
}

::hx::Val PanelModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return ::hx::Val( tabs ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PanelModel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { tabs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PanelModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabs",7e,b0,f6,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PanelModel_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PanelModel_obj,tabs),HX_("tabs",7e,b0,f6,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PanelModel_obj_sStaticStorageInfo = 0;
#endif

static ::String PanelModel_obj_sMemberFields[] = {
	HX_("tabs",7e,b0,f6,4c),
	::String(null()) };

::hx::Class PanelModel_obj::__mClass;

void PanelModel_obj::__register()
{
	PanelModel_obj _hx_dummy;
	PanelModel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("model.PanelModel",ca,0e,6f,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PanelModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PanelModel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PanelModel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PanelModel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace model
