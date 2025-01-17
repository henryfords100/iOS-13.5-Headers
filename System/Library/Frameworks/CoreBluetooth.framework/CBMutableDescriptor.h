/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;              //@synthesize ID=_ID - In the implementation block
-(id)description;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(NSNumber *)ID;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(void)setID:(NSNumber *)arg1 ;
@end

