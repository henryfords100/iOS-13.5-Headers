/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray;

@interface PSUICellularUsageContentSpecifiers : NSObject {

	NSArray* _leadingContentSpecifiers;
	NSMutableArray* _appSpecifiers;
	NSArray* _trailingContentSpecifiers;

}

@property (nonatomic,retain) NSArray * leadingContentSpecifiers;               //@synthesize leadingContentSpecifiers=_leadingContentSpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * appSpecifiers;                   //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * trailingContentSpecifiers;              //@synthesize trailingContentSpecifiers=_trailingContentSpecifiers - In the implementation block
-(id)specifiers;
-(NSMutableArray *)appSpecifiers;
-(void)setAppSpecifiers:(NSMutableArray *)arg1 ;
-(NSArray *)leadingContentSpecifiers;
-(void)setLeadingContentSpecifiers:(NSArray *)arg1 ;
-(NSArray *)trailingContentSpecifiers;
-(void)setTrailingContentSpecifiers:(NSArray *)arg1 ;
@end
