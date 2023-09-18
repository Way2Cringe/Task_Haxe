// Generated by Haxe 4.3.1
#ifndef INCLUDED_feathers_layout__VerticalListLayout_VirtualCacheItem
#define INCLUDED_feathers_layout__VerticalListLayout_VirtualCacheItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d301a5546ed4fb9b_1139_new)
HX_DECLARE_CLASS3(feathers,layout,_VerticalListLayout,VirtualCacheItem)

namespace feathers{
namespace layout{
namespace _VerticalListLayout{


class HXCPP_CLASS_ATTRIBUTES VirtualCacheItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VirtualCacheItem_obj OBJ_;
		VirtualCacheItem_obj();

	public:
		enum { _hx_ClassId = 0x2e667c6d };

		void __construct(Float itemWidth, ::Dynamic itemHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.layout._VerticalListLayout.VirtualCacheItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.layout._VerticalListLayout.VirtualCacheItem"); }

		inline static ::hx::ObjectPtr< VirtualCacheItem_obj > __new(Float itemWidth, ::Dynamic itemHeight) {
			::hx::ObjectPtr< VirtualCacheItem_obj > __this = new VirtualCacheItem_obj();
			__this->__construct(itemWidth,itemHeight);
			return __this;
		}

		inline static ::hx::ObjectPtr< VirtualCacheItem_obj > __alloc(::hx::Ctx *_hx_ctx,Float itemWidth, ::Dynamic itemHeight) {
			VirtualCacheItem_obj *__this = (VirtualCacheItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VirtualCacheItem_obj), true, "feathers.layout._VerticalListLayout.VirtualCacheItem"));
			*(void **)__this = VirtualCacheItem_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d301a5546ed4fb9b_1139_new)
HXLINE(1140)		( ( ::feathers::layout::_VerticalListLayout::VirtualCacheItem)(__this) )->itemWidth = itemWidth;
HXLINE(1141)		( ( ::feathers::layout::_VerticalListLayout::VirtualCacheItem)(__this) )->itemHeight = itemHeight;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VirtualCacheItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VirtualCacheItem",0a,59,40,35); }

		Float itemWidth;
		 ::Dynamic itemHeight;
};

} // end namespace feathers
} // end namespace layout
} // end namespace _VerticalListLayout

#endif /* INCLUDED_feathers_layout__VerticalListLayout_VirtualCacheItem */ 