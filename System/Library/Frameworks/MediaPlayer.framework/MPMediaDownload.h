/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPMediaDownload : NSObject {

	long long _deviceLibraryID;
	long long _storeItemID;
	long long _downloadReason;
	double _downloadProgress;
	unsigned long long _downloadPausedReason;
	long long _libraryID;
	long long _storeSagaID;

}

@property (assign) long long libraryID;                                            //@synthesize libraryID=_libraryID - In the implementation block
@property (assign) long long storeSagaID;                                          //@synthesize storeSagaID=_storeSagaID - In the implementation block
@property (assign,nonatomic) long long downloadReason;                             //@synthesize downloadReason=_downloadReason - In the implementation block
@property (assign,nonatomic) double downloadProgress;                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadPausedReason;              //@synthesize downloadPausedReason=_downloadPausedReason - In the implementation block
@property (nonatomic,readonly) long long deviceLibraryID;                          //@synthesize deviceLibraryID=_deviceLibraryID - In the implementation block
@property (nonatomic,readonly) long long storeItemID;                              //@synthesize storeItemID=_storeItemID - In the implementation block
+(unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)arg1 ;
+(long long)_downloadReasonFromStoreDownload:(id)arg1 ;
+(id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1 ;
+(id)MPMediaDownloadsFromATAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)libraryID;
-(void)setLibraryID:(long long)arg1 ;
-(long long)storeItemID;
-(long long)storeSagaID;
-(unsigned long long)downloadPausedReason;
-(id)initWithMPStoreDownload:(id)arg1 ;
-(id)initWithATAsset:(id)arg1 ;
-(long long)deviceLibraryID;
-(long long)downloadReason;
-(void)setDownloadReason:(long long)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setDownloadPausedReason:(unsigned long long)arg1 ;
-(void)setStoreSagaID:(long long)arg1 ;
@end

