/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPeerPermanentInfo, TPPeerStableInfo, TPPeerDynamicInfo, NSData, NSString, NSSet;

@interface TPPeer : NSObject {

	TPPeerPermanentInfo* _permanentInfo;
	TPPeerStableInfo* _stableInfo;
	TPPeerDynamicInfo* _dynamicInfo;
	NSData* _wrappedPrivateKeys;

}

@property (nonatomic,retain) TPPeerPermanentInfo * permanentInfo;              //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,retain) TPPeerStableInfo * stableInfo;                    //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,retain) TPPeerDynamicInfo * dynamicInfo;                  //@synthesize dynamicInfo=_dynamicInfo - In the implementation block
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSData * wrappedPrivateKeys;                      //@synthesize wrappedPrivateKeys=_wrappedPrivateKeys - In the implementation block
@property (nonatomic,readonly) NSSet * trustedPeerIDs; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)peerID;
-(TPPeerPermanentInfo *)permanentInfo;
-(void)setPermanentInfo:(TPPeerPermanentInfo *)arg1 ;
-(TPPeerStableInfo *)stableInfo;
-(void)setStableInfo:(TPPeerStableInfo *)arg1 ;
-(id)initWithPermanentInfo:(id)arg1 ;
-(long long)updateStableInfo:(id)arg1 ;
-(long long)updateDynamicInfo:(id)arg1 ;
-(NSSet *)trustedPeerIDs;
-(TPPeerDynamicInfo *)dynamicInfo;
-(void)setDynamicInfo:(TPPeerDynamicInfo *)arg1 ;
-(NSData *)wrappedPrivateKeys;
-(void)setWrappedPrivateKeys:(NSData *)arg1 ;
@end
