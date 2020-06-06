/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@class NSMutableDictionary;

@interface PHCollectionListAncestryContext : NSObject {

	id<NSFastEnumeration> _allCollectionLists;
	NSMutableDictionary* _collectionListsByOID;

}

@property (retain) id<NSFastEnumeration> allCollectionLists;                //@synthesize allCollectionLists=_allCollectionLists - In the implementation block
@property (retain) NSMutableDictionary * collectionListsByOID;              //@synthesize collectionListsByOID=_collectionListsByOID - In the implementation block
-(id)folderForID:(id)arg1 ;
-(id)initWithCollectionLists:(id)arg1 ;
-(id<NSFastEnumeration>)allCollectionLists;
-(void)setAllCollectionLists:(id<NSFastEnumeration>)arg1 ;
-(NSMutableDictionary *)collectionListsByOID;
-(void)setCollectionListsByOID:(NSMutableDictionary *)arg1 ;
@end
