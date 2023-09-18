// Generated by Haxe 4.3.1
#ifndef INCLUDED_feathers_controls__ListView_ItemRendererStorage
#define INCLUDED_feathers_controls__ListView_ItemRendererStorage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(feathers,controls,_ListView,ItemRendererStorage)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectFactory)
HX_DECLARE_CLASS2(feathers,utils,DisplayObjectRecycler)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace _ListView{


class HXCPP_CLASS_ATTRIBUTES ItemRendererStorage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ItemRendererStorage_obj OBJ_;
		ItemRendererStorage_obj();

	public:
		enum { _hx_ClassId = 0x437b6889 };

		void __construct(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls._ListView.ItemRendererStorage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls._ListView.ItemRendererStorage"); }
		static ::hx::ObjectPtr< ItemRendererStorage_obj > __new(::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		static ::hx::ObjectPtr< ItemRendererStorage_obj > __alloc(::hx::Ctx *_hx_ctx,::String id, ::feathers::utils::DisplayObjectRecycler recycler);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ItemRendererStorage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ItemRendererStorage",45,28,c7,aa); }

		::String id;
		 ::feathers::utils::DisplayObjectRecycler oldItemRendererRecycler;
		 ::feathers::utils::DisplayObjectRecycler itemRendererRecycler;
		::Array< ::Dynamic> activeItemRenderers;
		::Array< ::Dynamic> inactiveItemRenderers;
		 ::feathers::layout::Measurements measurements;
};

} // end namespace feathers
} // end namespace controls
} // end namespace _ListView

#endif /* INCLUDED_feathers_controls__ListView_ItemRendererStorage */ 