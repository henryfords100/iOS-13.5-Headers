/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class RemoteUIController, SUDescriptor, UINavigationController, UIViewController, RUIStyle, NSString;

@interface PSSoftwareUpdateTermsManager : NSObject <RemoteUIControllerDelegate> {

	RemoteUIController* _termsRemoteUI;
	/*^block*/id _termsCompletion;
	SUDescriptor* _update;
	BOOL _overrideNextRUIAction;
	BOOL _agreeToCombinedTOSInProgress;
	UINavigationController* _showProgressViewController;
	UIViewController* _hostController;
	UIViewController* _presentedViewController;
	RUIStyle* _serverFlowStyle;

}

@property (nonatomic,retain) RUIStyle * serverFlowStyle;              //@synthesize serverFlowStyle=_serverFlowStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)cancelLoadingTerms:(id)arg1 ;
-(void)_presentModalController:(id)arg1 ;
-(void)showLoadingSpinnerViewController;
-(void)_loadRemoteUITermsWithCloudAtURL:(id)arg1 ;
-(void)_loadTermsRemoteUIFailureWithError:(id)arg1 ;
-(void)_loadTermsFromUpdateAsset;
-(void)_finishTermsWithAcceptance:(BOOL)arg1 error:(id)arg2 ;
-(id)versionFromLicenseText:(id)arg1 ;
-(void)_termsDisagree;
-(void)_acceptedTermsFromAsset;
-(void)_handleAgreeFromObjectModel:(id)arg1 ;
-(void)_acceptedTermsVersion:(id)arg1 ;
-(void)presentTermsIfNecessaryForUpdate:(id)arg1 overController:(id)arg2 showLoadSpinner:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(RUIStyle *)serverFlowStyle;
-(void)setServerFlowStyle:(RUIStyle *)arg1 ;
@end

