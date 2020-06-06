/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NCSizeObservingViewDelegate;
@interface NCSizeObservingView : UIView {

	BOOL _delegateInterestedInSizeChanges;
	id<NCSizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NCSizeObservingViewDelegate>)delegate;
-(void)setDelegate:(id<NCSizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end
