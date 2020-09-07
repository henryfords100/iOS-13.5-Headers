/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFIconDescriptor;
@class NSString, NSArray;

@interface HFTriggerUISummary : NSObject {

	NSString* _triggerTitle;
	NSString* _triggerDescription;
	unsigned long long _triggerType;
	id<HFIconDescriptor> _triggerIconDescriptor;
	NSArray* _triggerSummaryIconDescriptors;

}

@property (nonatomic,readonly) NSString * triggerTitle;                                 //@synthesize triggerTitle=_triggerTitle - In the implementation block
@property (nonatomic,readonly) NSString * triggerDescription;                           //@synthesize triggerDescription=_triggerDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerType;                          //@synthesize triggerType=_triggerType - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> triggerIconDescriptor;              //@synthesize triggerIconDescriptor=_triggerIconDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * triggerSummaryIconDescriptors;                 //@synthesize triggerSummaryIconDescriptors=_triggerSummaryIconDescriptors - In the implementation block
-(unsigned long long)triggerType;
-(id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3 ;
-(NSString *)triggerTitle;
-(NSString *)triggerDescription;
-(NSArray *)triggerSummaryIconDescriptors;
-(id<HFIconDescriptor>)triggerIconDescriptor;
-(void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(BOOL)arg3 ;
@end
