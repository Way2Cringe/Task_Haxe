// Generated by Haxe 4.3.1
#ifndef INCLUDED_motion_actuators_IGenericActuator
#define INCLUDED_motion_actuators_IGenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES IGenericActuator_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::Dynamic (::hx::Object :: *_hx_autoVisible)( ::Dynamic value); 
		static inline ::Dynamic autoVisible( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_autoVisible)(value);
		}
		::Dynamic (::hx::Object :: *_hx_delay)(Float duration); 
		static inline ::Dynamic delay( ::Dynamic _hx_,Float duration) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_delay)(duration);
		}
		::Dynamic (::hx::Object :: *_hx_ease)(::Dynamic easing); 
		static inline ::Dynamic ease( ::Dynamic _hx_,::Dynamic easing) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_ease)(easing);
		}
		::Dynamic (::hx::Object :: *_hx_onComplete)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onComplete( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_onComplete)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onRepeat)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onRepeat( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_onRepeat)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onUpdate)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onUpdate( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_onUpdate)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_reflect)( ::Dynamic value); 
		static inline ::Dynamic reflect( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_reflect)(value);
		}
		::Dynamic (::hx::Object :: *_hx_repeat)( ::Dynamic times); 
		static inline ::Dynamic repeat( ::Dynamic _hx_, ::Dynamic times) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_repeat)(times);
		}
		::Dynamic (::hx::Object :: *_hx_reverse)( ::Dynamic value); 
		static inline ::Dynamic reverse( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_reverse)(value);
		}
		::Dynamic (::hx::Object :: *_hx_smartRotation)( ::Dynamic value); 
		static inline ::Dynamic smartRotation( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_smartRotation)(value);
		}
		::Dynamic (::hx::Object :: *_hx_snapping)( ::Dynamic value); 
		static inline ::Dynamic snapping( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_snapping)(value);
		}
		::Dynamic (::hx::Object :: *_hx_onPause)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onPause( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_onPause)(handler,parameters);
		}
		::Dynamic (::hx::Object :: *_hx_onResume)( ::Dynamic handler,::cpp::VirtualArray parameters); 
		static inline ::Dynamic onResume( ::Dynamic _hx_, ::Dynamic handler,::cpp::VirtualArray parameters) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_onResume)(handler,parameters);
		}
		void (::hx::Object :: *_hx_apply)(); 
		static inline void apply( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_apply)();
		}
		void (::hx::Object :: *_hx_move)(); 
		static inline void move( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_move)();
		}
		void (::hx::Object :: *_hx_pause)(); 
		static inline void pause( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_pause)();
		}
		void (::hx::Object :: *_hx_resume)(); 
		static inline void resume( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_resume)();
		}
		void (::hx::Object :: *_hx_stop)( ::Dynamic properties,bool complete,bool sendEvent); 
		static inline void stop( ::Dynamic _hx_, ::Dynamic properties,bool complete,bool sendEvent) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::motion::actuators::IGenericActuator_obj *>(_hx_.mPtr->_hx_getInterface(0x586a3bcb)))->_hx_stop)(properties,complete,sendEvent);
		}
};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_IGenericActuator */ 
