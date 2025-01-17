/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject <NSSecureCoding> {

	_KSTIUserDictionaryEntryValue* _valueToDelete;
	_KSTIUserDictionaryEntryValue* _valueToInsert;

}

@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToDelete;              //@synthesize valueToDelete=_valueToDelete - In the implementation block
@property (nonatomic,retain) _KSTIUserDictionaryEntryValue * valueToInsert;              //@synthesize valueToInsert=_valueToInsert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToDelete;
-(void)setValueToDelete:(_KSTIUserDictionaryEntryValue *)arg1 ;
-(_KSTIUserDictionaryEntryValue *)valueToInsert;
-(void)setValueToInsert:(_KSTIUserDictionaryEntryValue *)arg1 ;
@end

