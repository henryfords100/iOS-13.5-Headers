/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon {

	SBApplication* _application;

}
+(BOOL)canGenerateIconsInBackground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tags;
-(void)setBadge:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
-(id)automationID;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(id)descriptionForLocation:(id)arg1 ;
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)possibleUserTapDidCancel;
-(id)iconCategoryDescription;
-(id)iconFileSizeDescription;
-(BOOL)isApplicationIcon;
@end
