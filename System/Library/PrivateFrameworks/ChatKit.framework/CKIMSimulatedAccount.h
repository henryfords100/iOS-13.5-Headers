/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface CKIMSimulatedAccount : IMAccount {

	IMHandle* _loginHandle;

}

@property (nonatomic,retain) IMHandle * loginHandle;              //@synthesize loginHandle=_loginHandle - In the implementation block
-(void)setLoginHandle:(IMHandle *)arg1 ;
-(IMHandle *)loginHandle;
-(id)loginIMHandle;
@end
