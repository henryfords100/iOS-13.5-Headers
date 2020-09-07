/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPasswordRemoteViewController.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialRemoteViewControllerProtocol.h>

@class NSString;

@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>

@property (assign,nonatomic,__weak) id<SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)passwordServiceViewControllerName;
-(BOOL)_canShowWhileLocked;
-(void)presentExternalPasswordCredentialRemoteViewController;
@end
