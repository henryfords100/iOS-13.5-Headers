/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextHosting.h>

@protocol INUIExtensionHostContextDelegate;
@class NSString;

@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting> {

	id<INUIExtensionHostContextDelegate> _extensionHostContextDelegate;

}

@property (assign,nonatomic,__weak) id<INUIExtensionHostContextDelegate> extensionHostContextDelegate;              //@synthesize extensionHostContextDelegate=_extensionHostContextDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)requestHandlingOfIntent:(id)arg1 ;
-(void)willBeginEditing;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorHandlingExtensionContextProxy;
-(id<INUIExtensionHostContextDelegate>)extensionHostContextDelegate;
-(void)setExtensionHostContextDelegate:(id<INUIExtensionHostContextDelegate>)arg1 ;
@end
