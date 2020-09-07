/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIAddContentToView.h>

@class NSString, NSArray;

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (nonatomic,copy) NSString * contentShelfViewId; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (assign,nonatomic) long long pageNumber; 
@property (nonatomic,copy) NSArray * results; 
+(id)addResultsToContentShelf;
+(id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(long long)pageNumber;
-(void)setResults:(NSArray *)arg1 ;
-(void)setPageNumber:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(NSString *)contentShelfViewId;
-(void)setContentShelfViewId:(NSString *)arg1 ;
@end
