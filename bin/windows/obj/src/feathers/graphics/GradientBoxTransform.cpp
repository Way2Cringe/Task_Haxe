// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_feathers_graphics_GradientBoxTransform
#include <feathers/graphics/GradientBoxTransform.h>
#endif
namespace feathers{
namespace graphics{

::feathers::graphics::GradientBoxTransform GradientBoxTransform_obj::RotateDegrees(Float rotation)
{
	return ::hx::CreateEnum< GradientBoxTransform_obj >(HX_("RotateDegrees",6c,66,9f,48),1,1)->_hx_init(0,rotation);
}

::feathers::graphics::GradientBoxTransform GradientBoxTransform_obj::RotateDegreesAndTranslate(Float rotation,Float tx,Float ty)
{
	return ::hx::CreateEnum< GradientBoxTransform_obj >(HX_("RotateDegreesAndTranslate",03,ce,eb,73),4,3)->_hx_init(0,rotation)->_hx_init(1,tx)->_hx_init(2,ty);
}

::feathers::graphics::GradientBoxTransform GradientBoxTransform_obj::RotateRadians(Float rotation)
{
	return ::hx::CreateEnum< GradientBoxTransform_obj >(HX_("RotateRadians",37,c9,34,35),0,1)->_hx_init(0,rotation);
}

::feathers::graphics::GradientBoxTransform GradientBoxTransform_obj::RotateRadiansAndTranslate(Float rotation,Float tx,Float ty)
{
	return ::hx::CreateEnum< GradientBoxTransform_obj >(HX_("RotateRadiansAndTranslate",4e,b5,af,6b),3,3)->_hx_init(0,rotation)->_hx_init(1,tx)->_hx_init(2,ty);
}

::feathers::graphics::GradientBoxTransform GradientBoxTransform_obj::Translate(Float tx,Float ty)
{
	return ::hx::CreateEnum< GradientBoxTransform_obj >(HX_("Translate",2e,b7,52,eb),2,2)->_hx_init(0,tx)->_hx_init(1,ty);
}

bool GradientBoxTransform_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RotateDegrees",6c,66,9f,48)) { outValue = GradientBoxTransform_obj::RotateDegrees_dyn(); return true; }
	if (inName==HX_("RotateDegreesAndTranslate",03,ce,eb,73)) { outValue = GradientBoxTransform_obj::RotateDegreesAndTranslate_dyn(); return true; }
	if (inName==HX_("RotateRadians",37,c9,34,35)) { outValue = GradientBoxTransform_obj::RotateRadians_dyn(); return true; }
	if (inName==HX_("RotateRadiansAndTranslate",4e,b5,af,6b)) { outValue = GradientBoxTransform_obj::RotateRadiansAndTranslate_dyn(); return true; }
	if (inName==HX_("Translate",2e,b7,52,eb)) { outValue = GradientBoxTransform_obj::Translate_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GradientBoxTransform_obj)

int GradientBoxTransform_obj::__FindIndex(::String inName)
{
	if (inName==HX_("RotateDegrees",6c,66,9f,48)) return 1;
	if (inName==HX_("RotateDegreesAndTranslate",03,ce,eb,73)) return 4;
	if (inName==HX_("RotateRadians",37,c9,34,35)) return 0;
	if (inName==HX_("RotateRadiansAndTranslate",4e,b5,af,6b)) return 3;
	if (inName==HX_("Translate",2e,b7,52,eb)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientBoxTransform_obj,RotateDegrees,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(GradientBoxTransform_obj,RotateDegreesAndTranslate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GradientBoxTransform_obj,RotateRadians,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(GradientBoxTransform_obj,RotateRadiansAndTranslate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(GradientBoxTransform_obj,Translate,return)

int GradientBoxTransform_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("RotateDegrees",6c,66,9f,48)) return 1;
	if (inName==HX_("RotateDegreesAndTranslate",03,ce,eb,73)) return 3;
	if (inName==HX_("RotateRadians",37,c9,34,35)) return 1;
	if (inName==HX_("RotateRadiansAndTranslate",4e,b5,af,6b)) return 3;
	if (inName==HX_("Translate",2e,b7,52,eb)) return 2;
	return super::__FindArgCount(inName);
}

::hx::Val GradientBoxTransform_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RotateDegrees",6c,66,9f,48)) return RotateDegrees_dyn();
	if (inName==HX_("RotateDegreesAndTranslate",03,ce,eb,73)) return RotateDegreesAndTranslate_dyn();
	if (inName==HX_("RotateRadians",37,c9,34,35)) return RotateRadians_dyn();
	if (inName==HX_("RotateRadiansAndTranslate",4e,b5,af,6b)) return RotateRadiansAndTranslate_dyn();
	if (inName==HX_("Translate",2e,b7,52,eb)) return Translate_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String GradientBoxTransform_obj_sStaticFields[] = {
	HX_("RotateRadians",37,c9,34,35),
	HX_("RotateDegrees",6c,66,9f,48),
	HX_("Translate",2e,b7,52,eb),
	HX_("RotateRadiansAndTranslate",4e,b5,af,6b),
	HX_("RotateDegreesAndTranslate",03,ce,eb,73),
	::String(null())
};

::hx::Class GradientBoxTransform_obj::__mClass;

Dynamic __Create_GradientBoxTransform_obj() { return new GradientBoxTransform_obj; }

void GradientBoxTransform_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("feathers.graphics.GradientBoxTransform",96,74,6c,0d), ::hx::TCanCast< GradientBoxTransform_obj >,GradientBoxTransform_obj_sStaticFields,0,
	&__Create_GradientBoxTransform_obj, &__Create,
	&super::__SGetClass(), &CreateGradientBoxTransform_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GradientBoxTransform_obj::__GetStatic;
}

void GradientBoxTransform_obj::__boot()
{
}


} // end namespace feathers
} // end namespace graphics