/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAssetInspectorLoader.h>

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {

	int _figError;
	NSDictionary* _figErrorUserInfo;
	BOOL _statusOfValueForKeyReturnsLoaded;

}
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(Class)_classForTrackInspectors;
-(id)initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(id)initForUnitTests;
@end

