/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(void)_touchDate;
-(void)mergeWithCheckpoint:(id)arg1 ;
@end

