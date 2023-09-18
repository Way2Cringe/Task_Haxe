// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_feathers_layout__VerticalListLayout_VirtualCacheItem
#include <feathers/layout/_VerticalListLayout/VirtualCacheItem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d301a5546ed4fb9b_1139_new,"feathers.layout._VerticalListLayout.VirtualCacheItem","new",0x4ba4dbd3,"feathers.layout._VerticalListLayout.VirtualCacheItem.new","feathers/layout/VerticalListLayout.hx",1139,0xa03146fa)
namespace feathers{
namespace layout{
namespace _VerticalListLayout{

void VirtualCacheItem_obj::__construct(Float itemWidth, ::Dynamic itemHeight){
            	HX_STACKFRAME(&_hx_pos_d301a5546ed4fb9b_1139_new)
HXLINE(1140)		this->itemWidth = itemWidth;
HXLINE(1141)		this->itemHeight = itemHeight;
            	}

Dynamic VirtualCacheItem_obj::__CreateEmpty() { return new VirtualCacheItem_obj; }

void *VirtualCacheItem_obj::_hx_vtable = 0;

Dynamic VirtualCacheItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VirtualCacheItem_obj > _hx_result = new VirtualCacheItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VirtualCacheItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e667c6d;
}


VirtualCacheItem_obj::VirtualCacheItem_obj()
{
}

void VirtualCacheItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualCacheItem);
	HX_MARK_MEMBER_NAME(itemWidth,"itemWidth");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_END_CLASS();
}

void VirtualCacheItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemWidth,"itemWidth");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
}

::hx::Val VirtualCacheItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { return ::hx::Val( itemWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return ::hx::Val( itemHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VirtualCacheItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemWidth") ) { itemWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualCacheItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("itemWidth",f3,1b,4e,ca));
	outFields->push(HX_("itemHeight",5a,d1,59,f0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VirtualCacheItem_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(VirtualCacheItem_obj,itemWidth),HX_("itemWidth",f3,1b,4e,ca)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VirtualCacheItem_obj,itemHeight),HX_("itemHeight",5a,d1,59,f0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VirtualCacheItem_obj_sStaticStorageInfo = 0;
#endif

static ::String VirtualCacheItem_obj_sMemberFields[] = {
	HX_("itemWidth",f3,1b,4e,ca),
	HX_("itemHeight",5a,d1,59,f0),
	::String(null()) };

::hx::Class VirtualCacheItem_obj::__mClass;

void VirtualCacheItem_obj::__register()
{
	VirtualCacheItem_obj _hx_dummy;
	VirtualCacheItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout._VerticalListLayout.VirtualCacheItem",61,f6,d7,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VirtualCacheItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VirtualCacheItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualCacheItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualCacheItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
} // end namespace _VerticalListLayout