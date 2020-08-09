/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class CKRecord, NSError, NSMutableArray, NSObject, CKDProgressTracker;

@interface CKDRecordDownloadTask : NSObject {

	CKRecord* _record;
	NSError* _error;
	NSMutableArray* _assetsToDownload;
	NSMutableArray* _assetsToDownloadInMemory;
	NSMutableArray* _packageIndexSets;
	NSMutableArray* _assetURLInfosToFillOut;
	NSObject*<OS_dispatch_group> _group;
	CKDProgressTracker* _progressTracker;

}

@property (nonatomic,retain) CKRecord * record;                                      //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetsToDownload;                      //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetsToDownloadInMemory;              //@synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageIndexSets;                      //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetURLInfosToFillOut;                //@synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                     //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;                   //@synthesize progressTracker=_progressTracker - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)setAssetsToDownload:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetsToDownload;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(NSMutableArray *)packageIndexSets;
-(NSMutableArray *)assetsToDownloadInMemory;
-(NSMutableArray *)assetURLInfosToFillOut;
-(void)setPackageIndexSets:(NSMutableArray *)arg1 ;
-(void)setAssetsToDownloadInMemory:(NSMutableArray *)arg1 ;
-(void)setAssetURLInfosToFillOut:(NSMutableArray *)arg1 ;
-(id)initWithRecord:(id)arg1 trackProgress:(BOOL)arg2 assetsToDownload:(id)arg3 assetsToDownloadInMemory:(id)arg4 packageIndexSets:(id)arg5 assetURLInfosToFillOut:(id)arg6 ;
-(void)didDownloadAsset:(id)arg1 error:(id)arg2 ;
-(void)didFillOutURLInfo:(id)arg1 error:(id)arg2 ;
-(void)didCompleteTaskWithError:(id)arg1 ;
@end
