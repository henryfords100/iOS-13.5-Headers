/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSError;

@interface HKStateMachinePendingEvent : NSObject {

	long long _event;
	NSDate* _date;
	NSError* _error;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(NSDate *)date;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end
