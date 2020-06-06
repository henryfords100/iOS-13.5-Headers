/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLDebugInstrumentationData;


@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)staticThreadgroupMemoryLength;
-(unsigned)getComputeKernelTelemetryID;
-(MTLDebugInstrumentationData *)debugInstrumentationData;

@end
