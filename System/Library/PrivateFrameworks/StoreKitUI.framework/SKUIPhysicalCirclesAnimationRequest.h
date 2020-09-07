/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {

	long long _animationType;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)animationType;
-(void)setAnimationType:(long long)arg1 ;
-(void)finishAnimation;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end
