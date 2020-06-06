/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject {

	NSMutableDictionary* _actionsByGroupingIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * actionsByGroupingIdentifier;              //@synthesize actionsByGroupingIdentifier=_actionsByGroupingIdentifier - In the implementation block
-(id)init;
-(void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2 ;
-(void)removeAction:(id)arg1 ;
-(void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2 ;
-(id)actionsForGroupingIdentifier:(id)arg1 ;
-(NSMutableDictionary *)actionsByGroupingIdentifier;
@end
