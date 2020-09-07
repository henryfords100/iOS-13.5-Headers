/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/ISURLBagObserver.h>

@class SSMetricsController, NSString;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver> {

	SSMetricsController* _metricsController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)bagDidChange:(id)arg1 ;
-(void)_configureWithBagDictionary:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionFunction:(id)arg1 ;
-(void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3 ;
@end
