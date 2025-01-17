/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface WBSRecentlyUsedAutoFillSet : NSObject {

	NSArray* _fillMatches;
	NSArray* _skipMatches;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * skipMatches;              //@synthesize skipMatches=_skipMatches - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(NSArray *)fillMatches;
-(id)initWithFillMatches:(id)arg1 skipMatches:(id)arg2 label:(id)arg3 ;
-(NSArray *)skipMatches;
@end

