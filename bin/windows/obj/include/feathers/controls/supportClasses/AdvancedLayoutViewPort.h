// Generated by Haxe 4.3.1
#ifndef INCLUDED_feathers_controls_supportClasses_AdvancedLayoutViewPort
#define INCLUDED_feathers_controls_supportClasses_AdvancedLayoutViewPort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_controls_supportClasses_IViewPort
#include <feathers/controls/supportClasses/IViewPort.h>
#endif
HX_DECLARE_CLASS3(feathers,controls,supportClasses,AdvancedLayoutViewPort)
HX_DECLARE_CLASS3(feathers,controls,supportClasses,IViewPort)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,events,ScrollEvent)
HX_DECLARE_CLASS2(feathers,layout,ILayout)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,LayoutBoundsResult)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,utils,Scroller)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace controls{
namespace supportClasses{


class HXCPP_CLASS_ATTRIBUTES AdvancedLayoutViewPort_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef AdvancedLayoutViewPort_obj OBJ_;
		AdvancedLayoutViewPort_obj();

	public:
		enum { _hx_ClassId = 0x2d343e6f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.supportClasses.AdvancedLayoutViewPort")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.supportClasses.AdvancedLayoutViewPort"); }
		static ::hx::ObjectPtr< AdvancedLayoutViewPort_obj > __new();
		static ::hx::ObjectPtr< AdvancedLayoutViewPort_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,AdvancedLayoutViewPort_obj *_hx_obj);
		//~AdvancedLayoutViewPort_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AdvancedLayoutViewPort",b2,26,9f,34); }

		 ::openfl::display::Sprite _viewPortBackground;
		Float _actualMinVisibleWidth;
		 ::Dynamic _explicitMinVisibleWidth;
		 ::Dynamic get_minVisibleWidth();
		::Dynamic get_minVisibleWidth_dyn();

		 ::Dynamic set_minVisibleWidth( ::Dynamic value);
		::Dynamic set_minVisibleWidth_dyn();

		 ::Dynamic _maxVisibleWidth;
		 ::Dynamic get_maxVisibleWidth();
		::Dynamic get_maxVisibleWidth_dyn();

		 ::Dynamic set_maxVisibleWidth( ::Dynamic value);
		::Dynamic set_maxVisibleWidth_dyn();

		Float _actualVisibleWidth;
		 ::Dynamic _explicitVisibleWidth;
		 ::Dynamic get_visibleWidth();
		::Dynamic get_visibleWidth_dyn();

		 ::Dynamic set_visibleWidth( ::Dynamic value);
		::Dynamic set_visibleWidth_dyn();

		Float _actualMinVisibleHeight;
		 ::Dynamic _explicitMinVisibleHeight;
		 ::Dynamic get_minVisibleHeight();
		::Dynamic get_minVisibleHeight_dyn();

		 ::Dynamic set_minVisibleHeight( ::Dynamic value);
		::Dynamic set_minVisibleHeight_dyn();

		 ::Dynamic _maxVisibleHeight;
		 ::Dynamic get_maxVisibleHeight();
		::Dynamic get_maxVisibleHeight_dyn();

		 ::Dynamic set_maxVisibleHeight( ::Dynamic value);
		::Dynamic set_maxVisibleHeight_dyn();

		Float _actualVisibleHeight;
		 ::Dynamic _explicitVisibleHeight;
		 ::Dynamic get_visibleHeight();
		::Dynamic get_visibleHeight_dyn();

		 ::Dynamic set_visibleHeight( ::Dynamic value);
		::Dynamic set_visibleHeight_dyn();

		::Dynamic _layout;
		::Dynamic get_layout();
		::Dynamic get_layout_dyn();

		::Dynamic set_layout(::Dynamic value);
		::Dynamic set_layout_dyn();

		::Array< ::Dynamic> _layoutItems;
		 ::feathers::layout::Measurements _layoutMeasurements;
		 ::feathers::layout::LayoutBoundsResult _layoutResult;
		bool _ignoreLayoutChanges;
		Float _scrollX;
		Float get_scrollX();
		::Dynamic get_scrollX_dyn();

		Float set_scrollX(Float value);
		::Dynamic set_scrollX_dyn();

		Float _scrollY;
		Float get_scrollY();
		::Dynamic get_scrollY_dyn();

		Float set_scrollY(Float value);
		::Dynamic set_scrollY_dyn();

		::Array< Float > _snapPositionsX;
		::Array< Float > get_snapPositionsX();
		::Dynamic get_snapPositionsX_dyn();

		::Array< Float > _snapPositionsY;
		::Array< Float > get_snapPositionsY();
		::Dynamic get_snapPositionsY_dyn();

		 ::feathers::utils::Scroller _scroller;
		 ::feathers::utils::Scroller get_scroller();
		::Dynamic get_scroller_dyn();

		 ::feathers::utils::Scroller set_scroller( ::feathers::utils::Scroller value);
		::Dynamic set_scroller_dyn();

		bool _layoutActive;
		bool _layoutChanged;
		::Dynamic refreshChildren;
		inline ::Dynamic &refreshChildren_dyn() {return refreshChildren; }

		void update();

		void refreshLayout();
		::Dynamic refreshLayout_dyn();

		void refreshLayoutProperties();
		::Dynamic refreshLayoutProperties_dyn();

		void refreshLayoutMeasurements();
		::Dynamic refreshLayoutMeasurements_dyn();

		void handleLayoutResult();
		::Dynamic handleLayoutResult_dyn();

		void advancedLayoutViewPort_layout_changeHandler( ::openfl::events::Event event);
		::Dynamic advancedLayoutViewPort_layout_changeHandler_dyn();

		void advancedLayoutViewPort_layout_scrollHandler( ::feathers::events::ScrollEvent event);
		::Dynamic advancedLayoutViewPort_layout_scrollHandler_dyn();

};

} // end namespace feathers
} // end namespace controls
} // end namespace supportClasses

#endif /* INCLUDED_feathers_controls_supportClasses_AdvancedLayoutViewPort */ 
