/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTextCheckingResult, NSString;

@interface PRRecordedCorrection : NSObject {

	NSTextCheckingResult* _correctionResult;
	NSString* _correctedString;
	BOOL _hasRecordedResponse;

}

@property (assign) BOOL hasRecordedResponse;              //@synthesize hasRecordedResponse=_hasRecordedResponse - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2 ;
-(id)correctionResult;
-(id)correctedString;
-(BOOL)hasRecordedResponse;
-(void)setHasRecordedResponse:(BOOL)arg1 ;
@end

