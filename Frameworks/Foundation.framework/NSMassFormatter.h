/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSMassFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForPersonMassUse;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForPersonMassUse) BOOL forPersonMassUse;              //@synthesize isForPersonMassUse=_isForPersonMassUse - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)stringFromKilograms:(double)arg1 ;
-(long long)targetUnitFromKilograms:(double)arg1 ;
-(id)unitStringFromKilograms:(double)arg1 usedUnit:(long long*)arg2 ;
-(BOOL)isForPersonMassUse;
-(void)setForPersonMassUse:(BOOL)arg1 ;
@end
