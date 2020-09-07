/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSKLayerPool : NSObject {

	NSMutableArray* mLayerPool;
	Class mLayerClass;
	id mLayerDelegate;

}

@property (assign,nonatomic) id layerDelegate; 
@property (assign,nonatomic) Class layerClass; 
-(id)init;
-(void)dealloc;
-(Class)layerClass;
-(id)layerDelegate;
-(id)requestLayerFromPool;
-(void)returnLayerToPool:(id)arg1 ;
-(void)setLayerClass:(Class)arg1 ;
-(void)setLayerDelegate:(id)arg1 ;
@end
