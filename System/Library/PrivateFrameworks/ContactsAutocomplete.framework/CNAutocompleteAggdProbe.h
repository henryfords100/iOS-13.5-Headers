/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteProbe.h>

@class NSString, NSMutableDictionary;

@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe> {

	NSString* _keyPrefix;
	NSMutableDictionary* _setData;
	NSMutableDictionary* _addData;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSMutableDictionary * setData;              //@synthesize setData=_setData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addData;              //@synthesize addData=_addData - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPrefix;                //@synthesize keyPrefix=_keyPrefix - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preparedBundleIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)bundleID;
-(NSString *)keyPrefix;
-(void)sendData;
-(id)initWithKeyPrefix:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSMutableDictionary *)setData;
-(id)fullKey:(id)arg1 ;
-(NSMutableDictionary *)addData;
-(id)initWithKeyPrefix:(id)arg1 ;
-(void)recordSetValue:(id)arg1 forKey:(id)arg2 ;
-(void)recordAddValue:(id)arg1 forKey:(id)arg2 ;
-(void)setSetData:(NSMutableDictionary *)arg1 ;
-(void)setAddData:(NSMutableDictionary *)arg1 ;
@end

