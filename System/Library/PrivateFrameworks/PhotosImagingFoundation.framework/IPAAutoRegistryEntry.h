/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPAAutoRegistryEntry : NSObject {

	BOOL _persistable;
	Class _autoSettingsClass;

}

@property (nonatomic,retain) Class autoSettingsClass;              //@synthesize autoSettingsClass=_autoSettingsClass - In the implementation block
@property (assign,nonatomic) BOOL persistable;                     //@synthesize persistable=_persistable - In the implementation block
-(Class)autoSettingsClass;
-(void)setAutoSettingsClass:(Class)arg1 ;
-(BOOL)persistable;
-(void)setPersistable:(BOOL)arg1 ;
@end

