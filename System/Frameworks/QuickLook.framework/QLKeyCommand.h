/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIKeyCommand;

@interface QLKeyCommand : NSObject <NSSecureCoding> {

	UIKeyCommand* _keyCommand;
	unsigned long long _keyCommandIdentifier;

}

@property (nonatomic,retain) UIKeyCommand * keyCommand;                  //@synthesize keyCommand=_keyCommand - In the implementation block
@property (assign) unsigned long long keyCommandIdentifier;              //@synthesize keyCommandIdentifier=_keyCommandIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyCommandWithKeyCommand:(id)arg1 identifier:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIKeyCommand *)keyCommand;
-(unsigned long long)keyCommandIdentifier;
-(void)setKeyCommand:(UIKeyCommand *)arg1 ;
-(void)setKeyCommandIdentifier:(unsigned long long)arg1 ;
@end
