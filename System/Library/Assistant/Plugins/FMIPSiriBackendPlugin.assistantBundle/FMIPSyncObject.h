/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMIPSyncableObject;
@class NSString, NSObject;

@interface FMIPSyncObject : NSObject {

	NSString* _anchor;
	NSObject*<FMIPSyncableObject> _object;
	FMIPSyncObject* _nextObject;

}

@property (nonatomic,retain) NSString * anchor;                                 //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSObject*<FMIPSyncableObject> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) FMIPSyncObject * nextObject;                       //@synthesize nextObject=_nextObject - In the implementation block
-(id)description;
-(NSObject*<FMIPSyncableObject>)object;
-(FMIPSyncObject *)nextObject;
-(void)setObject:(NSObject*<FMIPSyncableObject>)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 nextObject:(id)arg2 ;
-(void)setNextObject:(FMIPSyncObject *)arg1 ;
@end
