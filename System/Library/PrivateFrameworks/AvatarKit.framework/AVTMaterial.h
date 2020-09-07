/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject {

	UIColor* baseColor;
	NSDictionary* secondaryColors;

}

@property (retain) UIColor * baseColor; 
@property (retain) NSDictionary * secondaryColors; 
+(id)materialWithColor:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(UIColor *)baseColor;
-(void)applyToSceneKitMaterial:(id)arg1 ;
-(NSDictionary *)secondaryColors;
-(void)setSecondaryColors:(NSDictionary *)arg1 ;
-(void)_encode:(id)arg1 ;
-(BOOL)_decode:(id)arg1 ;
@end
