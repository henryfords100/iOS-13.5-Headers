/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject {

	CRCameraReaderOutputInternal* _objectInternal;

}

@property (retain) CRCameraReaderOutputInternal * objectInternal;              //@synthesize objectInternal=_objectInternal - In the implementation block
@property (readonly) NSString * type; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSString * formattedStringValue; 
-(id)init;
-(void)dealloc;
-(NSString *)type;
-(NSString *)stringValue;
-(NSString *)formattedStringValue;
-(void)setObjectInternal:(CRCameraReaderOutputInternal *)arg1 ;
-(CRCameraReaderOutputInternal *)objectInternal;
-(id)initWithImageReaderOutput:(id)arg1 ;
@end

