/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIUserModeling.h>

@protocol TIUserModelDataStoring;
@class NSArray, NSString, NSMutableDictionary;

@interface TIUserModel : NSObject <TIUserModeling> {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	NSMutableDictionary* _durableCounters;
	NSMutableDictionary* _userModelValuesCollection;
	NSMutableDictionary* _settingsDictionary;
	BOOL _isLoaded;
	double _timeOfLastPersist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * keys; 
-(void)dealloc;
-(NSArray *)keys;
-(void)loadSettings;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(BOOL)persistForDate:(id)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2 ;
-(void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(void)addNumberToTransientCounter:(id)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(void)configureDurableCounterForName:(id)arg1 ;
-(void)configureDurableCounters;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(void)doLoad;
-(id)populateSettingsDictionary;
-(id)dictForPowerLog;
-(id)getValues:(id)arg1 ;
-(int)valueForDurableKey:(id)arg1 ;
@end
