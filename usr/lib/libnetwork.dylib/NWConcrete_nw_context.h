/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_context.h>

@protocol OS_dispatch_workloop;
@class NSObject, NSString;

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {

	NSObject*<OS_dispatch_workloop> workloop;
	char* identifier;
	nw_context_cache* cache;
	nw_context_globals* globals;
	NWConcrete_nw_context* isolated_context;
	os_unfair_lock_s activate_lock;
	unsigned max_cache_entries;
	unsigned target_cache_entries;
	unsigned max_idle_cache_entries;
	int scheduling_mode;
	int privacy_level;
	unsigned isolate_protocol_stack : 1;
	unsigned isolate_protocol_cache : 1;
	unsigned is_implicit : 1;
	unsigned is_isolated_context : 1;
	unsigned activated : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
-(id)initWithIdentifier:(const char*)arg1 ;
@end

