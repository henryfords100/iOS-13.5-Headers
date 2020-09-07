/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FLSpecifierTapHandlerDelegate;
@interface FLSpecifierTapHandler : NSObject {

	id<FLSpecifierTapHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FLSpecifierTapHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<FLSpecifierTapHandlerDelegate>)delegate;
-(void)setDelegate:(id<FLSpecifierTapHandlerDelegate>)arg1 ;
-(void)startSpinnerForSpecifier:(id)arg1 ;
-(void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)stopSpinnerForSpecifier:(id)arg1 ;
-(void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end
