/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RemoteProcessingBlockServer : NSObject
+(int)registerRPB:(id)arg1 outRPBlockID:(unsigned*)arg2 ;
+(int)unregisterRPB:(unsigned)arg1 ;
+(int)registerItem:(unsigned*)arg1 inRPBlockID:(unsigned)arg2 ;
+(int)unregisterItem:(unsigned)arg1 inRPBlockID:(unsigned)arg2 ;
+(int)propertiesChanged:(unsigned)arg1 inPropertyIDs:(id)arg2 ;
+(int)propertyChanged:(unsigned)arg1 inPropertyID:(unsigned)arg2 ;
+(int)itemPropertyChanged:(unsigned)arg1 inItemID:(unsigned)arg2 inPropertyID:(unsigned)arg3 ;
+(int)itemParameterChanged:(unsigned)arg1 inItemID:(unsigned)arg2 inParmameterID:(unsigned)arg3 inParameterValue:(float)arg4 ;
@end
