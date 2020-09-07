/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMBadInteractionIgnored;

@interface SGErrorMetrics : NSObject {

	SGMBadInteractionIgnored* _badInteractionIgnored;

}

@property (nonatomic,retain) SGMBadInteractionIgnored * badInteractionIgnored;              //@synthesize badInteractionIgnored=_badInteractionIgnored - In the implementation block
+(id)instance;
+(void)recordInteractionIgnoredWithReason:(SGMInteractionIgnoredReason_)arg1 ;
-(id)init;
-(SGMBadInteractionIgnored *)badInteractionIgnored;
-(void)setBadInteractionIgnored:(SGMBadInteractionIgnored *)arg1 ;
@end
