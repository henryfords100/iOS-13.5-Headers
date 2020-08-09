/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCSingleTagFeedGroupEmitter.h>

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter {

	BOOL _disableFiltering;
	BOOL _enableSingletonGroups;

}

@property (assign,nonatomic) BOOL disableFiltering;                   //@synthesize disableFiltering=_disableFiltering - In the implementation block
@property (assign,nonatomic) BOOL enableSingletonGroups;              //@synthesize enableSingletonGroups=_enableSingletonGroups - In the implementation block
+(BOOL)canMergeGroupsUnconditionally;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)emitsSingletonGroups;
-(Class)classForGroupEmittingOperation;
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
-(BOOL)enableSingletonGroups;
-(void)setEnableSingletonGroups:(BOOL)arg1 ;
@end
