/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <BaseBoardUI/BSUIScrollView.h>

@interface SBAppSwitcherScrollView : BSUIScrollView {

	CGPoint _previousContentOffset;
	double _previousScrollTime;
	CGPoint _rawContentOffsetVelocity;

}
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetVelocity;
@end

