/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface STKUSSDFilter : NSObject {

	NSArray* _alwaysFilteredPatterns;
	NSArray* _sometimesFilteredPatterns;
	double _lastWarningTime;

}

@property (nonatomic,copy,readonly) NSArray * alwaysFilteredPatterns;                 //@synthesize alwaysFilteredPatterns=_alwaysFilteredPatterns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sometimesFilteredPatterns;              //@synthesize sometimesFilteredPatterns=_sometimesFilteredPatterns - In the implementation block
@property (assign,nonatomic) double lastWarningTime;                                  //@synthesize lastWarningTime=_lastWarningTime - In the implementation block
+(id)cachedExpressions;
-(void)reset;
-(BOOL)shouldFilterString:(id)arg1 coalescable:(BOOL*)arg2 ;
-(id)initWithAlwaysFilteredPatterns:(id)arg1 sometimesFilteredPatterns:(id)arg2 ;
-(NSArray *)alwaysFilteredPatterns;
-(id)_matchesInString:(id)arg1 forPattern:(id)arg2 ;
-(double)lastWarningTime;
-(NSArray *)sometimesFilteredPatterns;
-(void)setLastWarningTime:(double)arg1 ;
@end
