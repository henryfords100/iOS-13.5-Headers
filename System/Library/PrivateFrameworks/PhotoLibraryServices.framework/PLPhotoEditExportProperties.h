/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoEditExportProperties : NSObject {

	long long _baseEXIFOrientation;
	double _baseDuration;
	unsigned long long _imageWidth;
	unsigned long long _imageHeight;

}

@property (nonatomic,readonly) long long baseEXIFOrientation;               //@synthesize baseEXIFOrientation=_baseEXIFOrientation - In the implementation block
@property (nonatomic,readonly) double baseDuration;                         //@synthesize baseDuration=_baseDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 duration:(double)arg4 ;
+(id)exportPropertiesWithImageWidth:(unsigned long long)arg1 imageHeight:(unsigned long long)arg2 exifOrientation:(long long)arg3 ;
-(unsigned long long)imageHeight;
-(unsigned long long)imageWidth;
-(long long)baseEXIFOrientation;
-(double)baseDuration;
@end
