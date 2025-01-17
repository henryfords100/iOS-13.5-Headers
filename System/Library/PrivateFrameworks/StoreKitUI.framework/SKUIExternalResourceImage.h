/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface SKUIExternalResourceImage : NSObject {

	BOOL _alwaysTemplate;
	NSString* _imageName;
	NSBundle* _bundle;

}

@property (nonatomic,copy) NSString * imageName;               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) BOOL alwaysTemplate;              //@synthesize alwaysTemplate=_alwaysTemplate - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(BOOL)alwaysTemplate;
-(void)setAlwaysTemplate:(BOOL)arg1 ;
@end

