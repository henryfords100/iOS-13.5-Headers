/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitRouteUpdaterDelegate;
@class NSSet;

@interface GEOTransitRouteUpdater : NSObject {

	id<GEOTransitRouteUpdaterDelegate> _delegate;
	BOOL _active;
	NSSet* _requests;

}

@property (assign,nonatomic,__weak) id<GEOTransitRouteUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * requests;                                                  //@synthesize requests=_requests - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                     //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(id<GEOTransitRouteUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOTransitRouteUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSSet *)requests;
-(id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2 ;
-(void)setRequests:(NSSet *)arg1 ;
@end
