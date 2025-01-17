/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBGuidedAccessListener : NSObject {

	BOOL _isGuidedAccessActive;

}

@property (assign,nonatomic) BOOL isGuidedAccessActive;              //@synthesize isGuidedAccessActive=_isGuidedAccessActive - In the implementation block
+(id)sharedGuidedAccessListener;
-(id)init;
-(BOOL)isGuidedAccessActive;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;
-(void)setIsGuidedAccessActive:(BOOL)arg1 ;
@end

