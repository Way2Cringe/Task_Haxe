// Generated by Haxe 4.3.1
#ifndef INCLUDED_feathers_events_ListViewEvent
#define INCLUDED_feathers_events_ListViewEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(feathers,data,ListViewItemState)
HX_DECLARE_CLASS2(feathers,events,ListViewEvent)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace feathers{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ListViewEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ListViewEvent_obj OBJ_;
		ListViewEvent_obj();

	public:
		enum { _hx_ClassId = 0x3c49fcee };

		void __construct(::String type, ::feathers::data::ListViewItemState state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.events.ListViewEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.events.ListViewEvent"); }
		static ::hx::ObjectPtr< ListViewEvent_obj > __new(::String type, ::feathers::data::ListViewItemState state);
		static ::hx::ObjectPtr< ListViewEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::feathers::data::ListViewItemState state);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListViewEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListViewEvent",17,cf,7d,0a); }

		static void __boot();
		static ::String ITEM_TRIGGER;
		static  ::lime::utils::ObjectPool _pool;
		static bool dispatch(::Dynamic dispatcher,::String type, ::feathers::data::ListViewItemState state);
		static ::Dynamic dispatch_dyn();

		 ::feathers::data::ListViewItemState state;
		 ::openfl::events::Event clone();

};

} // end namespace feathers
} // end namespace events

#endif /* INCLUDED_feathers_events_ListViewEvent */ 
