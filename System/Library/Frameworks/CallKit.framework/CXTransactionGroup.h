/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CXTransactionGroup : NSObject {

	NSMutableDictionary* _callSourceIdentifierToTransaction;
	NSMutableArray* _mutableCallSources;

}

@property (nonatomic,readonly) NSMutableDictionary * callSourceIdentifierToTransaction;              //@synthesize callSourceIdentifierToTransaction=_callSourceIdentifierToTransaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableCallSources;                                  //@synthesize mutableCallSources=_mutableCallSources - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy,readonly) NSArray * callSources; 
@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,copy,readonly) NSArray * allActions; 
-(id)init;
-(id)description;
-(BOOL)isComplete;
-(NSArray *)allActions;
-(NSMutableArray *)mutableCallSources;
-(NSArray *)callSources;
-(void)addAction:(id)arg1 forCallSource:(id)arg2 ;
-(id)transactionForCallSource:(id)arg1 ;
-(NSMutableDictionary *)callSourceIdentifierToTransaction;
-(NSArray *)transactions;
@end

