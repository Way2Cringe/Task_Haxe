// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_DataBase
#include <DataBase.h>
#endif
#ifndef INCLUDED_Task_Haxe
#include <Task_Haxe.h>
#endif
#ifndef INCLUDED_controller_MainController
#include <controller/MainController.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21ecd4f7a8da5c65_11_new,"Task_Haxe","new",0x702b9392,"Task_Haxe.new","Task_Haxe.hx",11,0x02cc841e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ecd4f7a8da5c65_16_startApp,"Task_Haxe","startApp",0x9c8b10ed,"Task_Haxe.startApp","Task_Haxe.hx",16,0x02cc841e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ecd4f7a8da5c65_20_generateAndDeserializeXmls,"Task_Haxe","generateAndDeserializeXmls",0x6c50a327,"Task_Haxe.generateAndDeserializeXmls","Task_Haxe.hx",20,0x02cc841e)

void Task_Haxe_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21ecd4f7a8da5c65_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  14)		this->startApp(this->stage);
            	}

Dynamic Task_Haxe_obj::__CreateEmpty() { return new Task_Haxe_obj; }

void *Task_Haxe_obj::_hx_vtable = 0;

Dynamic Task_Haxe_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Task_Haxe_obj > _hx_result = new Task_Haxe_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Task_Haxe_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			if (inClassId<=(int)0x128a091e) {
				return inClassId==(int)0x11a722e7 || inClassId==(int)0x128a091e;
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x5d6b3c18 || inClassId==(int)0x6b353933;
		}
	}
}

void Task_Haxe_obj::startApp( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_21ecd4f7a8da5c65_16_startApp)
HXLINE(  17)		 ::controller::MainController mainContainer =  ::controller::MainController_obj::__alloc( HX_CTX ,stage);
HXLINE(  18)		mainContainer->Start();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Task_Haxe_obj,startApp,(void))

void Task_Haxe_obj::generateAndDeserializeXmls(){
            	HX_STACKFRAME(&_hx_pos_21ecd4f7a8da5c65_20_generateAndDeserializeXmls)
HXLINE(  21)		::DataBase_obj::FillWithStartingData();
HXLINE(  22)		::DataBase_obj::SaveScreenPageModels();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Task_Haxe_obj,generateAndDeserializeXmls,(void))


::hx::ObjectPtr< Task_Haxe_obj > Task_Haxe_obj::__new() {
	::hx::ObjectPtr< Task_Haxe_obj > __this = new Task_Haxe_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Task_Haxe_obj > Task_Haxe_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Task_Haxe_obj *__this = (Task_Haxe_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Task_Haxe_obj), true, "Task_Haxe"));
	*(void **)__this = Task_Haxe_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Task_Haxe_obj::Task_Haxe_obj()
{
}

::hx::Val Task_Haxe_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"startApp") ) { return ::hx::Val( startApp_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"generateAndDeserializeXmls") ) { return ::hx::Val( generateAndDeserializeXmls_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Task_Haxe_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Task_Haxe_obj_sStaticStorageInfo = 0;
#endif

static ::String Task_Haxe_obj_sMemberFields[] = {
	HX_("startApp",5f,a9,8d,42),
	HX_("generateAndDeserializeXmls",19,40,ac,be),
	::String(null()) };

::hx::Class Task_Haxe_obj::__mClass;

void Task_Haxe_obj::__register()
{
	Task_Haxe_obj _hx_dummy;
	Task_Haxe_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Task_Haxe",a0,22,9a,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Task_Haxe_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Task_Haxe_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Task_Haxe_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Task_Haxe_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

