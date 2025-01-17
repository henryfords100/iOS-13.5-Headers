/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition {

	WebVisiblePosition* _webVisiblePosition;

}

@property (nonatomic,retain) WebVisiblePosition * webVisiblePosition;              //@synthesize webVisiblePosition=_webVisiblePosition - In the implementation block
+(id)wrapWebVisiblePosition:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(WebVisiblePosition *)webVisiblePosition;
-(void)setWebVisiblePosition:(WebVisiblePosition *)arg1 ;
@end

