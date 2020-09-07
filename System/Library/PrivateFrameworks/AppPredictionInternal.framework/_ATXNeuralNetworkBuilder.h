/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSMutableArray;

@interface _ATXNeuralNetworkBuilder : NSObject {

	unsigned long long _prevSize;
	unsigned long long _nlayers;
	NSMutableData* _descriptors;
	NSMutableArray* _weightsAndBiases;
	BOOL _haveOutputLayer;
	BOOL _done;

}
-(id)init;
-(id)serialize;
-(id)initWithInputSize:(unsigned long long)arg1 ;
-(void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(BOOL)arg5 ;
-(void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(BOOL)arg5 ;
@end
