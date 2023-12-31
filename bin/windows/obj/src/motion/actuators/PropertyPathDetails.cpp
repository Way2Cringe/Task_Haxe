// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyPathDetails
#include <motion/actuators/PropertyPathDetails.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ddf240366d596731_251_new,"motion.actuators.PropertyPathDetails","new",0x91c9f08e,"motion.actuators.PropertyPathDetails.new","motion/actuators/MotionPathActuator.hx",251,0x51ab64bc)
namespace motion{
namespace actuators{

void PropertyPathDetails_obj::__construct( ::Dynamic target,::String propertyName,::Dynamic path,::hx::Null< bool >  __o_isField){
            		bool isField = __o_isField.Default(true);
            	HX_STACKFRAME(&_hx_pos_ddf240366d596731_251_new)
HXLINE( 253)		super::__construct(target,propertyName,0,0,isField);
HXLINE( 255)		this->path = path;
            	}

Dynamic PropertyPathDetails_obj::__CreateEmpty() { return new PropertyPathDetails_obj; }

void *PropertyPathDetails_obj::_hx_vtable = 0;

Dynamic PropertyPathDetails_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyPathDetails_obj > _hx_result = new PropertyPathDetails_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool PropertyPathDetails_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x195bbcc4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x195bbcc4;
	} else {
		return inClassId==(int)0x33e9fecd;
	}
}


::hx::ObjectPtr< PropertyPathDetails_obj > PropertyPathDetails_obj::__new( ::Dynamic target,::String propertyName,::Dynamic path,::hx::Null< bool >  __o_isField) {
	::hx::ObjectPtr< PropertyPathDetails_obj > __this = new PropertyPathDetails_obj();
	__this->__construct(target,propertyName,path,__o_isField);
	return __this;
}

::hx::ObjectPtr< PropertyPathDetails_obj > PropertyPathDetails_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::String propertyName,::Dynamic path,::hx::Null< bool >  __o_isField) {
	PropertyPathDetails_obj *__this = (PropertyPathDetails_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyPathDetails_obj), true, "motion.actuators.PropertyPathDetails"));
	*(void **)__this = PropertyPathDetails_obj::_hx_vtable;
	__this->__construct(target,propertyName,path,__o_isField);
	return __this;
}

PropertyPathDetails_obj::PropertyPathDetails_obj()
{
}

void PropertyPathDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyPathDetails);
	HX_MARK_MEMBER_NAME(path,"path");
	 ::motion::actuators::PropertyDetails_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyPathDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	 ::motion::actuators::PropertyDetails_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyPathDetails_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyPathDetails_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyPathDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyPathDetails_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(PropertyPathDetails_obj,path),HX_("path",a5,e5,51,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyPathDetails_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyPathDetails_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	::String(null()) };

::hx::Class PropertyPathDetails_obj::__mClass;

void PropertyPathDetails_obj::__register()
{
	PropertyPathDetails_obj _hx_dummy;
	PropertyPathDetails_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.PropertyPathDetails",9c,51,0f,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyPathDetails_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyPathDetails_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyPathDetails_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyPathDetails_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
