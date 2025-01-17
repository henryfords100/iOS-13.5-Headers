/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WFHKGroupingConfiguration : NSObject {

	BOOL _fillMissing;
	long long _groupingOption;
	NSDate* _queryStartDate;
	NSDate* _queryEndDate;

}

@property (assign,nonatomic) long long groupingOption;              //@synthesize groupingOption=_groupingOption - In the implementation block
@property (assign,nonatomic) BOOL fillMissing;                      //@synthesize fillMissing=_fillMissing - In the implementation block
@property (nonatomic,retain) NSDate * queryStartDate;               //@synthesize queryStartDate=_queryStartDate - In the implementation block
@property (nonatomic,retain) NSDate * queryEndDate;                 //@synthesize queryEndDate=_queryEndDate - In the implementation block
-(NSDate *)queryStartDate;
-(void)setQueryStartDate:(NSDate *)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(BOOL)fillMissing;
-(void)setFillMissing:(BOOL)arg1 ;
-(NSDate *)queryEndDate;
-(void)setQueryEndDate:(NSDate *)arg1 ;
@end

