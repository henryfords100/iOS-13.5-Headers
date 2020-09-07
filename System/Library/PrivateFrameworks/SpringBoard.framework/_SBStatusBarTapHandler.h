/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject {

	NSURL* _url;
	/*^block*/id _block;
	_SBStatusBarTapApplicationDestination* _appDestination;
	_SBStatusBarTapApplicationDestination* _applicationDestination;

}

@property (nonatomic,copy,readonly) _SBStatusBarTapApplicationDestination * applicationDestination;              //@synthesize applicationDestination=_applicationDestination - In the implementation block
@property (nonatomic,readonly) BOOL canRequestUnlock; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)handleTap;
-(_SBStatusBarTapApplicationDestination *)applicationDestination;
-(BOOL)canRequestUnlock;
-(id)initWithApplicationDestination:(id)arg1 ;
@end
