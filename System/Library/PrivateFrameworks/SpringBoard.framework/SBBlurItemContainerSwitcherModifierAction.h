/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBBlurItemContainerSwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _shouldBlur;
	SBAppLayout* _appLayout;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldBlur;                      //@synthesize shouldBlur=_shouldBlur - In the implementation block
-(id)description;
-(long long)type;
-(SBAppLayout *)appLayout;
-(BOOL)shouldBlur;
-(id)initWithAppLayout:(id)arg1 shouldBlur:(BOOL)arg2 ;
@end

