/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ComponentKit/ComponentKit-Structs.h>
@class UIView;

@interface CKComponentDelegateForwarder : NSObject {

	vector<SEL *, std::__1::allocator<SEL *> >* _selectors;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)newWithSelectors:(vector<SEL *, std::__1::allocator<SEL *> >*)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)_doNothing;
@end

