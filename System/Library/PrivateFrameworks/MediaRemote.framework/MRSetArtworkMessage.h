/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRSetArtworkMessage : MRProtocolMessage

@property (nonatomic,readonly) NSData * artworkData; 
-(unsigned long long)type;
-(NSData *)artworkData;
-(id)initWithArtworkData:(id)arg1 ;
@end

