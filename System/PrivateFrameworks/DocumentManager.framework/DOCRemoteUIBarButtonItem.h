/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManager/DocumentManager-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying> {

	NSUUID* _uuid;

}

@property (retain) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
@end
