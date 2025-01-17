/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVTaskTokenPool;

@interface PVTaskToken : NSObject {

	BOOL _returned;
	PVTaskTokenPool* _pool;
	unsigned long long _tokenId;

}

@property (assign,nonatomic) BOOL returned;                                //@synthesize returned=_returned - In the implementation block
@property (nonatomic,__weak,readonly) PVTaskTokenPool * pool;              //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenId;                 //@synthesize tokenId=_tokenId - In the implementation block
-(void)dealloc;
-(void)returnToPool;
-(PVTaskTokenPool *)pool;
-(void)setReturned:(BOOL)arg1 ;
-(BOOL)returned;
-(id)initWithPool:(id)arg1 tokenId:(unsigned long long)arg2 ;
-(unsigned long long)tokenId;
@end

