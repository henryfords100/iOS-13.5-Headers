/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INPersonResolutionResult.h>

@interface INStartCallContactResolutionResult : INPersonResolutionResult
+(id)unsupportedForReason:(long long)arg1 ;
+(id)confirmationRequiredWithPersonToConfirm:(id)arg1 forReason:(long long)arg2 ;
-(id)initWithPersonResolutionResult:(id)arg1 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1 ;
@end

