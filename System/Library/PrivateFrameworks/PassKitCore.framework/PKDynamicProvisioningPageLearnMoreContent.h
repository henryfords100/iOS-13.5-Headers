/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying> {

	NSString* _buttonTitle;
	NSURL* _buttonURL;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _bussinessChatButtonTitle;
	NSString* _bussinesChatIntentName;

}

@property (nonatomic,copy) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSURL * buttonURL;                                //@synthesize buttonURL=_buttonURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * body;                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * bussinessChatButtonTitle;              //@synthesize bussinessChatButtonTitle=_bussinessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * bussinesChatIntentName;                //@synthesize bussinesChatIntentName=_bussinesChatIntentName - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)buttonTitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setButtonTitle:(NSString *)arg1 ;
-(id)initWithDictonary:(id)arg1 ;
-(NSURL *)buttonURL;
-(void)setButtonURL:(NSURL *)arg1 ;
-(NSString *)bussinessChatButtonTitle;
-(void)setBussinessChatButtonTitle:(NSString *)arg1 ;
-(NSString *)bussinesChatIntentName;
-(void)setBussinesChatIntentName:(NSString *)arg1 ;
@end
