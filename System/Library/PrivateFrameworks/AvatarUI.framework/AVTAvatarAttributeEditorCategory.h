/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTPresetResourcesProviding.h>

@class NSArray, NSString, AVTCoreModelGroup;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding> {

	NSArray* _sections;
	NSString* _localizedName;
	AVTCoreModelGroup* _modelGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * sections;                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;               //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) AVTCoreModelGroup * modelGroup;              //@synthesize modelGroup=_modelGroup - In the implementation block
-(NSString *)description;
-(NSString *)localizedName;
-(NSArray *)sections;
-(id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3 ;
-(AVTCoreModelGroup *)modelGroup;
-(id)representedAVTPresetResources;
@end
