/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNTestCaseScroll <SNTestCase>
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) unsigned long long scrollDirection; 
@property (readonly,nonatomic) long long numberOfScreens; 
@optional
-(unsigned long long)scrollDirection;
-(long long)numberOfScreens;

@required
-(long long)offset;
-(long long)iterations;
-(id)scrollViewWithContext:(id)arg1;
-(id)scrollViewWithContext:(id)arg1;

@end

