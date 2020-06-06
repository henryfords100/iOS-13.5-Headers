/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWStillImageConditionalRouterConfiguration : NSObject {

	unsigned _numberOfOutputs;
	/*^block*/id _shouldEmitSampleBufferDecisionProvider;
	unsigned _numberOfInputs;

}

@property (nonatomic,readonly) unsigned numberOfInputs;                            //@synthesize numberOfInputs=_numberOfInputs - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOutputs;                           //@synthesize numberOfOutputs=_numberOfOutputs - In the implementation block
@property (nonatomic,copy) id shouldEmitSampleBufferDecisionProvider;              //@synthesize shouldEmitSampleBufferDecisionProvider=_shouldEmitSampleBufferDecisionProvider - In the implementation block
-(void)dealloc;
-(unsigned)numberOfInputs;
-(unsigned)numberOfOutputs;
-(id)initWithNumberOfOutputs:(unsigned)arg1 ;
-(id)shouldEmitSampleBufferDecisionProvider;
-(void)setShouldEmitSampleBufferDecisionProvider:(id)arg1 ;
@end
