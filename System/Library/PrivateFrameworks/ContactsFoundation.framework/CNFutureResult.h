/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSError;

@interface CNFutureResult : NSObject {

	id _result;
	NSError* _error;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setResult:(id)arg1 error:(id)arg2 ;
@end
