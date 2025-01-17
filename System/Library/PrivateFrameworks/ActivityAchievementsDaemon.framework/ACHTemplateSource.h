/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACHTemplateSource <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
@optional
-(NSObject*<ACHTemplateSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)customPlaceholderValuesForTemplate:(id)arg1;
-(id)textureFilenameForTemplate:(id)arg1;
-(long long)mobileAssetVersionForTemplate:(id)arg1;

@required
-(NSString *)identifier;
-(BOOL)sourceShouldRunForDate:(id)arg1;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2;
-(id)localizationBundleURLForTemplate:(id)arg1;
-(id)resourceBundleURLForTemplate:(id)arg1;
-(id)propertyListBundleURLForTemplate:(id)arg1;
-(id)stickerBundleURLForTemplate:(id)arg1;
-(long long)runCadence;

@end

