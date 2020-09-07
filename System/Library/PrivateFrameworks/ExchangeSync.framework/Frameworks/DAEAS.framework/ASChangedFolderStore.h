/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray;

@interface ASChangedFolderStore : ASItem {

	NSNumber* _status;
	NSString* _syncKey;
	NSArray* _updatedFolders;

}

@property (nonatomic,retain) NSString * syncKey;                    //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,retain) NSArray * updatedFolders;              //@synthesize updatedFolders=_updatedFolders - In the implementation block
@property (nonatomic,retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)syncKey;
-(void)setSyncKey:(NSString *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSArray *)updatedFolders;
-(void)setUpdatedFolders:(NSArray *)arg1 ;
@end
