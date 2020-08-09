/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 7:56:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_interface, OS_nw_path_flow_registration, OS_nw_path_flow;
@class NSObject;

@interface nw_interpose_flow : NSObject {

	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_path_flow_registration> _registration;
	NSObject*<OS_nw_path_flow> _flow;
	/*^block*/id _eventHandler;

}
-(void)dealloc;
-(void)close;
-(void)resetFlow:(id)arg1 ;
-(id)initWithInterface:(id)arg1 registration:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
-(void)notifyFlowEvent:(int)arg1 ;
-(void)closeFlow;
-(void)clearFlowEventHandler;
-(BOOL)matchNexusAgent:(unsigned char)arg1 ;
-(BOOL)matchNexusAgentWithFlow:(id)arg1 ;
-(BOOL)matchNexusInstance:(id)arg1 ;
@end
