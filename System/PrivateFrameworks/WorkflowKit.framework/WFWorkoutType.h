/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFWorkoutType : NSObject {

	unsigned long long _activityType;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)allTypes;
-(NSString *)name;
-(id)initWithActivityType:(unsigned long long)arg1 ;
-(unsigned long long)activityType;
@end
