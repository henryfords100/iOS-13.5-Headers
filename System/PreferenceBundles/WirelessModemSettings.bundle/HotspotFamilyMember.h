/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:04:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HotspotFamilyMember : NSObject {

	int _shareOption;
	NSString* _altDSID;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * altDSID;                  //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int shareOption;                     //@synthesize shareOption=_shareOption - In the implementation block
-(id)init;
-(NSString *)displayName;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setShareOption:(int)arg1 ;
-(id)initWithAltDSID:(id)arg1 displayName:(id)arg2 shareOption:(int)arg3 ;
-(int)shareOption;
@end
