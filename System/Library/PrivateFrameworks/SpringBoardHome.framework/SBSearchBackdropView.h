/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIProgressiveBlur.h>

@class MTMaterialView, NSString;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur> {

	MTMaterialView* _materialView;
	BOOL _transitioningToBlur;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(void)completeTransitionSuccessfully:(BOOL)arg1 ;
-(void)prepareForTransitionToBlurred:(BOOL)arg1 ;
-(void)completeIncrementalTransitionSuccessfully:(BOOL)arg1 ;
@end
