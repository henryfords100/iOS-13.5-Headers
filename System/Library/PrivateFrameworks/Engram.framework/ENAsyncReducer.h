/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CUTResult;

@interface ENAsyncReducer : NSObject {

	NSArray* _input;
	CUTResult* _result;
	/*^block*/id _reducerBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSArray * input;                 //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionBlock;                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id reducerBlock;                   //@synthesize reducerBlock=_reducerBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CUTResult *)result;
-(NSArray *)input;
-(void)setResult:(CUTResult *)arg1 ;
-(id)reducerBlock;
-(void)_completeWithResult:(id)arg1 ;
-(void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setReducerBlock:(id)arg1 ;
-(id)initWithInput:(id)arg1 initialValue:(id)arg2 ;
-(void)reduceWithCompletion:(/*^block*/id)arg1 ;
-(void)setInput:(NSArray *)arg1 ;
@end

