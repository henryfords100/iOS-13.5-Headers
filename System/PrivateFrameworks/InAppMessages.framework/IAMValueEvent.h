/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/IAMEvent.h>

@protocol NSCopying;
@interface IAMValueEvent : IAMEvent {

	id<NSCopying> value;

}

@property (nonatomic,copy) id<NSCopying> value; 
-(id<NSCopying>)value;
-(void)setValue:(id<NSCopying>)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end
