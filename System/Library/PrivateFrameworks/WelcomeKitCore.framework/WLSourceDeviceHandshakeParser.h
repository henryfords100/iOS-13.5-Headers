/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLSourceDeviceHandshakeParser : NSObject
-(BOOL)parseData:(id)arg1 modifyingSourceDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_parseDeviceInfoNode:(xmlNode*)arg1 modifyingSourceDevice:(id)arg2 ;
-(id)_parseConnectionFailureReasons:(xmlNode*)arg1 ;
@end
