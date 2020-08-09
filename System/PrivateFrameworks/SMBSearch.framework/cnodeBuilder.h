/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class cNodeRestriction;

@interface cnodeBuilder : NSObject {

	unsigned _ulType;
	unsigned _weight;
	cNodeRestriction* _rootNode;

}

@property (assign) unsigned ulType;                          //@synthesize ulType=_ulType - In the implementation block
@property (assign) unsigned weight;                          //@synthesize weight=_weight - In the implementation block
@property (retain) cNodeRestriction * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(cNodeRestriction *)rootNode;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(void)setRootNode:(cNodeRestriction *)arg1 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)appendRestriction:(id)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
@end
