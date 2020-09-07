/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/ComponentKit-Structs.h>
#import <ComponentKit/CKComponent.h>

@interface CKStackLayoutComponent : CKComponent {

	CKStackLayoutComponentStyle _style;
	vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >* _children;

}
+(id)newRTLCompatibleWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const CKStackLayoutComponentStyle*)arg3 children:(const vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >*)arg4 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 style:(const CKStackLayoutComponentStyle*)arg3 children:(const vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
