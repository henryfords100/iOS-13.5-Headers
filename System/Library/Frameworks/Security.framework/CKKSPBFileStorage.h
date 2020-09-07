/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKKSPBCodable;
@class NSURL;

@interface CKKSPBFileStorage : NSObject {

	NSURL* _storageFile;
	Class _storageClass;
	id<CKKSPBCodable> _protobufStorage;

}

@property (retain) NSURL * storageFile;                            //@synthesize storageFile=_storageFile - In the implementation block
@property (retain) Class storageClass;                             //@synthesize storageClass=_storageClass - In the implementation block
@property (retain) id<CKKSPBCodable> protobufStorage;              //@synthesize protobufStorage=_protobufStorage - In the implementation block
-(id)storage;
-(id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2 ;
-(void)setStorage:(id)arg1 ;
-(NSURL *)storageFile;
-(void)setStorageFile:(NSURL *)arg1 ;
-(Class)storageClass;
-(void)setStorageClass:(Class)arg1 ;
-(id<CKKSPBCodable>)protobufStorage;
-(void)setProtobufStorage:(id<CKKSPBCodable>)arg1 ;
@end
